#include <bits/stdc++.h>
using namespace std;


int maxSum(int array[], int n)
{
    int sum = 0;
    int MaxSum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += array[i];

        if (sum > MaxSum)
        {
            MaxSum = sum;
        }
        else if (sum < 0)
        {
            sum = 0;
        }
    }
    return MaxSum;
}
int kadane(int arr[], int n)
{
    // stores the maximum sum subarray found so far
    int max_so_far = 0;
 
    // stores the maximum sum of subarray ending at the current position
    int max_ending_here = 0;
 
    // traverse the given array
    for (int i = 0; i < n; i++)
    {
        // update the maximum sum of subarray "ending" at index `i` (by adding the
        // current element to maximum sum ending at previous index `i-1`)
        max_ending_here = max_ending_here + arr[i];
 
        // if the maximum sum is negative, set it to 0 (which represents
        // an empty subarray)
        max_ending_here = max(max_ending_here, 0);
 
        // update the result if the current subarray sum is found to be greater
        max_so_far = max(max_so_far, max_ending_here);
    }
 
    return max_so_far;
}

int main() {
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int sum =0;
        for(int i= 0;i<n;i++)
        {
            cin>>arr[i];
            sum = sum + arr[i];
        }
        sort(arr, arr+n);
        int sum2 = 0;
            for(int i=0;i<k;i++)
            {
                if(arr[i]<0)
                {
                    arr[i] = arr[i] * -1;
                }
            }
           
            sum2=0;
            for (int i = 0; i < n; ++i)
            {
                if(arr[i]>0)
                {
                    sum2+=arr[i];
                }
            }
            cout<<sum2<<endl;
    }
	// your code goes here
	return 0;
}
