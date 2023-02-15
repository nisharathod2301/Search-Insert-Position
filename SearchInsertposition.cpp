// Online C++ compiler to run C++ program online
#include <iostream>
#include <array>
using namespace std;
int main() {
    // Write C++ code here
    array <int,4> arr = {1,3,5,6};
    int x = 5;
    int low = 0;
    int high = arr.size();
    int mid;
    while(low<=high)
    {
       mid = (low + high)/2;
       if (x == arr[mid]){
           cout<<mid;
         return mid;

       }
    
       else if (x > arr[mid]) // x is on the right side
           low = mid + 1;
    
       else                  // x is on the left side
           high = mid - 1;
        
    }
    if(x<arr[mid]){
        cout<<mid;
    }
    else{
        cout<<mid+1;
    }
    return 0;
}
