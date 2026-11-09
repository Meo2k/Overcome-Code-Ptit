// Problem: You are given two integers n and k. List all subsets which include k elements taken from the set {1, 2, ... , n}. 


#include <iostream>


using namespace std; 

int n, k;  
int x[100]; // x[n]



void print_solution()
{
    for (int i = 1; i <= k; ++i) cout << x[i] << " "; 
    cout << "\n"; 
}

void Try(int p)
{
    for (int i = x[p - 1] + 1; i <= n - k + p; ++i)
    {
        x[p] = i; 

        if (p == k) 
            print_solution(); 
        else 
            Try(p + 1); 
    }

}

int main(void) {

    if (!(cin >> n >> k)) return 0;  

    x[0] = 0;
    Try(1); 
    return 0;
}
