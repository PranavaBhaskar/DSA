#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << "Before Sorting" << endl;
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i=0;i<n-1;i++){
        int first = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[first]){
                first = j;
            }
        }
        swap(a[first],a[i]);
    }
    cout << "After Sorting" << endl;
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}