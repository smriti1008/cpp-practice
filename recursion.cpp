// #include<iostream>
// using namespace std;

// void fun3(int n)
// {
//     cout<<n<<"days left for birthday "<<endl;
// }
// void fun2(int n)
// {
//     cout<<n<<"days left for birthday "<<endl;
// }
// void fun1(int n)
// {
//     cout<<n<<"days left for birthday "<<endl;
// }
// void fun0(int n)
// {
//     cout<<n<<" Happy birthday "<<endl;
// }
// int main()
// {
//     fun3(3);
//     fun2(2);
//     fun1(1);
//     fun0(0);
// }




//method 2


// void fun1(int n);
// void fun2(int n);
// void fun3(int n);

// void fun3(int n)
// {
//     cout<<n <<"days left for birthday\n";
//     fun2(n-1);
// }
// void fun2(int n)
// {
//     cout<<n <<"days left for birthday\n";
//     fun1(n-1);
// }
// void fun1(int n)
// {
//     cout<<n <<"days left for birthday\n";
// }
// int main()
// {
//     fun3(3);
//     fun2(2);
//     fun1(1);
// }


//recursive method

// void fun3(int n)
// {
//     if(n==0)
//     {
//         cout<<"happy birthday";
//         return;
//     }
//     cout<<n <<"days left for birthday\n";
//     fun3(n-1);
// }
// int main()
// {
//     fun3(3);
// }


//print even no from 1 to n

// #include<iostream>
// using namespace std;

// void printeven(int num, int N)
// {
//     if(num>N)   //num==N
//     {
//         // cout<<num;
//         return;
//     }
//     cout<<num<<" ";
//     printeven(num+2,N);
// }

// int main()
// {
//     int N;
//     cin>>N;
//     // if(N%2==1)
//     // N--;
//     printeven(2,N);
// }   



//print factorial

// #include<iostream>
// using namespace std;

// int fact(int n)
// {
//     //base case
//     if(n==1)
//     return 1;
//     return n*fact(n-1); 
// }
// int main()
// {
//     int n;
//     n=5;
//     cout<<fact(n);
// } 


//recursion in string

// #include<iostream>
// using namespace std;


// bool checkPalindrome(string &str, int start, int end)
// {
//     if(start>end)
//     {
//         return 1;
//     }
//     if(str[start]!=str[end])
//     {
//         return 0;
//     }
//     else
//     return checkPalindrome(str, start+1, end-1);
// }
// int main()
// {
//     string str="naman";
//     cout<<checkPalindrome(str, 0, 4);
// }




// #include<iostream>
// using namespace std;

// bool binarySearch(int arr[], int start, int end, int X)
// {
//     if(start>end)
//     return 0;
    
//     int mid=start+(end-start)/2;

//     if(arr[mid]==X)
//     return 1;
//     else if(arr[mid]<X)
//     return binarySearch(arr, mid+1, end, X);
//     else
//     return binarySearch(arr, start, mid-1, X);
// }


// int main()
// {
//     int arr[]={2,4,6,8,10};
//     cout<<binarySearch(arr, 0, 4,10);
// }


#include<iostream>
using namespace std;

 void print(int n)
 {
    if(n==1)
    {
        cout<<1;
        return;
    }
    print(n-1);
    cout<<n;
 }
 