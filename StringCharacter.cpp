#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    bool found = 0;
    char compare;

    cout << "Enter a character:\t";
    cin >> compare;

    cout << "\n\nScanning your word for the character '" << compare << "'...\n\n\n";

    //strchr() function, determining if "Hello" contains the character
    found = strchr("Hello", compare);

    //Outputs the result to the user
    if (found == 1) {
        cout << "'Hello' does contain " << compare << endl;
    }
    else {
        cout << "'Hello' does not contain " << compare << endl;
    }

    cout << "\n\n***************************************\n";

    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;

    cout << "\n\nComparing 2 strings character by character\n\n";

    // comparing strings str1 and str2
    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);

    // comparing strings str1 and str3
    result = strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);


    cout << "\n\n***************************************\n";

    char str10[] = "Yoobee Colleges CS102 string functions";
    char str20[] = "Colleges";
    //Finding the position of str2 within str1
    char* stringpos = strstr(str10, str20);
    //Print if str2 is found within str1
    if (stringpos)
        cout << "\nOccurance of \"" << str20 << "\" in \"" << str10 << "\" is at position " << stringpos - str10 + 1 << endl;
    // If str2 is not found
    else
        cout << "\nThere is no occurance of \"" << str20 << "\" in " << str10 << endl;

    return 0;
}