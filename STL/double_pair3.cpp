#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<pair<string,int> , double>p;

    p = make_pair(make_pair("NYN_GOAT",20),99.12350988);

    cout<<p.first.first<<' '<<p.first.second<<' '<<p.second<<' ';
}