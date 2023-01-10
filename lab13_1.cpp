#include<iostream>
#include <ctime>
using namespace std;

long long int fibonacci(int x); 

int main(){
    int x;
    cin >> x;
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    cout << fibonacci(x);
    return 0; 
}

long long int fibonacci(int x){
    if(x<=1){
        return x;
    }else{
        return fibonacci(x-1) + fibonacci(x-2);
    }
} 