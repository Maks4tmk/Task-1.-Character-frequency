// Задача 1. Частота символов.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <functional>
#include <map>
#include <set>

void print(std::multimap<int, char, std::greater<int>>& map1, std::string& symbols) {
    std::cout << "[IN]: " << symbols << "\n";
    std::cout << "[OUT]: " << "\n";
    for (const auto m : map1) {
        std::cout << m.second << " : " << m.first << "\n";
    }
}

int main()
{
    std::string symbols{ "Hello world!!" };
    int repet = 0;

    std::multimap<int, char, std::greater<int>> map1;

    std::set<char> set1;

    for (int i = 0; i < symbols.size(); i++) {
        set1.insert(symbols[i]);
    }

    for (const auto i : set1) {
        repet = std::count(symbols.begin(), symbols.end(), i);
        map1.emplace(repet, i);
    }

    print(map1, symbols);
}

