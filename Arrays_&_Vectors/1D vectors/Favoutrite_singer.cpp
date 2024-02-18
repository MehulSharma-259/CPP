#include <bits/stdc++.h>
using namespace std;

void printing(vector <int> v) {
    cout << endl;
    for(int i: v)
        cout << i << " " ;
    cout << endl;
}

void search_output(vector <int> &output,unsigned long int count) {
	if(count > output[0]) {
		output.clear();
		output.push_back(count);
	}

	else if(count == output[0]){
		output.push_back(count);
    }
	else 
		return;
}

int count_favourite(vector <unsigned long int> &playlist) {
	vector <int> output{1};
	int element = playlist[0];
	unsigned long int count = 1;
	for(int i = 1 ; i < playlist.size() ; i++) {
		if(playlist[i] == element){
            printing(output);
			count++;
            if(i == (playlist.size() - 1))
                search_output(output, count);
		}
		else{
			element = playlist[i];
			search_output(output, count);
            printing(output);
			count = 1;
		}
	}
	return output.size();
}

int main() {
	int N;
	cin >> N;    //Reading input from STDIN
	vector <unsigned long int> v;
	for(int i = 0 ; i < N ; i++) {
		int element;
		cin >> element;
		v.push_back(element);
	}

    int temp;
    for (int i = 0; i < v.size(); i++)
    {
        int flag=0;
        for (int j = 0; j < v.size()-1-i; j++)
        {
            if(v[j]>v[j+1])
            {
                temp=v[j+1];
                v[j+1]=v[j];
                v[j]=temp;
                flag=1;
            }
        } 
        if(flag==0)  
            break;
    }   
	for(int i: v)
		cout << i << " ";
	cout << endl;
	cout << count_favourite(v) << endl;	// Writing output to STDOUT
}