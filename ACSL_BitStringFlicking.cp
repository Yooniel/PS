#include <iostream>
#include <bitset>
using namespace std;

const int MAXV = 5;

bitset<MAXV> bits;

void NOT(){
    bits = ~bits;
}

void RSHIFT(int x){
    bits <<= x;
}

void LSHIFT(int x){
    bits >>= x;
}

void RCIRC(int x){
    bitset<MAXV> temp=bits;
    temp >>= (MAXV-x);
    bits <<= x; bits |= temp;
}

void LCIRC(int x){
    bitset<MAXV> temp=bits;
    temp <<= (MAXV-x);
    bits >>= x; bits |= temp;
}

void INPUT(){
    string str; cin >> str;
    reverse(str.begin(),str.end());
    bitset<MAXV> temp(str);
    bits = temp;
}

void OUTPUT(){
    string str = bits.to_string();
    reverse(str.begin(),str.end());
    cout << str << "\n";
}

int main(int argc, const char * argv[]) {
    INPUT();
    //Enter commands
    OUTPUT();
}
