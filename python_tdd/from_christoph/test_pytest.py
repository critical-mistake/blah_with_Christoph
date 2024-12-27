# PYTEST SETUP
# ===================================================================================================
# using pytest (install via https://pypi.org)
# $ pipx install pytest
# using pipx instead pip, as my environment is managed by homebrew
# get sure the pip installed apps are on the PATH variable

# $ pytest (it will collect all files prefixed with "test_")
# CMD+SHIFT+P ... "Run Test"
# ==> add shortcut: CMD+T to run test ;)
# or: icon on the bottom, laptop with start sign

# in /.vscode/settings.json =>
# "pytest_runner.pytest_exec": "/Users/toh/.local/bin/pytest",

# pass the -s flag to print stdout (otherwise captured and only printed when test fails)

# ===================================================================================================

import pytest

def inc(x):
    return x + 1

def test_answer():
    assert inc(3) == 4

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