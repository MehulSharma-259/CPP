# include <bits/stdc++.h>
using namespace std;

void radix_sort(int arr[], int size) {
    int max = arr[0];

    for(int i = 1 ; i < size ; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    int temp = max, digits = 0;

    while(temp) {
        digits++;
        temp /= 10;
    }

    int places = 1;

    while(digits) {

        int singleDigit;

        // Creation of frequency array.
        int freq[10];
        for(int i = 0 ; i < 10 ; i++) 
            freq[i] = 0;
        
        for(int i = 0 ; i < size ; i++) {
            singleDigit = (arr[i] / places) % 10;
            // cout << singleDigit << " ";
            freq[singleDigit]++;
        }

        // Calculating cumulative frequency.
        for(int i = 1 ; i < 10 ; i++) 
            freq[i] += freq[i - 1];  

        // Creating answer array.
        int ptrArr = size - 1;
        int *ans = (int*)calloc(size, sizeof(int));

        while(ptrArr >= 0) {
            singleDigit = (arr[ptrArr] / places) % 10;
            ans[--freq[singleDigit]] = arr[ptrArr];
            ptrArr--;
        }

        // Copying back to original array;
        for(int i = 0 ; i < size ; i++)
            arr[i] = ans[i];

        free(ans);

        places *= 10;
        digits--;
    }

}


int main() {
    int arr[] = {23, 2512, 592, 983, 29, 65, 99, 9, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    radix_sort(arr, n);

    for(int i = 0 ; i < n ; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}