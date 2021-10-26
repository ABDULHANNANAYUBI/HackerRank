#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

/**
    * Writing a function for the HRML...
    * In this code there is some important points..
    1) Getting a string as an input
    2) Using Mapping for saving and getting the values when need to use...
    3) Find the whole values from the saved map points...
    4) Saving the strings inside the substr
    5) looping through All indexes of the string for the search purpose...
    * The whole proses is continuing until the last line of given input...
    * Quaring the Whole input string according to given quaries as an input.

*/


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, i = 0, j = 0;
    string temp = "", name_of_attr, query_str;
    map <string, string> mapping;
    cin >> a >> b;
    cin.ignore();

    /// <Getting the Values of HRML as input....>

    while (i < a) {
        string first_line, tag_value, extract_value;
        getline(cin, first_line);
        stringstream ss(first_line);
        while (getline(ss, extract_value, ' ')) {
            if (extract_value[0] == '<') {
                if (extract_value[1] != '/') {
                    tag_value = extract_value.substr(1);
                    if (tag_value[tag_value.length() - 1] == '>') {
                        tag_value.pop_back();
                    }
                    if (temp.size() > 0) {
                        temp += "." + tag_value;
                    }
                    else {
                        temp = tag_value;
                    }
                }
                else {
                    tag_value = extract_value.substr(2, (extract_value.find('>') - 2));
                    size_t pos = temp.find("." + tag_value);
                    if (pos != string::npos) {
                        temp = temp.substr(0, pos);
                    }
                    else {
                        temp = "";
                    }
                }
            }
            else if (extract_value[0] == '"') {
                size_t pos = extract_value.find_last_of('"');
                string attr_value = extract_value.substr(1, pos - 1);
                mapping[name_of_attr] = attr_value;
            }
            else {
                if (extract_value != "=") {
                    name_of_attr = temp + "~" + extract_value;
                }
            }
        }
        i++;
    }
    /// <Quaring the string by given input>

    while (j < b) {
        getline(cin, query_str);
        map<string, string>::iterator iter = mapping.find(query_str);
        if (iter != mapping.end()) {
            cout << iter->second << endl;
        }
        else {
            cout << "Not Found!" << endl;
        }
        j++;
    }
    return 0;
}
