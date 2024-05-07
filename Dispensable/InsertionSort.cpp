#include<iostream>

void getUnsortedArray(int * size, int Unsorted_Array[])
{
    
    std::cout<<"Enter the size of an integer Array";
    std::cin>>*size;
    std::cout<<"Enter the elements of Array in order";
    for(int i=0;i<*size;i++)
    {
        std::cin >> Unsorted_Array[i];
        std::cout << std::endl;
    }
   
}
void InsertionSort(int size, int Unsorted_Array[]) {
    for (int i = 1; i < size; i++) {
        int temp = Unsorted_Array[i];
        int j = i - 1;
        while (j >= 0 && Unsorted_Array[j] > temp) {
            Unsorted_Array[j + 1] = Unsorted_Array[j];
            j--;
        }
        Unsorted_Array[j + 1] = temp;
    }
}

void printArray(int size, int Array[]){
    std::cout<<"[ ";
    for(int i=0;i<size;i++)
    {
        std::cout<<"  "<<Array[i]; 
        }
    std::cout<<" ]"<<std::endl;
}
int main(){
    int size;
    int Unsorted_Array[size];
    getUnsortedArray(&size, Unsorted_Array);
    printArray(size,Unsorted_Array);
    InsertionSort(size,Unsorted_Array);
    printArray(size,Unsorted_Array);
}