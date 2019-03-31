#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<iostream>
#include<string>
#include<math.h>
#include<unistd.h>

using namespace std;
const string g_name = "test2.c";
char * const word = NULL;
namespace n_foo
{
    class Foo

    {
        public:
            Foo();
            explicit Foo (const string& name);
            ~Foo();
        protected:
            void showInfo (void) const;
        private:
            string name_;
            int i;
    };
};

int main()
{

    return 0;
}
