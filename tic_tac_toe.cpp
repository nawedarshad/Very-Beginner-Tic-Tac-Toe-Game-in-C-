#include <iostream>
using namespace std;

int print(int example[3][3], int mark[3][3]){
    cout<<"Choose the ones from the following"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<example[i][j]<<"\t";
        }
        cout<<endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<mark[i][j]<<"\t";
        }
        
    }
}
int main(){
    int mark[3][3];
    int example[3][3] = {1,2,3,4,5,6,7,8,9};
    print(example, mark);
}
