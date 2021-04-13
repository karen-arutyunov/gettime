#include <ctime>
#include <iomanip>
#include <sstream>
#include <iostream>

int main (int argc, char* argv[])
{
  using namespace std;

  tm t {};
  istringstream is ("2016");

  is.imbue (locale (setlocale (LC_ALL, nullptr)));

  is >> get_time (&t, "%Y %d");

  cout << "eof:  " << is.eof ()  << endl
       << "fail: " << is.fail () << endl;
}
