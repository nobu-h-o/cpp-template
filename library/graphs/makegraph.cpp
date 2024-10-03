//
// Created by nobuh on 10/3/2024.
//

#include "makegraph.h"
#include <bits/stdc++.h>
using namespace std;

void makegraph(vector<vector<int>> g, vector<int> a, vector<int> b) {
    // 0 based indexing
    int n = a.size();
    for(int i=0;i<n;i++) {
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }
}