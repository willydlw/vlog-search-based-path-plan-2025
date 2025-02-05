#include <iostream>

int average(int* arr, int n)
{
    int sum = 0;
    int avg = 0;

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    if(n == 0){
        std::cerr   << "File: " << __FILE__ 
                    << ", function: " << __func__ 
                    << ", line: " << __LINE__ 
                    << ", Division by Zero Error, n = " << n 
                    << ", returning 0\n";
    }
    else if(n < 0){
        std::cerr   << "File: " << __FILE__ 
                    << ", function: " << __func__ 
                    << ", line: " << __LINE__ 
                    << ", Error, n = " << n 
                    << ", returning 0\n";
    }
    else{
        avg = sum / n;
    }

    return avg;
}


int main()
{
    int arr[3] = {1, 2, 3};
    int avg;

    // generate divide by zero error
    avg = average(arr, 0);
    std::cout << "average function returned " << avg << "\n\n";

    // negative n error 
    avg = average(arr, -1);
    std::cout << "average function returned " << avg << "\n\n";

    // no errors
    avg = average(arr, 3);
    std::cout << "average function returned " << avg << "\n\n";

    return 0;
}