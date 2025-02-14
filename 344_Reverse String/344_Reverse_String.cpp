#include <vector>
#include <iostream>

class Reverse_String
{
    public:
    void reverseString(std::vector<char>& s) {
       for(int i = 0; i < s.size()/2; i++) {
        char temp = s[i];
        s[i] = s[s.size() - i -1];
        s[s.size() - 1 - i] = temp;
        
       }
    }
};

int main() {
    Reverse_String rs;
    std::vector<char> s = {'h','e','l','l','o'};
    rs.reverseString(s);
    for(int i = 0; i < s.size(); i++) {
        std::cout << s[i] << " ";
    }
    return 0;
}
