// vector-test.cpp by Bill Weinman [bw.org]
// version of 2022-10-26
#include <format>
#include <vector>
#include <string>
#include <utility>

using std::vector;
using std::string;

// format-style print()
constexpr void print(const std::string_view str_fmt, auto&&... args) {
    fputs(std::vformat(str_fmt, std::make_format_args(args...)).c_str(), stdout);
}

void disp_v(auto& v, const string& label = "") {
    if (!label.empty()) print("{}: ", label);
    if (v.empty()) print("[empty]");
    else for (auto& s : v) print("{} ", s);
    print("\n");
}

template <typename T>
void swap(T & a, T & b) {
    print("::swap\n");
    T _tmp(std::move(a));
    a = std::move(b);
    b = std::move(_tmp);
}

int main() {
    vector<string> v1 = { "one", "two", "three", "four", "five" };
    vector<string> v2 = { "six", "seven", "eight", "nine", "ten" };

    disp_v(v1, "v1");
    disp_v(v2, "v2");
}
