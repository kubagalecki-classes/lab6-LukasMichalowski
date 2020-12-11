#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>
using namespace std;
std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    auto                lambda1 = [&](Human n) { n.birthday(); };
    std::for_each(people.begin(), people.end(), lambda1);

    auto lambda2 = [](Human n) {
        if (n.isMonster() == true)
            return 'n';
        else
            return 'y';
    };

    std::transform(people.begin(), people.end(), ret_v.begin(), lambda2);

    return ret_v;
}
