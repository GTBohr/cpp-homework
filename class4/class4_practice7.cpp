#include <iostream>
#include <string>
using namespace std;

int count_letter(const string& sentence)
{
    int length = (int)sentence.size();
    if (length == 0)
        return 0;                    

    int count = 0;
    const char *p = sentence.c_str();

    // 处理第 0 个字符
    if (*p != ' ')
        count = 1;

    for (int i = 1; i < length; ++i)
    {
        p = &sentence[i];
        if (*p == ' ')
            continue;
        else
            ++count;
    }
    return count;
}

int main()
{
    string sentence;
    getline(cin, sentence);          // 读整行，含空格
    cout << count_letter(sentence) << endl;
    return 0;
}