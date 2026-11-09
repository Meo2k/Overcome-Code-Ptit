// Problem: You are given an integer n. List all numbers from 1 to n in binary format. 


#include <iostream>
#include <vector> 


using namespace std; 

int n; 
char x[100]; // x[n]


void print_solution()
{
    for (int i=1; i<=n; ++i) cout<<x[i]; 

    cout<<"\n"; 
}

void Try(int k)
{
    
    for (auto c : {'0', '1'})
    {
        x[k] = c;
        if (k == n) print_solution(); 
        else  Try(k+1); // move forward
    
    }
}
int main(void) {
    n = 3; 
    Try(1); 
    return 0;
}
