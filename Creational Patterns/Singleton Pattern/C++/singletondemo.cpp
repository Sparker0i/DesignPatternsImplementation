#include <iostream>
using std::cout;

class Singleobject
{
    private:
        static Singleobject* instance;
        Singleobject() {
            instance = 0;
        }
    public:
        static Singleobject* get_instance()
        {
            if (!instance)
                instance = new Singleobject;
            return instance;
        }

        void showMessage()
        {
            cout << "Inside Singleobject::showMessage()\n";
        }
};

Singleobject *Singleobject::instance = 0;

int main()
{
    Singleobject *obj = Singleobject::get_instance();
    (*obj).showMessage();
}