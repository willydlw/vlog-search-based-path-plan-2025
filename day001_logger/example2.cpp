#include <iostream>
#include <sstream>
#include <string>
#include <cassert>

// Macro 
#define LOG(msg) errorLog(__FILE__, __FUNCTION__, __LINE__, msg)


// Forward declaration (function prototyes)
int average(int* arr, int n);
int errorLog(const char* file, const char* function, int line, const std::string& msg);


// Function Definitions
int errorLog(const char* file, const char* function, int line, const std::string& msg)
{
    std::cerr << "[" << file << " " 
        << function << " " 
        << line << "] "
        << msg << "\n";

    return 1;
}


int average(int* arr, int n)
{
    int avg = 0;

    if(n == 0){
        std::stringstream ss;
        ss << "Division by Zero Error, n = " << n << ", returning 0";
        LOG(ss.str());
        
    }
    else if(n < 0){
        std::stringstream ss;
        ss << "Error, n = " << n << ", returning 0";
        LOG(ss.str());
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
    LOG("*** Testing Divide By Zero ***\n");
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