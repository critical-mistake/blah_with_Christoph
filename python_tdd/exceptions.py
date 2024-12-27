from library import *
# import alpha.beta.mymodule as mymodule # alias

class MathException(Exception):
    def __init__(self, passedValue):
        message = "Math error: " + str(passedValue)
        super().__init__(message)
        self.message = message

class InvalidNumberException(Exception):
    def __init__(self, number):
        message = "Invalid number passed: " + str(number)
        super().__init__(message)
        self.message = message
        self.number = number

def divide(x, y):
    if(y == 0):
        # raise MathException("Invalid divisor 0")
        raise InvalidNumberException(y)
    else:
        return x / y

if __name__ == "__main__":
    try:
        result = divide(1, 0)
        print("All went well: " + str(result))
    except MathException as e:
        print(e.message)
        # doesn't obviously exist ... print("Number was: " + str(e.number))
    except InvalidNumberException as e:
        # drop the generic e.message
        print("ERROR: Invalid number for division: " + str(e.number))
    # DONT do: "except:" to catch _everything_
    finally:
        print("done if successful OR failed; in any case close resources here!")


def openFileSafely(fileName, codeActingOnFile):
    f = open(fileName)
    try:
        codeActingOnFile(f)
    finally:
        try:
            f.close()
        except:
            print("we are fucked... but at least we tried: " + fileName)
