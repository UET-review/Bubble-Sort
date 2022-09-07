#include <iostream>
#include <fstream>

using namespace std;

void print(int a[], int n){
    for(int i = 0 ; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void bubble_sort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n - i -1; j++){
            if (a[j] > a[j + 1]) swap(a[j], a[j +1]);
        }
    }
}

int main(){
    ifstream infile("input.txt");
    int n;
    int a[1000];
    infile >> n;
    for(int i = 0; i < n; i++){
        infile >> a[i];
    }
    cout << "Mảng ban đầu: " << endl;
    print(a, n);
    bubble_sort(a, n);
    print(a,n);
    infile.close();
    return 0;
}