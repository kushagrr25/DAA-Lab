#include <iostream>

using namespace std;

int main() {
    

    int arr[] = {4,-4,-1,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    
    int curr = arr[0];
    int res= arr[0];

    for(int i = 1; i < n; i++) {
        curr=max(arr[i],curr+arr[i]);
        res=max(res , curr);
    }

    cout << "Maximum Subarray Sum = " << res << endl;
    return 0;
}
