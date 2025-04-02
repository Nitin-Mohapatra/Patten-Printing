#include <iostream>
#include <String>
using namespace std;
int main(){
    int row;
    cout << "Enter the no of row";
    cin >> row;
    string patStore;
    for(int i = 1 ; i <= row ; i++){
        int pat = i;
        cout << patStore << pat << endl;
        patStore += to_string(pat) ;
        patStore += " " ;
    }
    return 0;
}