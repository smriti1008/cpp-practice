#include <iostream>
using namespace std;

int main()
// {
//     string s="naman";
//     int start=0, end=s.size()-1;
//     while(start<end)
//     {
//         swap(s[start],s[end]);
//         start++, end--;
//     }
//     cout<<s<<endl;
//     if(s[start]==s[end])
//     cout<<"palindrome";
//     else
//     cout<<"not a plaindrome";
//     return 0;
// }

{
    float add = 255.100.25.60;
    int index=0;
    string ans;
    while(index<add.size)
    {
        if(add[index]=='.')
        ans=ans+"[.]";
        else
        ans=ans+add[index];
        index++;
    }
    return ans;
}

//longest substring without repeating char

#include<iostream>
using namespace std;
int main()
{
    string s;
    vector<bool>count(256,0);
    int first=0, second=0, length=0;
    while(second<s.size())
    {
        while(count[s[second]])
        {
            count[s[first]]=0;
            first++;
        }
        count[s[second]]=1;
        length=max(length,second-first+1);
        second++;
    }
    return length;
}

//smallest distinct window


vector<int> count(256,0)
int first=0, second=0, leng=str.size(), diff=0;
while(first<str.size())
{
    if(count [str[first]]== 0)
    diff++;
    first++;
}
for(int i=0;i<256;i++)
count[i]=0;
first=0;
while(second<str.size())
{
    while(diff && second<str.size())
    {
        if(count[str[second]]==0)
        diff--;
        count[str[second]]++;
        second++;
    }
    leng=min(leng, second-first);
    while(diff!=1)
    {
        leng=min(leng,second-first);
        count[s[first]]--;
        if(count[str[first]]==0)
        diff++;
        first++;
    }
}
return leng;

//improved code
class Solution {
  public:
    int findSubString(string& str) {
        // code here
        vector<int> count(256,0);
        int first=0, second=0, diff=0, len=str.size();
        while(first<str.size())
        {
            if(count[str[first]]==0)
            diff++;
            count[str[first]]++;
        };
        for(int i=0;i<256;i++)
        count[i]=0;
        first=0;
        while(second<str.size())
        {
            while(diff>0 && second<str.size())
            {
                if(count[str[second]]==0)
                diff--;
                count[str[second]]++;
                second++;
            }
            len=min(len, second-first);
            while(diff==0)
            {
                len=min(len, second-first);
                count[str[first]]--;
                if(count[str[first]]==0)
                diff++;
                first++;
            }
        }
        return len;
    }
};


//kmp algorithm 
//longest prefix suffix problem (prefix is same as suffix)

 vector<int>lps(s.size(),0);
        int pre=0, suf=1;
        while(suf<s.size())
        {
            if(s[pre]==s[suf])
            
            {
                lps[suf]=pre+1;
                pre++;
                suf++;
           }
            
            else
            {
                if(pre==0)
                {
                    lps[suf]=0;
                    suf++;
                }
                else
                {
                    pre=lps[pre-1];
                }
            }
        }
        return lps[s.size()-1];

        





