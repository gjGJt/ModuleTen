
#include <iostream>

using namespace std;

//recursive binary search method
int binarySearch(int arr[], int c, int f, int num) {
   if (c <= f) {
      int mid = (c + f)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, c, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, f, num);
   }
   return -1;
}
int main(void) {
   int arr[] = {2, 5, 7, 15, 56, 20, 25, 78, 36, 4};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int num;
   cout << "Enter the number to search: ";
   cin >> num;

   //calling recursive method to determine if num is in the array
   int index = binarySearch (arr, 0, n-1, num);

   //output
   if(index == -1){
      cout<< num <<" is not present in the array";
   }else{
      cout<< num <<" is present at index "<< index <<" in the array";
   }
   return 0;
}

