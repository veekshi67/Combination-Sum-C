# Combination Sum – C

This repository contains a C implementation of the **Combination Sum** problem
(LeetCode) using **backtracking and recursion**.

## 🧩 Problem Description

Given an array of **distinct integers** `candidates` and a target integer `target`,
return all unique combinations where the chosen numbers sum to `target`.

- Each number in `candidates` may be used **unlimited times**
- Combinations must be **unique**
- Order of combinations does not matter

---

## 💡 Approach

- Uses **backtracking (DFS)** to explore all possible combinations
- A `start` index is used to avoid duplicate combinations
- The same index is reused in recursion to allow **unlimited usage** of a number

---

## 🛠️ Implementation Details

- Language: **C**
- Uses dynamic memory allocation (`malloc`)
- Follows **LeetCode function-only format**
- The `main()` function is **provided by the platform**

---

## 📌 Example

### Input
```text
candidates = [2,3,6,7]
target = 7
Output
[[2,2,3],[7]]


target = 7

