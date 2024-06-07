#include <iostream>
#include <vector>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
#include <time.h>
#include <conio.h>
#include <sstream>

using namespace std;

class Movies
{
public:
    void choose_theatre(string &hall, bool &istrue)
    {
        vector<string> theatre = {"GVM", "STAR", "MEENAKSHI", "VENICE"};
        cout << "there are some theatre" << endl;
        cout << endl;

        for (int i = 0; i < theatre.size(); i++)
        {
            cout << i + 1 << "\033[1;36m" << theatre[i] << " hall \033[0m";
            cout << endl;
        }
        cout << endl;
        string choice;
        cout << " enter your choice just type hall name: ";
        cin >> choice;
        for (int i = 0; i < choice.length(); i++)
        {
            choice[i] = toupper(choice[i]);
        }
        cout << endl;
        for (int i = 0; i < theatre.size(); i++)
        {
            if (choice == theatre[i])
            {
                istrue = true;
                hall = choice;
                return;
            }
        }
        istrue = false;

        cout << "You selected wrong theatre" << endl;
    }

    void choose_movie(string &movie)
    {

        vector<string> movie_list = {"LEO", "SHAITAAN ", "GADAR_2", "ANIMAL", "EAGLE", "HERA_PHERI", "HANUMAN", "IB_71", "SALAAR"};
        cout << " there are some movie for you most watched now these days" << endl;
        ;
        for (int i = 0; i < movie_list.size(); i++)
        {
            cout << i + 1 << "." << movie_list[i];
            cout << endl;
        }
        cout << endl;
        string sel_movie;
        cout << " choose movie in this all:-";

        cin >> sel_movie;
        for (int i = 0; i < sel_movie.length(); i++)
        {
            sel_movie[i] = toupper(sel_movie[i]);
        }
        cout << endl;

        for (int i = 0; i < movie_list.size(); i++)
        {
            if (sel_movie == movie_list[i])
            {
                movie = sel_movie;
                return;
            }
        }
        cout << " you entered wrong movie" << sel_movie;
    }

    //=============================================================================================================
    void print_Seats()
    {

        for (char chars = 'A'; chars < 'V'; chars++)
        {
            for (int i = 0; i < 20; i++)
            {
                cout << "\033[1;36m" << chars << i << "\033[0m ";
            }
            cout << endl;
        }
    }
    //==============================================================================================================
    void selecting_Seats(char &row, int &column)
    {
        for (char chars = 'A'; chars < 'V'; chars++)
        {
            for (int i = 0; i < 20; i++)
            {
                if (row == chars && column == i)
                {

                    cout << "\033[1;44mXX\033[0m"
                         << " ";
                }
                else
                {
                    cout << "\033[1;42m" << chars << i << "\033[0m ";
                }
            }
            cout << endl;
        }

        cout << "Your SEAT IS  " << row << column << endl;
    }
};
char toupper(char b)
{
    if (b >= '0' && b <= '9' && b == '_')
        return b;
    return b - 'a' + 'A';
}

int main()
{
    string name1;
    string name;
    int age;

    cout << " Enter your  first name:- ";
    cin >> name;
    cout << endl;
    cout << "Enter your last name:-";
    cin >> name1;
    cout << endl;
    cout << "Enter your age:  ";
    cin >> age;

    // creating obeject of class
    //==============================================================================================================

    Movies ms;

    // selecting theatre
    //============================================================================================================
    string hall = "";
    bool istrue = false;
    cout << endl;
    ms.choose_theatre(hall, istrue);
    cout << "your selected hall is: " << hall << endl;

    // selecting movie
    //=============================================================================================================

    if (istrue == true)
    {
        string movie = " ";
        ms.choose_movie(movie);
        cout << " your selected movie is: " << movie << endl;
        ;

        //=================================================================================================================
        char row;
        int column;
        // printting seats to selection
        //===========================================
        ms.print_Seats();

        cout << "\t\t\t\t\t\t \033[1;32mENTER ROW OF SEAT\033[0m"
             << " :-";
        cin >> row;
        row = toupper(row);
        cout << endl;
        cout << "\t\t\t\t\t\t \033[1;32mENTER COLUMN OF SEAT\033[0m "
             << " :-";
        cin >> column;

        ms.selecting_Seats(row, column);
        cout << endl
             << endl
             << endl;
        cout << endl
             << endl
             << endl;

        cout << "\t\t\t\t\t\t\033[1;34mYOUR DETAILS IS:-";
        cout << endl;
        cout << "\t\t\t\t\t\tName :-" << name << " " << name1 << endl;
        cout << "\t\t\t\t\t\tAge:-" << age << endl;
        cout << "\t\t\t\t\t\tTheatre:-" << hall << " hall" << endl;
        cout << "\t\t\t\t\t\tMovie:-" << movie << endl;
        cout << "\t\t\t\t\t\tSeat:-" << row << column << "\033[0m" << endl;
        // int srand(unsigned int seed);
        // int num;
        // // ms.random_Generator(num);
        // num = rand()%1000;
        // cout<"\t\t\t\t\t\t Your Ticket no is"<<num<<endl;
    }

    cout << "\033[1;31m THANK YOU\033[0m" << endl;
    getch();

    return 0;
}