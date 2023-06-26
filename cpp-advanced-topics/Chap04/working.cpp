// working.cpp by Bill Weinman [bw.org]
// updated 2022-08-23
#include <fmt/core.h>

// format-style print()
constexpr void print(const std::string_view str_fmt, auto&&... args) {
    fputs(fmt::vformat(str_fmt, fmt::make_format_args(args...)).c_str(), stdout);
}

int main() {
    int answer {42};
    print("The answer is {}\n", answer);
}
