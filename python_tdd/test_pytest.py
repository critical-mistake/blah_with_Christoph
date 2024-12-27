import pytest

def test_withPytest():
    assert 4 == 4

def test_withPytestFailing():
    try:
        assert 4 == 2
    # don't do "except:" as it will also catch any other exception type; e.g. NameError, OutOfMemoryError, ...
    except AssertionError:
        print("Ignoring failed test.")
        # test error (assertion didn't hold) VS test failure (execution failed unexpectedly)

@pytest.mark.parametrize(
    ("param1", "param2"),
    [
        ("a", "b"),
        ("c", "d"),
    ],
)
class TestGroup:
    """A class with common parameters, `param1` and `param2`."""

    @pytest.fixture
    def fixt(self) -> int:
        """This fixture will only be available within the scope of TestGroup"""
        return 123

    def test_one(self, param1: str, param2: str, fixt: int) -> None:
        print("\ntest_one", param1, param2, fixt)
        # assert inc(3) == 5

    def test_two(self, param1: str, param2: str) -> None:
        print("\ntest_two", param1, param2)