# include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r) {

    int an = mid - l + 1;
    int bn = r - mid;
    int a[an], b[bn];

    for(int i = 0 ; i < an ; i++)
        a[i] = arr[l + i];


    for(int i = 0 ; i < bn ; i++)
        b[i] = arr[mid + i + 1];

    int ptrA = 0, ptrB = 0; // initial index of array a and array b.
    int ptrArr = l; // initial index of merged sub array.

    while(ptrA < an and ptrB < bn) {
        if(a[ptrA] < b[ptrB])
            arr[ptrArr++] = a[ptrA++];

        else 
            arr[ptrArr++] = b[ptrB++];
    }

    while(ptrA < an)
        arr[ptrArr++] = a[ptrA++];

    while(ptrB < bn)
        arr[ptrArr++] = b[ptrB++];

}

void merge_sort(int arr[], int l, int r) {

    int mid = (l + r) / 2;

    if(l >= r)
        return;
    
    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main() {

    int arr[] = {5, 1, 1, 2, 0, 0};
    int r = (sizeof(arr) / sizeof(arr[0])) - 1;
    int l = 0;
    merge_sort(arr, l, r);

    for(int i = 0 ; i <= r ; i++) {
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}