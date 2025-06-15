#include <bits/stdc++.h>
using namespace std;
// in this i iam goinv to write thbe Pair in c++ for DSA (data Stracture and Algorithum)
void Pair()
{
    // this is one form of Pair
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second;

    // this another type of writing Pair
    pair<int, pair<int, int>> q = {1, {2, 3}};
    cout << q.first << " " << q.second.first << " " << q.second.second;
}
// vector
void Vector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << v[0] << " " << v[1];
    cout<<endl;

    // this for pair
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);