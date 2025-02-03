//Given an array arr[]. Rotate the array to the left 
//(counter-clockwise direction) by d steps, where d 
//is a positive integer. Do the mentioned change in 
//the array in place.

//(6KYU) rotateArr

#include <its/stdc++.h>
void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        d%=n;
        vector<int>temp(n);
        
        for(int i = 0; i<n-d; i++){
            temp[i] = arr[d+i];
        }
        
        for(int i = 0; i<d; i++){
            temp[n - d + i] = arr[i];
        }
        
        arr = temp;
    }