#include <iostream>

using namespace std;

int main()
{
   char choice_1 ;
    int choice_2 ;

    cout<<"Do you want to run this program?\n";
    cout<<"Y- Yes\n";
    cout<<"N- No\n";
    cin>>choice_1;
    while (choice_1!='Y'&&choice_1!='y'&&choice_1!='N'&&choice_1!='n')
    {
        cout<<"Please respond with Y (or y) for yes and N (or n) for no.\n";
        cin>>choice_1;

    }
    do{
        cout<<"This program is designed to exhibit the positive divisors of positive integers supplied by you. The program will repeatedly prompt you to enter a positive integer. Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order.\n";
        cout<<"Please enter a positive integer: ";
        cin>>choice_2;
        while (choice_2<=0 )
        {
            cout<<choice_2<<" is not a positive integer.\n";
            cout<<"Please enter a positive integer: ";
            cin>>choice_2;
        }
        for(int i = choice_2 ;i>= 1;--i)
        {
            if(choice_2%i==0)
                cout<<i<<endl;
        }
        cout<<endl<<endl<<endl;
        cout <<"Would you like to see the divisors of another integer (Y/N)?\n";
        cout<<"Y- Yes\n";
        cout<<"N- No\n";
        cin>>choice_1;
        while (choice_1!='Y'&&choice_1!='y'&&choice_1!='N'&&choice_1!='n')
    {
        cout<<"Please respond with Y (or y) for yes and N (or n) for no.\n";
        cin>>choice_1;
        cout <<"Would you like to see the divisors of another integer (Y/N)?\n";
        cout<<"Y- Yes\n";
        cout<<"N- No\n";
        cin>>choice_1;
    }
    }while(choice_1=='Y'||choice_1=='y');



    return 0;
}
