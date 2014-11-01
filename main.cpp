//コメントだよ
//プッシュする前にまたコミットをしてみるテスト

#include <iostream>
#include <stdio.h>

using namespace std;

void draw(char in);

int x, y;

int main(int argc, char** argv){
    
    x = 0;
    y = 0;

    char inp;
    inp = getchar();
    while(true){
        draw(inp);

        cin >> inp;
        cout << endl;
    }
    
    return 0;
}


void draw(char in){
    cout << "\033[2J";
    if(in == 'h') x--;
    if(in == 'l') x++;
    if(in == 'j') y++;
    if(in == 'k') y--;


    cout << "\033[" << y << ";" << x << "H";
    cout << "*" << endl;
    cout << "\033[10;1H" << " MOVE(hjkl): ";
}
