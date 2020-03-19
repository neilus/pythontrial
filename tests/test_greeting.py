import unittest
from parameterized import parameterized
from greeting.greeting import hello

class TestGreeting(unittest.TestCase):

    @parameterized.expand([
        ["Lilla", "Hello Lilla"],
        ["Béla","Hello Béla"],
    ])
    def test_hello (self, input, expected):
        
        self.assertEqual(hello(input), expected, "The parameter is incorrect")
    
if __name__ == '__main__':
    unittest.main()
    