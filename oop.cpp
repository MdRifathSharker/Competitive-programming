#include<bits/stdc++.h>
using namespace std;
class s3;
class s2;
class s1
{
    public:
    float cgpa;
    void input(float value)
    {
        cgpa = value;
    }
    friend class s2;
    friend class s3;
};
class s2
{
    public:
    float cgpa;
    void input(float value)
    {
        cgpa = value;
    }
    friend class s2;
    friend class s3;
};
class s3
{
    public:
    float cgpa;
    void input(float value)
    {
        cgpa = value;
    }
    friend class s2;
    friend class s3;
    i
};

int main ()
{
    s1 a;s2 b;s3 c;
   

}