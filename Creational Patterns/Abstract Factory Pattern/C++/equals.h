#include <algorithm>
#include <string>

using std::string;

namespace X
{
    bool is_equals(const string &a , const string &b)
    {
        return std::equal(a.begin() , a.end() , b.begin(), b.end() , 
        [] (char a , char b) {
            return tolower(a) == tolower(b);
        });
    }
}