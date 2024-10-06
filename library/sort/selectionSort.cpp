//
// Created by nobuh on 10/4/2024.
//

#include "selectionSort.h"
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr ll mod = 1e9 + 7;

int selectionSort(vector<int>& a, int n) {
    int minj, sw=0;
    for(int i=0;i<n-1;i++) {
        minj=i;
        for(int j=i;j<n;j++) {
            if(a[j]<a[minj]) minj = j;
        }
        swap(a[i], a[minj]);
        if(i!=minj) sw++;
    }
    return sw;
}