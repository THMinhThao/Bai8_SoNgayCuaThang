// Bai8_SoNgayCuaThang.cpp : 
//

#include <iostream>
using namespace std;
int main()
{
  cout << "Hello World!\n";
  int thang;
  cout << "nhap thang:";
  cin >> thang;

  switch (thang)
  {
  case 1 :
  case 3 :
  case 5 :
  case 7 :
  case 8 :
  case 10 :
  case 12 :
	  cout << "thang" << thang << " co 31 ngay\n";
	  break;
  case 4 : 
  case 6 :  
  case 9 :  
  case 11:
	  cout << "thang" << thang << " co 30 ngay \n";
	  break;

  default :
	  cout << "nhap sai thang\n";
	  break;
  }
  return 0;
}

