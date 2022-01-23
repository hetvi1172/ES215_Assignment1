#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    double m1[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            m1[i][j]=rand();
        }
    }

    double m2[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            m2[i][j]=rand();
        }
    }

    double ans[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            ans[i][j]=0;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                ans[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}