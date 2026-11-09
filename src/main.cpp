// Problem: You are given a number having n digits. Each digit is larger than the following digit 
// by one unit (starting from 1). List all permutations of ít digits in ascending order.  


#include <iostream>
#include <vector> 


using namespace std; 

int n; 
int x[100]; // x[n]
bool visited[100] = {false}; // visited[n]

void print_solution()
{
    for (int i=1; i<=n; ++i) cout<<x[i]; 

    cout<<"\n"; 
}

void Try(int k)
{
    for(int i=1; i<=n; ++i) // try another
    {
        if(!visited[i])
        {
            x[k] = i; 
            visited[i] = true; // mark as used 

            if (k == n) print_solution(); 
            else  Try(k+1); // move forward
            visited[i] = false; // undo
        }
    }
}
int main(void) {
    n = 3; 
    for (int i=1; i<=n; ++i) visited[i] = false;  // mark elements as false 
    
    Try(1); 
    return 0;
}
