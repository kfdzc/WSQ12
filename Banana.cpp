#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
  string file;
  string str;
  cout << "What file would you like to work with?\n";
  cin >> file;
  ifstream document( file.c_str() );

  int howbig = 0;
  int counter = 0;

  if ( document.fail() )
  {
    cout<< "There's an error, try with another file\n";
  }

  while ( !document.eof() )
  {
    getline ( document , str );
    howbig += str.size();
    for ( int i = 0; i < howbig; i++)
    {
      str[i] = tolower( str[i] );
    }
    int Banana = str.find("banana");
    while ( Banana != -1 )
    {
    counter ++;
    Banana = str.find( "banana", Banana + 1);
    }
  }
  cout << "You have "<< counter << " bananas in your file\n";
  return 0;
}
