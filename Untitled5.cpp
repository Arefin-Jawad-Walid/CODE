#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,i;

    cin >> N;
    vector<int>v;
    vector<int>prog,math,pe;

    for (i=0; i<N ; i++)
    {
        int a;
        cin >>a;
        v.push_back(a);


        if(v[i]==1)
        prog.push_back(i+1);

        if(v[i]==2)
        math.push_back(i+1);

        if(v[i]==3)
        pe.push_back(i+1);
    }

    int teamsize=min(min( prog.size(),math.size()),pe.size());

    if(teamsize>0)
    {
        cout <<teamsize<<endl;

        for (int j=0; j<teamsize ;j++)
            {
             cout <<prog[j]<<" "<< math[j] <<" "<<pe[j]<< endl;
            }

    }

    else {
           cout << 0 << endl;
         }

    return 0;
}
