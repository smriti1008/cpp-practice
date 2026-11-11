// #include<iostream>
// using namespace std;

// void print(int arr[], int index, int n, int sum)
// {
//     if(index==n)
//     {
//         cout<<sum<<endl;
//         return;
//     }

//     print(arr, index+1, n, sum);
//     print(arr, index+1, n, sum+arr[index]);
// }

// int main()
// {
//     int arr[]={1,2,3,4};
//     print(arr,0,4,0);
// }




#include<iostream>
#include<vector>
using namespace std;

void print(int arr[], int index, int n, int sum, vector<int>&ans)
{
    if(index==n)
    {
        ans.push_back(sum);
        return;
    }

    print(arr, index+1, n, sum, ans);
    print(arr, index+1, n, sum+arr[index], ans);
}

int main()
{
    int arr[]={1,2,3,4};
    vector<int>ans;
    print(arr,0,4,0,ans);
    for(int i=0; i<ans.size(); i++)
    cout<<ans[i];
    
}