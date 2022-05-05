//Find the largest palindrome made from the product of two 3-digit numbers.
#include <iostream>

using namespace std;

bool isValid(int);

int main()
{
        int pal, final;
        // Finds largest product
        for (int a = 999; a >= 100; a--)
        {
                for (int b = 999; b >= 100; b--)
                {
                        pal = a * b;
                        if (isValid(pal))
                                cout << pal << endl;
                }
        }
        return 0;
}


bool isValid(int num)
{
        bool status = true;
        int digit, rev=0, ck_num; // Added new variable
        ck_num = num; // Assigned it to variable num
        
        // Tests for palindrome
        while (num)
        {
                digit = num % 10;
                num /= 10;
                rev = rev * 10 + digit;
        }

        if (rev == ck_num) // Checked it against unchanged variable
                status = true;
        else
                status = false;
        return status;
}
