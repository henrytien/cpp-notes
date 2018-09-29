#include<fstream>
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

void ReadFileToVector(const std::string &fileName, std::vector<string> &vec)
{
    std::ifstream ifs(fileName);
    if(ifs)
    {
        string buf;
      // getline(buf,string())

        while(getline(ifs,buf))
        {
            stringstream ss(buf);
            vec.push_back(buf);
        }

    }
}

int main()
{
    std::vector<string> vec;
    ofstream ofs;
    ReadFileToVector("../data/test.txt",vec);
        for(const auto &str:vec)
        {

            ofs.open("../data/out.txt",ios::trunc);
                ofs << str <<endl;
        }
           // cout << str <<endl;
    ofs.close();

    return 0;
}
