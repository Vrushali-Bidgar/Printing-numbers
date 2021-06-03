#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,j,rows;
    int count_0=0;
    cout<<"Enter the number of rows: ";
        cin>>rows;
        for(i=1; i<=rows; i++){
            for(j=1; j<=i; j++){
                cout<<count_0;
                count_0=!count_0;
        }
        count_0=i%1;
        cout<<"\n";
        }
        getch();
    return 0;
}
