import unittest
from insertionSort import insertionSort
from selectionsort import selectionSort

class TestSort(unittest.TestCase):
    def test_sort(self):
        input_data=[5,6,7,3,4,2,1]
        #sorted=insertionSort(input_data)
        sorted=selectionSort(input_data)
        result=[1,2,3,4,5,6,7]
        self.assertEqual(sorted,result)

if __name__ =='__main__':
    unittest.main()