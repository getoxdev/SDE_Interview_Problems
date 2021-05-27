#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

int val(char r)
{
    if(r=='I')
        return 1;
    if(r=='V')
        return 5;
    if(r=='X')
        return 10;
    if(r=='L')
        return 50;
    if(r=='C')
        return 100;
    if(r=='D')
        return 500;
    if(r=='M')
        return 1000;

return 0;
}

int main()
{
    boost;
    string s;
    cin>>s;

    int n=s.size(),res=0;
    for(int i=0;i<n;i++)
    {
        int s1=val(s[i]);

        if(i!=n-1)
        {
            int s2=val(s[i+1]);

            if(s1>=s2)
                res+=s1;
            else
            {
                res+=(s2-s1);
                i++;
            }
        }
        else
            res+=s1;
    }

    cout<<res<<"\n";

    int num;
    cin>>num;

    string str;
    int m[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

    int j=12;
    while(num)
    {
        int temp=num/m[j];
        for(int i=0;i<temp;i++)
            str.append(sym[j]);

        num=num%m[j];
        j--;
    }

    cout<<str;
return 0;
}