                        // using arrays for calculations //
#include <iostream>

using namespace std;



int main()
{

    int tuna[5] = {34,45,6,7,8};

    int sum = 0;

    for(int x =0; x < 5; x++){
            sum += tuna[x];

    cout << sum <<endl;

    }
    cout << "Total = " << sum <<endl;

    return 0;
}
