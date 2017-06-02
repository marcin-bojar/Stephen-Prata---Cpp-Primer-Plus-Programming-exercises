#include <iostream>
#include <cctype>

void zamiana( std::string & str );

int main()
{
    using namespace std;

    cout << "Podaj lancuch (q aby skonczyc): ";
    string tekst;
    getline( cin, tekst );
    if( tekst == "q" || tekst == "Q" )
    {
        cout << endl << "DO WIDZENIA!!!" << endl;
        return 0;
    }

    zamiana( tekst );
    cout << "Podaj kolejny lancuch (q aby skonczyc): ";

    while( getline( cin, tekst ) )
    {
       if( tekst == "q" || tekst == "Q" )
       {
           cout << endl << "DO WIDZENIA!!!" << endl;
           return 0;
       }

       zamiana( tekst );
       cout << "Podaj kolejny lancuch (q aby skonczyc): ";
    }



    return 0;

}

void zamiana( std::string & str )
{
    for(int i=0; i < str.size(); i++)
    str[i] = toupper(str[i]);
    std::cout << str << std::endl;
}
