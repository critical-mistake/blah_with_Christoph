# https://docs.python.org/3/library/exceptions.html
# Errors (fatal before running): SyntaxError, TypeError, NameError, IndexError, KeyError, ...
# Exceptions (non-fatal during running): (Base)Exception, AssertionError, EOFError ... custom defined ones.

import traceback

def calculate(value: int):
    if(value < 0):
        raise InvalidException(value)
    return value + 42

class InvalidException(Exception):
    def __init__(self, passedValue):
        message = "Invalid value: [" + str(passedValue) + "]!"
        super().__init__(message)
        self.message = message

def tryException():
    try:
        result = calculate(-2)
        print("Will never be reached...")
    except InvalidException as e:
        print("Specific error: " + e.message)
    except:
        print("Any other error.")
    else:
        print("All went well.")
    finally:
        print("Do it in any case.")

def fileHandling():
    try:
        f = open("demofile.txt")
        try:
            f.write("Lorum Ipsum")
        except:
            print("Something went wrong when writing to the file")
        finally:
            f.close() # could error handle that as well
    except:
        print("Something went wrong when opening the file")


class CustomException(Exception):
    def __init__(self):
        super().__init__()

def traceBack():
    try:
        fail()
    except Exception as e:
        print("Traceback/stacktrace:")
        print("======================")
        # traceback.print_exc()
        # traceback.print_tb(e.__traceback__)
        # also nice: traceback.print_stack()
        # actually: send it to logger!
        print("======================")

def fail():
    try:
        raise Exception()
    except Exception as e:
        # error.exception()
        tb = e.__traceback__
        newE = CustomException()
        newE.add_note("Additional note")
        raise newE.with_traceback(tb)
    
# ... https://docs.python.org/3/tutorial/errors.html ...

# definition order is relevant (like in C, meh)
if __name__ == "__main__":
    traceBack()