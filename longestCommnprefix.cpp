#include <iostream>
#include <vector>
using namespace std;

string longestComnPrefx(vector<string> &arr, int n)
{

    string ans = "";
    // for traverse the all ch of the first string;
    for (int i = 0; i < arr[0].length(); i++)
    {

        char ch = arr[0][i];

        bool match = true;

        // for comparing the ch with rest of the string;
        for (int j = i; j < n; j++)
        {

            // not match;

            if (arr[j].size() < i || ch != arr[j][i])
            {

                match = false;
                break;
            }
        }
        if (match == false)
            break;

        else
        {

            ans.push_back(ch);
        }
    }

    return ans;
}









/*


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        
        for(int i=0;i<strs[0].size();i++) {
            for(int j=1;j<strs.size();j++) {
                if(strs[0][i] != strs[j][i]) {
                    return ans;
                }
            }
            ans += strs[0][i];
        }
        
        return ans;
    }
};

*/




int main()
{

    return 0;
}