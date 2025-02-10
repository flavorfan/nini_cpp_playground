#include <iostream>
#include <cstring>
#include <set> 
#include <cctype>


using namespace std;

bool isReserved( const char* word ) {
    const set<string> reserved = {
        "auto", "break", "case", "char", "const", "continue", "default","bool",
        "do", "double", "else", "enum", "extern", "float", "for", "goto","int",
        "if", "int", "long", "register", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef", "union",
        "unsigned", "void", "volatile", "while"
    };
    return reserved.find( word ) != reserved.end();
}
int main() {
    char a[ 21 ] = {0} ;
    cin.getline( a , 20 ) ;
    int len = strlen( a ) ;
    if (isdigit ( a[ 0 ])){
            cout << "no" ;
            return 0 ;
        } 
    for ( int i = 0 ; i < len ; i ++ ){
        if (!( isalnum( a[ i ] ) || a[ i ] == '_' )){
            cout << "no" ;
            return 0 ;
        } 

    }
    if ( isReserved( a ) ) {
        cout << "no" ;
    } 
    else {
        cout << "yes" ;
    }

    return 0;
}