#include <bits/stdc++.h>
using namespace std;
void toh(int n, int from, int to, int aux, long long &moves);
int main() {
    int T;
    cin >> T;
    while (T--) {
        long long moves = 0;
        int N;
        cin >> N;
        toh(N, 1, 3, 2, moves);
        cout << moves << endl;
    }
    return 0;
}


/*This is a function problem.You only need to complete the function given below*/
// You need to complete this function
void toh(int N, int from, int to, int aux, long long &moves) {
    if(N==1)
    {   cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
        moves++;
        return;    
    }   
    toh(N-1, from, aux, to, moves);
    cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
    moves++;
    toh(N-1,aux,to,from,moves);
    // Your code here
}
