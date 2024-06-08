#include <iostream>
#include <string>
using namespace std;

string fillTemplate(const string& values, const string& templateStr) {
    string filledTemplate = templateStr;
    size_t startPos = 0;
    size_t endPos = 0;
    while ((startPos = filledTemplate.find('[', endPos)) != string::npos) {
        endPos = filledTemplate.find(']', startPos);
        if (endPos == string::npos)
            break;
        string placeholder = filledTemplate.substr(startPos + 1, endPos - startPos - 1);
        size_t valueStart = values.find(placeholder + '=');
        if (valueStart != string::npos) {
            size_t valueEnd = values.find(',', valueStart);
            string value;
            if (valueEnd != string::npos)
                value = values.substr(valueStart + placeholder.length() + 1, valueEnd - valueStart - placeholder.length() - 1);
            else
                value = values.substr(valueStart + placeholder.length() + 1);
            filledTemplate.replace(startPos, endPos - startPos + 1, value);
            endPos = startPos + value.length();
        } else {
            ++endPos;
        }
    }
    return filledTemplate;
}

int main() {
    string values;
    getline(cin, values);
    string templateStr;
    getline(cin, templateStr);
    string filledTemplate = fillTemplate(values, templateStr);
    cout << filledTemplate << endl;
    return 0;
}