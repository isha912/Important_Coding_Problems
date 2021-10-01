#include<bits/stdc++.h>
using namespace std;

int main()
{
    string i;
    cin>>i;

    sort(i.begin(),i.end());
    int l=i.length();
    int gen=0;
    
	for(int x=1; x<l; x++)
    {
        if(i[x]!=i[x-1])
            gen++;
    }

    if(gen&1)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
