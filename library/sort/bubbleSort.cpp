//
// Created by nobuh on 10/4/2024.
//

#include "bubbleSort.h"
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
constexpr ll mod = 1e9 + 7;

int bubbleSort(int a[], int n) {
    int sw = 0;
    bool flag = true;
    for(int i=0;flag; i++) {
        flag = false;
        for(int j=n-1;j>=i+1;j--) {
            if(a[j]<a[j-1]) {
                swap(a[j],a[j-1]);
                flag = true;
                sw++;
            }
        }
    }
    return sw;
}