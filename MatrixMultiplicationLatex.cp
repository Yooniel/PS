#include <iostream>
using namespace std;

int a,b,c,d,A[10][10],B[10][10];

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false); cin.tie(0);
    cin >> a >> b >> c >> d;
    assert(b == c);
    for(int i=0; i<a; i++) for(int j=0; j<b; j++) cin >> A[i][j];
    for(int i=0; i<c; i++) for(int j=0; j<d; j++) cin >> B[i][j];
    for(int i=0; i<a; i++,cout << "\\\\\n") for(int j=0; j<d; j++){
        for(int k=0; k<b; k++){
            if(A[i][k] < 0) cout << "(";
            cout << A[i][k];
            if(A[i][k] < 0) cout << ")";
            cout << "\\cdot";
            if(B[k][j] < 0) cout << "(";
            cout << B[k][j];
            if(B[k][j] < 0) cout << ")";

            if(k != b-1) cout << "+";
        }
        if(j != d-1) cout << " & ";
    }
}
