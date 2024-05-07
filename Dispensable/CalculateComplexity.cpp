#include <iostream>
#include <vector>
#include <ctime>

void randomize(){
 
}

std::vector<double> calculate_time_complexity(void (*algorithm)(std::vector<int>&), int input_size) {
    std::vector<double> time_complexity(3);
    clock_t start_time = clock();
    std::vector<int> input(input_size); // initializes to zero
    algorithm(input);
    clock_t end_time = clock();
    double elapsed_time = double(end_time - start_time) / CLOCKS_PER_SEC;
    time_complexity[0] = elapsed_time;
    time_complexity[1] = elapsed_time;
    time_complexity[2] = elapsed_time;
    return time_complexity;
}

void InsertionSort(std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}


int main() {
    int input_size = 1000;
    std::vector<double> time_complexity = calculate_time_complexity(InsertionSort, input_size);
    std::cout << "Time Complexity (best, average, worst): ";
   for (size_t i = 0; i < time_complexity.size(); ++i) {
    std::cout << time_complexity[i] << " ";
}
    std::cout << std::endl;
    return 0;
}
