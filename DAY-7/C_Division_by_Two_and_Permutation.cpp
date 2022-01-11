#include <bits/stdc++.h>
using namespace std;

void printRepeating(long long arr[], int size,int j) 
{ 
    int *count = new int[sizeof(int)*(size - 2)]; 
    int i; 
        
    for(i = j; i < size; i++) 
    { 
        if(count[arr[i]] == 1&&arr[i]>1) 
        arr[i]/=2;
        else
            count[arr[i]]++; 
    } 
}

bool permutation(long long arr[], int n)
{
    // Set to check the count
    // of non-repeating elements
    set<long long> hash;
 
    long long maxEle = 0;
 
    for (int i = 0; i < n; i++) {
 
        // Insert all elements in the set
        hash.insert(arr[i]);
 
        // Calculating the max element
        maxEle = max(maxEle, arr[i]);
    }
 
    if (maxEle != n)
        return false;
 
    // Check if set size is equal to n
    if (hash.size() == n)
        return true;
 
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        for(int i=0;i<n;i++){
            while(arr[i]>n){
                arr[i]/=2;
            }
        }
        
        for(int i=0;i<n;i++){
        printRepeating(arr,n,i);
        }
        
        if(permutation(arr,n))cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}