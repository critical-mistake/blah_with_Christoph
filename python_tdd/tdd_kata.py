import pytest

#1 ————————————————————————————————
# Create a simple String calculator with a method signature:
# int Add(string numbers)
#
#         The method can take up to two numbers, separated by commas, and will return their sum.
#         for example “” or “1” or “1,2” as inputs.
#         (for an empty string it will return 0)
#
#          Hints:
#          - Start with the simplest test case of an empty string and move to one and two numbers
#          - Remember to solve things as simply as possible so that you force yourself to write tests you did not think about
#          - Remember to refactor after each passing test

def add(string):
    return 0


def test_given_empty_string_should_return_zero():
    assert add("") == 0
    
def test_given_one_number_as_string_should_return_that_number():
    assert add("1") == 1 

