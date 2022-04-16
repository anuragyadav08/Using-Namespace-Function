
#include <iostream>

using namespace std;

namespace Anu{
    int value(int x)
    {
        return x*8-1;
    }
}
namespace Rag{
    int value(int y)
    {
        return y+12;
    }
}
int main()
{
   cout<<Anu::value(12)<<endl;
   cout<<Rag::value(79)<<endl;

    return 0;
}
