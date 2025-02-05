#include <iostream>
#include <cassert>

int average(int* arr, int n)
{
    int avg = 0;

    if(n == 0){
        std::cerr   << "File: " << __FILE__ 
                    << ", function: " << __FUNCTION__
                    << ", line: " << __LINE__ 
                    << ", Division by Zero Error, n = " << n 
                    << ", returning 0\n";
    }
    else if(n < 0){
        std::cerr   << "File: " << __FILE__ 
                    << ", function: " << __FUNCTION__ 
                    << ", line: " << __LINE__ 
                    << ", Error, n = " << n 
                    << ", returning 0\n";
    }
    else{
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        avg = sum / n;
    }

    return avg;
}


int main()
{
    int arr[3] = {1, 2, 3};
    int avg;

    // generate divide by zero error
    std::cout << "\n*** Testing Divide By Zero ***\n";
    avg = average(arr, 0);
    assert(avg == 0);


    // negative n error 
    std::cout << "\n*** Testing n < 0 ***\n";
    avg = average(arr, -1);
    assert(avg == 0);

    // no errors
    std::cout << "\n*** Testing Good Case ***\n";
    avg = average(arr, 3);
    assert(avg == 2);

    return 0;
}