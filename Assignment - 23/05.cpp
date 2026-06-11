// 5. Write a C++ program to calculate the volume of a cuboid

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float length, breadth, height, volume;
    cin >> length >> breadth >> height;
    volume = length * breadth * height;
    cout << volume;
    return 0;
}