//
// Created by TaiTitans on 7/21/2023.
//
#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int problems_solved = 0;
    for(int i=0;i<n;i++){
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        int sure_count = petya + vasya + tonya;

        if(sure_count >=2){
            ++problems_solved;
        }
    }
    cout<<problems_solved<<endl;
    return 0;
}