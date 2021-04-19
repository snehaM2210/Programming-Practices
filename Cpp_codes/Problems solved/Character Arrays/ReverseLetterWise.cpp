// Eg:
// Input: welcome to coding ninjas
// Output: sajnin gnidoc ot emoclew

#include <iostream>
void reverseStringLetterWise(char input[]) {
    int len=0;
    int i=0;
	while(input[i] != '\0'){
		len++;
		i++;
	}
    int start = 0, end = len - 1;
	while(start<end){
        char temp=input[start];
        	input[start]=input[end];
        	input[end]=temp;
		start++;
		end--;
	}
}   

using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringLetterWise(input);
    cout << input << endl;
}