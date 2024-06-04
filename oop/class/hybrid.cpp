#include <iostream>
using namespace std;

class creatVariables
{
public:
    int a, b, c, d;
};

class takeIn : public creatVariables
{
public:
    void inn()
    {
        cout << "enter 2 values to get the sum" << endl;
        cin >> a >> b;
        cout << "enter 2 values to get the multiplication" << endl;
        cin >> c >> d;
    }
};
class sum : public takeIn
{
public:
    int ans = a + b;

    int summ()
    {
        return ans;
    }
};
class mult : public takeIn
{
public:
    int ans2 = c * d;
    int multiple()
    {
        return ans2;
    }


};
class mult_sum : public sum, public mult
{
    public:
    void output()
    {   void inn();
        cout << ans * ans2 << endl;
    }
};

int main()
{
    mult_sum p;
    p.output();
}