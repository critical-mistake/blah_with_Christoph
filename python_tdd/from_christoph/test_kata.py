import pytest

defaultDelimiters = [",","\n"]

def add(input: str):
    if(input == ""): return 0
    inputAndDelimiters = extractDelimiters(input)
    numbers = split(inputAndDelimiters[0], inputAndDelimiters[1])
    result = 0
    checkNegatives(numbers)
    for n in numbers:
        result += n
    return result

def checkNegatives(numbers: list[int]):
    negatives = []
    for n in numbers:
        if(n < 0):
            negatives.append(n)
    
    if (len(negatives) > 0):
        raise MessagedException("Negatives are not allowed: " + str(negatives))

def extractDelimiters(input: str):
    if(input.startswith("//") == False):
       return [input, defaultDelimiters]
    return [input[4:], input[2:3]]

def split(input: str, delimiters: list[str]):
    result = []
    tmp = ""
    for inp in input:
        if(inp in delimiters):
            result.append(int(tmp))
            tmp = ""
        else:
            tmp += inp
    result.append(int(tmp))
    return result

def test_split():
    assert split("1;2", [";"]) == [1,2]

def test_extractDelimiters():
    assert extractDelimiters("//;\ntest") == ["test",";"]

def test_empty():
    assert add("") == 0

def test_any_number_of_numbers():
    assert add("0") == 0
    assert add("20,22") == 42
    assert add("6,4,11") == 21

def test_linefeed():
    assert add("1\n3") == 4
    assert add("1\n3,10") == 14
    assert add("1\n2,3\n4") == 10

def test_custom_delimiter():
    assert add("//;\n1;2") == 3
    assert add("//|\n1|2|21") == 24

# https://docs.pytest.org/en/4.6.x/reference.html#exceptioninfo
def test_negatives():
    with pytest.raises(Exception) as e_info:
        add("1,-3,2")
    assert e_info.value.message.find("-3") != -1

    with pytest.raises(Exception) as e_info:
        add("1,-3,-2")
    assert e_info.value.message.find("-3") != -1
    assert e_info.value.message.find("-2") != -1

class MessagedException(Exception):
    def __init__(self, message):
        super().__init__(message)
        self.message = message
