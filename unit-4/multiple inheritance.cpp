#include<iostream>
class M
{
    protected:
    int m;
    public:
    void get_m(int);
};
class N
{
    protected:
    int n;
    public:
    void get_n(int);
};
class P::public M,public N
{
    public:
    void display(void);
};
void M::get_m(int x)
{
    m=x;
}
void N::get_n(int y)
{
    n=y;
}
void P::display(void)
{
    cout<<"m="
}