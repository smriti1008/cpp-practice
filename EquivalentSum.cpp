#include<iostream>
#include<vector>
using namespace std;

int EqSum(int X){
    int sum = X;
    int val = X;
    while(val){
        val/=10;
        sum+=val;
    }
    return sum;
}

vector<int>Solve (int N){
    int X = N-1;
    bool flag = true;
    vector<int> ans;
    while(flag){
        int l = EqSum(X);
        if(l<N){
            break;
        }
        ans.push_back(X);
        X--;
    }
}

int main(){
    int N;
    cin>>N;
    vector<int> ans = Solve(N);
    for(int i=0; i<ans.size()/ans[0]; i++)
    {
        cout<<ans[i]<< " ";
    }
}