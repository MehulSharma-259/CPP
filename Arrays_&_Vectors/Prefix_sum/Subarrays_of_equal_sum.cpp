# include <bits/stdc++.h>
using namespace std;

void subArray_checker_twoPointer(vector <int> &v, vector <int> &sub1, vector <int> &sub2) {
    vector <int> copy = v;
    int left_ptr = 0, right_ptr = copy.size() - 1;
    bool answer = false;

    while(left_ptr < right_ptr) {

        // checking array is ready to divide or not.
        if(copy[left_ptr] == copy[right_ptr] && (abs(left_ptr - right_ptr) == 1)) {
            // bool to check whether it can be divided or not.
            answer = true;

            // pushing elements in sub array.
            for(int i = 0 ; i < v.size() ; i++) {
                if(i <= left_ptr)
                    sub1.push_back(v[i]);
                
                else
                    sub2.push_back(v[i]);
            }
            break;
        }

        // condition where sum of left_p and right_p are same but full array is not covered yet.
        else if(copy[left_ptr] == copy[right_ptr] && (abs(left_ptr - right_ptr) != 1)) {
            left_ptr++;
            copy[left_ptr] += copy[left_ptr - 1];
        }

        // increment of left_ptr and prefix sum.
        else if(copy[left_ptr] < copy[right_ptr]) {
            left_ptr++;
            copy[left_ptr] += copy[left_ptr - 1];
        }

        // decrement of right_ptr and suffix sum.
        else if(copy[left_ptr] > v[right_ptr]){
            right_ptr--;
            copy[right_ptr] += copy[right_ptr + 1];
        }
    }

    if(answer == true) {
        cout << "Arrays are divided into two equal parts at index =  " << left_ptr << endl;
        cout << "First array : ";
        for(int i = 0 ; i < sub1.size() ; i ++)
            cout << sub1[i] << " ";
        cout << endl;

        cout << "Second array : ";
    
        for(int i = 0 ; i < sub2.size() ; i ++)
            cout << sub2[i] << " ";
        cout << endl;
    }

    else {
        cout << "Arrays cannot be divided." << endl;
    }
}

void subArray_checker(vector <int> &v, vector <int> &sub1, vector <int> &sub2) {
    int sum = 0, i;
    bool answer = false;

    for(int ele: v)
        sum += ele;

    for(i = 0 ; i < v.size() ; i++) {
        int prefix_sum = 0, suffix_sum = 0, index = 0;
        while(index <= i) {
            prefix_sum += v[index];
            index++;
        }
        suffix_sum = sum - prefix_sum;

        if(prefix_sum == suffix_sum){
            answer = true;
            break;
        }
    }

    if(answer == true) {
        cout << "Arrays are divided into two equal parts at index =  " << i << endl;
        cout << "First array : ";

        for(int j = 0 ; j <= i ; j++) {
            sub1.push_back(v[j]);
            cout << v[j] << " ";
        }
        cout << endl;

        cout << "Second array : ";
    
        for(int j = i + 1 ; j < v.size() ; j++) {
            sub2.push_back(v[j]);
            cout << v[j] << " ";
        }
        cout << endl;
    }

    else {
        cout << "Arrays cannot be divided." << endl;
    }
}

int main() {
    vector <int> v, sub1, sub2;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        int element;
        cin >> element;
        v.push_back(element);
    }

    cout << "Array is : ";

    for(int i = 0 ; i < n ; i++) {
        cout << v[i] << " ";
    }cout << endl;

    subArray_checker(v, sub1, sub2);
    return 0;

}