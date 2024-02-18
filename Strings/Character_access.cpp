# include <bits/stdc++.h>

using namespace std;

int main() {

    string s = "Mehul Sharma";
    s[s.length() - 1] == 'a';

    return 0;
}














































int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.
     */
    
    sort(keyboards.begin(), keyboards.end());
    sort(drives.begin(), drives.end());
    
    vector <int>:: iterator itrk, itrd;
    itrk = keyboards.end() - 1;
    itrd = drives.end() - 1;
    int sum = -1;
    cout << (*itrk) << endl << (*itrd) << endl;
     
    while((itrk >= keyboards.begin()) and (itrd >= drives.begin())) {
        
        int curSum = (*itrk) + (*itrd);
        int selectedk = 0, selectedd = 0;
        
        if(curSum == b)
            return b;
            
        if(((*itrk) < selectedk) and ((*itrd) < selectedd))
            return sum;
        
        if((curSum < b) and (curSum > sum)){
            sum = curSum;
            selectedk = (*itrk);
            selectedd = (*itrd);
        }
            
        else {
            if(itrd > drives.begin())
                itrd--;
            
            else {
                itrd = drives.end() - 1;
                itrk--;
            }
        }
         
     }
     
     
    return sum;

}
























