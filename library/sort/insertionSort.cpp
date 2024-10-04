//
// Created by nobuh on 10/4/2024.
//

#include "insertionSort.h"
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr ll mod = 1e9 + 7;


void trace(vector<int> a, int n) {
    for(int i=0;i<n;i++) {
        if(i>0) cout<<" ";
        cout<<a[i];
    }
    cout<<endl;
}

void insertionSort(vector<int> a, int n) {
    int j,v;
    for(int i=1;i<n;i++) {
        v = a[i];
        j = i - 1;
        while(j>=0 and a[j]>v) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = v;
        trace(a,n);
    }
}