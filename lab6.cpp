
#include "make_random_vector.hpp"
#include <algorithm>
#include <cctype>
#include <cmath>
#include <complex>
#include <functional>
#include <iostream>
#include <iterator>
#include <list>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector< int > v = make_random_vector(10, 0, 10);

    copy(v.begin(), v.end(), ostream_iterator< double >(cout, " "));
    cout << endl;

    auto it = partition(v.begin(), v.end(), [](int i) { return i > 6; });
    sort(v.begin(), it);
    copy(v.begin(), v.end(), ostream_iterator< double >(cout, " "));
    cout << endl;
}
