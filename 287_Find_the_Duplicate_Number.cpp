#include <iostream>
#include <vector>
#include <set>

using namespace std;

int findDuplicate(vector<int> &nums)
{
    set<int> st;

    for (auto &e : nums)
    {
        if (st.contains(e))
            return e;
        else
            st.insert(e);
    }

    return -1;
}
int main()
{
    return 0;
}