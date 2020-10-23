using namespace std;
#include<iostream>
#include<string>

class person
{
    public:
        string Name;
        int id;
        void getdata()
        {
            
        }
};

class professor:public person
{
    private:
        string publications;
        string rank;

    public:
        void set(string p, string r)

        {
            publications=p;
            rank=r;
        }
        void getdata()
        {
            cin>>Name;
            cin>>id;
            
        }
        /*string publication
        {
            return 1;
        }
        string*/
};

class student:public person
{
    private:
        string major;
        string minor;
    void getdata()
        {
            cin>>Name;
            cin>>id;
            
        }

};

int main()
{
    int n;
    cin>>n;

}

