#include "Headers.h"
using namespace std;

//Find the number of acute, obtuse, and right triangles
void Triangletype(int c[], int n)
{
    int b[n + 2];

    //Square each value, find its result
    for (int d = 0; d < n; d++)
        b[d] = c[d] * c[d];

    //Order each side and its squared side
    sort(c, c + n);
    sort(b, b + n);

    //a for acute
    //r for right
    //o for obtuse
    int a = 0, r = 0, o = 0;
    for (int d = 0; d < n; d++)
    {
        int p = d + 1;

        int q = d + 1;

        for (int e = d + 1; e < n; e++)
        {
            //Look for most distant point of p
            while (p < n - 1 && b[d] + b[e] >= b[p + 1])
                p++;

            q = max(q, p);

            //Look for most distant point of q
            while (q < n - 1 && c[d] + c[e] > c[q + 1])
                q++;

            //Check if there is a right triangle
            if (b[d] + b[e] == b[p])
            {
                a += max(p - e - 1, 0);
                r++;
                o += q - p;
            }

            //If no right traingles
            else
            {
                a += max(p - e, 0);
                o += q - p;
            }
        }
    }

    //Print the amount of each triangle type
    cout << "Acute Triangle: " << a << endl;
    cout << "Right Triangle: " << r << endl;
    cout << "Obtuse Triangle: " << o << endl;
}

//Main function
int main()
{
    int nums[] = {2, 3, 9, 10, 12, 15};
    int n = sizeof(nums) / sizeof(nums[0]);
    Triangletype(nums, n);
    return 0;
}