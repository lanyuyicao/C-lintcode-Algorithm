#include <iostream>
using namespace std;

class Solution {
public:
    /*
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
    long long trailingZeros(long long n) {
        // write your code here, try to do it without arithmetic operators.
        // long count = 0;
        // for(long i = 5; n / i >= 1; i *= 5)
        //     count += n / i;
        // return count;
        long count  = 0;
        while(n != 0)
        {
            count += n / 5;
            n /= 5;
        }
        return count;
    }
};

int main()
{

}