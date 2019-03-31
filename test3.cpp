#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<iostream>
#include<string>
#include<math.h>
#include<unistd.h>

using namespace std;
const string hello="Hello,";
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
            unsigned char sex;
    };
};

int main()
{

    return 0;
}
