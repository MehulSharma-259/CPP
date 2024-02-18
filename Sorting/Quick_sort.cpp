# include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r) {
    // int pivotElement = arr[r];
    int i = l, j = i + 1;
    while(j < r) {
        if(arr[j] < arr[r] and arr[i] >= arr[r]) {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else j++;
    }
    swap(arr[i], arr[r]);
    return i;
}

void quick_sort(int arr[], int l, int r) {

    if(l >= r) 
        return;

    int pivot = partition(arr, l, r);
    quick_sort(arr, l, pivot - 1);
    quick_sort(arr, pivot + 1, r);
}


int main() {

    int arr[] = {5, 52, 92, 1, 2, 9, 2, 0, -12};
    int r = sizeof(arr) / sizeof(arr[0]) - 1;
    int l = 0;

    quick_sort(arr, l, r);

    for(int i = 0 ; i <= r ; i++) 
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}