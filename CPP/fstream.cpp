#include <iostream>
#include <fstream>
using namespace std;

int main(){

  ifstream in ; //是類別，必須需要物件來使用
  in.open("test.txt") ; //讀取文字檔案
  if(in.fail()) {
    cout << "讀取不到!";
  }

  in.close ; 



  
}

