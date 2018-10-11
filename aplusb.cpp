#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * @param a: An integer
     * @param b: An integer
     * @return: The sum of a and b 
     */
    int aplusb(int a, int b) {
        // write your code here
        return (b == 0) ? a : aplusb(a ^ b, (a & b) << 1);
    }
};

int main()
{
    Solution aplusb_sol;
    cout << "a + b = " << aplusb_sol.aplusb(19,20) << endl;  
}