#include <iostream>
const int image_width=256;
const int image_height=256;
using namespace std;
int main()
{
  cout<<"P3"<<endl;
  cout<<image_width<<" "<<image_height<<endl;
  for(int j=image_height-1;j>=0;--j)
  {
    for(int i=0;i<image_width;i++)
    {
      auto r=double(i)/(image_width-1);
      auto g=double(i)/(image_width-1);
      auto b=0.25;

      int ir=static_cast<int>(r;
      
      int ig=static_cast<int>(g)
        
      int ib=static_cast<int>(b)
      cout<<ir<<' '<<ig<<' '<<ib<<'\n';
    }
  }
  return 0;
}
