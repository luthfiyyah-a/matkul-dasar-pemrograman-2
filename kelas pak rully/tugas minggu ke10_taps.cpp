#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){

    int t;
    double x; // x jam yang diperlukan 1 keran untuk mengisi 1 tangki
    double perjam; //total bagian tangki yang bisa diisi dalam 1 jam
    int n;

    scanf("%d", &t);

    while(t--){

        perjam = 0;

        scanf("%d", &n);

        while(n--){
            scanf("%lf", &x);
            perjam += (1/x);
        }

        //printf("%lf", 1/perjam);
        cout << 1/perjam << '\n';
    }

    return 0;
}
