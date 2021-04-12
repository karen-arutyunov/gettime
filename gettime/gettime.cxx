#include <ctime>
#include <chrono>
#include <iomanip>
#include <sstream>
#include <iostream>

int main (int argc, char* argv[])
{
  using namespace std;

//  tm t {};
  istringstream is ("2016");
//  is >> get_time (&t, "%Y %d");

//  chrono::utc_time<chrono::seconds> t;
  chrono::system_clock::time_point t;

  chrono::from_stream (is, "%Y %d", t);

  cout << "eof:  " << is.eof ()  << endl
       << "fail: " << is.fail () << endl;
}
