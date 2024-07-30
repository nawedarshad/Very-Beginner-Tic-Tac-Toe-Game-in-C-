#include <iostream>
#include <conio.h>
using namespace std;

int example[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
void print(char mark[9]){
    for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cout << example[i][j] << "\t";
            } cout << endl;
        }
        cout<<"\n\n";
        for (int i = 0; i < 9; i){
            for (int j = 0; j < 3; ++i,j++){
                cout << mark[i] << "\t";
            } cout << endl;
        }
}
char check(char mark[9]){
    int count = 9;
    if (mark[0] && mark[1] && mark[2] == 'X' || 
        mark[3] && mark[4] && mark[5] == 'X' || 
        mark[6] && mark[7] && mark[8] == 'X' || 
        mark[0] && mark[3] && mark[6] == 'X' || 
        mark[1] && mark[4] && mark[7] == 'X' || 
        mark[2] && mark[5] && mark[8] == 'X' || 
        mark[0] && mark[4] && mark[8] == 'X' || 
        mark[2] && mark[4] && mark[6] == 'X' 
        )
    {
        print(mark);
        cout<<endl<<"Player 1 Wins!!"<<endl;
        return 'a';
    }
    if (mark[0] == mark[1] == mark[2] == '0' || 
        mark[3] == mark[4] == mark[5] == '0' || 
        mark[6] == mark[7] == mark[8] == '0' || 
        mark[0] == mark[3] == mark[6] == '0' || 
        mark[1] == mark[4] == mark[7] == '0' || 
        mark[2] == mark[5] == mark[8] == '0' || 
        mark[0] == mark[4] == mark[8] == '0' || 
        mark[2] == mark[4] == mark[6] == '0' 
        )
    {
        cout<<endl<<"Player 2 Wins!!"<<endl;
        return 'a';
    }
    
    for (int i = 0; i < count; i++){
        if (mark[i] == '*'){ return '*'; }
    } return 'n';

}

int main(){
    int player1 = 0;
    int n;
    char mark[9] = {'*', '*', '*', '*', '*', '*', '*', '*', '*'};
    while (check(mark) == '*'){
        system("CLS");
        cout << "Choose the one from the following" << endl << endl;
        print(mark);
    if (player1 == 0){
        cout<<endl<<"Player 1 enter your choice: ";
        cin>>n;
        if (mark[n-1] != '*'){
            cout<<endl<<"Wrong Selection, Select Again\n\nPress Enter to select again;";
            getchar();
            break;
        }else{
            mark[n-1] = 'X';
            player1++; 
        }
    }else{
        cout<<endl<<"Player 2 enter your choice: ";
        cin>>n;
        if (mark[n-1] != '*'){
            cout<<endl<<"Wrong Selection, Select Again\n\nPress Enter to select again;";
            getchar();
            break;
        }else{
            mark[n-1] = '0';
            player1--; 
        }
    } 
  }
}
