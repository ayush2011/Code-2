#include<bits/stdc++.h>
using namespace std;
void findTheDifference(string s, string t) 
{
    int sum=0,sum1=0;
    char y;
    for(int i=0;i<t.length();i++)
    {
        sum+=t[i];
    }
    for(int j=0;j<s.length();j++)
    {
        sum1+=s[j];   
    }
    y=(char)(sum-sum1);
    cout<<"THE MISSING CHARACTER IN THE FIRST STRING WILL BE:-"<<y<<endl;
}
int main()
{
	string str,str1;
	cout<<"ENTER THE FIRST STRING:-"<<endl;
	cin>>str;
	cout<<"ENTER THE SECOND STRING:-"<<endl;
	cin>>str1;
	findTheDifference(str,str1);
}
