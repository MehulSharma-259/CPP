# include <bits/stdc++.h>
using namespace std;

void count_sort(int arr[], int size) {
    int max = arr[0];

    // Finding max element.
    for(int i = 1 ; i < size ; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    // Declaration of frequency array.
    int freq[max + 1];

    // Initializing every element with 0.
    for(int i = 0 ; i < max + 1 ; i++) 
        freq[i] = 0;

    // Creation of frequency array.
    for(int i = 0 ; i < size ; i++)
        freq[arr[i]]++;

    // Calculation of cumulative frequency.
    for(int i = 1 ; i < max + 1 ; i++) 
        freq[i] += freq[i - 1];

    // Creation of answer array.
    int ptrArr = size - 1;
    int *ans = (int*)calloc(size, sizeof(int));

    // Calculation of sorted array.
    while(ptrArr >= 0) {
        ans[--freq[arr[ptrArr]]] = arr[ptrArr];
        ptrArr--;
    }

    // Copy back to the original array.
    for(int i = 0 ; i < size ; i++) 
        arr[i] = ans[i];

    free(ans);

}


int main() {

    int arr[] = {2, 5, 1, 9, 0, 7, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    count_sort(arr, n);

    for(int i = 0 ; i < n ; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;

}