
#include <iostream> 
using namespace std; 
  

  //recursive method
void towerOfHanoi(int n, char rodOne, char rodThree, 
                  char rodTwo) 
{ 
    if (n == 0) { 
        return; 
    } 
    //printing out moves needed
    towerOfHanoi(n - 1, rodOne, rodTwo, rodThree); 
    cout << "Move disk " << n << " from rod " << rodOne 
         << " to rod " << rodThree << endl; 
    towerOfHanoi(n - 1, rodTwo, rodThree, rodOne); 
} 
  
// getting specified number of disks
int main() 
{ 
    int N;
    cout<< "How many disks are there? ";
    cin>> N;
  
    // A, B and C are names of rods 
    towerOfHanoi(N, 'A', 'C', 'B'); 
    return 0; 
} 

