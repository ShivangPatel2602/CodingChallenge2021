using namespace std;
#include <string>
#include <iostream>
#include <utility>
#include <vector>
#include <cstdlib>

int solution(int n)
{
    // code here
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
        if ((n - i) % 2 == 0)
        {
            int j = (n - i) / 2;
            v.push_back(make_pair(i, j));
        }
    int min = abs(v[0].first - v[0].second), sum = v[0].first + v[0].second;
    for (int i = 1; i < v.size(); i++)
        if (abs(v[i].first - v[i].second) < min)
        {
            min = abs(v[i].first - v[i].second);
            sum = v[i].first + v[i].second;
        }
    return sum;
}

/*  Do not edit below code */
int main()
{
    int n;
    cin >> n;
    int answer = solution(n);
    cout << answer << endl;
}