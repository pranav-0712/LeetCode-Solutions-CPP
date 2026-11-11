# LeetCode Solutions in C++

![Build & test](https://github.com/pranav-0712/LeetCode-Solutions-CPP/actions/workflows/test.yml/badge.svg)
![Language](https://img.shields.io/badge/language-C%2B%2B17-blue)
![Solved](https://img.shields.io/badge/solved-1-brightgreen)

My solutions to LeetCode problems, written in C++17. Each solution explains
its approach and time/space complexity, and has test cases that run
automatically on every push.

## Solved problems

| # | Problem | Difficulty | Topic | Solution |
|---|---------|------------|-------|----------|
| 1281 | [Subtract the Product and Sum of Digits of an Integer](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/) | 🟢 Easy | Math | [C++](Easy/1281_subtract_product_and_sum_of_digits.cpp) |

**Progress:** 🟢 Easy: 1 · 🟡 Medium: 0 · 🔴 Hard: 0

## Repository layout

```
Easy/      1281_subtract_product_and_sum_of_digits.cpp
Medium/    (coming soon)
Hard/      (coming soon)
```

Files are named `<problem number>_<problem_name>.cpp`.

## Run a solution

Each file is a complete program: the `Solution` class plus a `main()` that
runs test cases.

```bash
g++ -std=c++17 -Wall Easy/1281_subtract_product_and_sum_of_digits.cpp -o solution
./solution
```

## Adding a new solution

1. Create `<Difficulty>/<number>_<name>.cpp` using the same layout:
   a header comment (problem link, difficulty, topic, approach, complexity),
   the `Solution` class, and a `main()` with `assert` test cases.
2. Add a row to the table above and update the progress counts.
3. Push. GitHub Actions compiles and runs every solution.

## Related

- [Core_Data_Structures_CPP](https://github.com/pranav-0712/Core_Data_Structures_CPP): C++ fundamentals, patterns and STL practice
