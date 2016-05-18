#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]){
  //string file_name = argv[1];
  string line;
  //string lineInput;
  int line_count = 1;
  //ifstream fin(file_name.c_str());
  //FILE *fp = popen( ifstream myfile (file_name.c_str()); 
  if (1==1)
  {
    while (getline (cin,line))
    {
      if (line_count % 4 == 1 )
      {
        string read_name = line;
        cout << read_name << "\t";
      }
      if (line_count % 4 == 2)
      {
        string read =line;
        double read_length = read.length();
        cout << read_length << "\t";
        double countLetters = 0 ;
        for (int i=0; i < read_length; i ++)
        {
          char c = read[i]; 
          if (c == 'G' || c == 'C')
          {
            countLetters += 1;
          }
        }
	//double gs = std::count(read.begin(),read.end(), 'G');
        //double cs = std::count(read.begin(),read.end(), 'C');
        double gc_content = countLetters/read_length;
        cout << gc_content << "\n" ;
      }
      line_count += 1;
    }
    //myfile.close();
  }

  else cout << "Unable to open file";

  return 0;
}
