#include <iostream>
#include <vector>
#include <deque>

using namespace std;

class Solution {
    //Code
    private:
    vector<char>stack;
    deque<char>queue;
    int p = 0;
    int q = 0;
    public:
    char pushCharacter(char c){
       stack.push_back(c);
       return NULL;
    }
    char enqueueCharacter(char c){
        queue.push_front(c);
        return NULL;
    }
    char popCharacter(){
        return stack[p++];
    }
    char dequeueCharacter(){
        return queue[q++];
    }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}