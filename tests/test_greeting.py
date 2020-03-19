import unittest
from greeting.greeting import hello


class TestGreeting(unittest.TestCase):
    def test_hello(self):
        testparams = [
            ["Lilla", "Hello Lilla"],
            ["Béla", "Hello Béla"],
        ]
        for name, greeting in testparams:
            with self.subTest("Testing with data", input=name, expected=greeting):
                self.assertEqual(hello(name), greeting, "The parameter is incorrect")


if __name__ == "__main__":
    unittest.main()
