#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int maxVal = *max_element(a.begin(), a.end());
    int minVal = *min_element(a.begin(), a.end());
    
   
    int maxIdx = -1;
    for(int i = 0; i < n; i++){
        if(a[i] == maxVal){ maxIdx = i; break; }
    }
    int minIdx = -1;
    for(int i = n-1; i >= 0; i--){
        if(a[i] == minVal){ minIdx = i; break; }
    }
    
    int swaps = maxIdx + (n - 1 - minIdx);
    
    if(maxIdx > minIdx) swaps--;
    
    cout << swaps << endl;
    return 0;
}