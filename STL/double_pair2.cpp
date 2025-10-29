#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair< double ,pair<string,int>>p;

    p = make_pair(99.10 ,make_pair("NYN_GOT_LGD",20));

    cout<<p.first<<' '<<p.second.first<<' '<<p.second.second<<' ';
}