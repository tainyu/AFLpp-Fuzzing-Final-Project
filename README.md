# AFLpp-Fuzzing-Final-Project

## Description

This project demonstrates how to use AFL++ to perform fuzz testing on a simple C program.

The objective is to understand:
- How fuzzing works
- How AFL++ generates test cases
- How crashes or unexpected behaviors can be detected automatically

---

## Project Structure

```
AFLpp-Fuzzing-Final-Project/
│
├── commands/        # AFL++ command records
├── notes/           # Testing progress and observations
├── screenshots/     # Execution evidence (AFL++ running results)
└── README.md        # Project documentation
```

---

## Environment

- OS: Ubuntu 24.04 (VirtualBox)
- Tool: AFL++
- Compiler: afl-gcc

---

## AFL++ Commands

### 1. Compile Target Program

```bash
afl-gcc test.c -o test
```

### 2. Prepare Input Seed

```bash
mkdir in out
echo hello > in/a.txt
```

### 3. Run Fuzzing

```bash
export AFL_I_DONT_CARE_ABOUT_MISSING_CRASHES=1
afl-fuzz -t 5000 -i in -o out -- ./test @@
```

---

## Execution Result

The AFL++ fuzzing tool successfully started and performed:

- Input mutation
- Coverage tracking
- Execution monitoring

Key observations:

- Fuzzer is running normally
- No crashes found in current test case
- Coverage is limited due to simple program

---

## Screenshots

Execution evidence is stored in:

```
screenshots/
```

Example:

- AFL++ running interface
- Terminal execution output

---

## Notes

Detailed testing process and observations are recorded in:

```
notes/progress.md
```

---

## Conclusion

This project successfully demonstrates:

- Basic AFL++ setup and usage
- Fuzz testing workflow
- Execution and monitoring of a target program

Although no crash was detected, the experiment verifies that AFL++ is functioning correctly.

---

## Author

Student Name: 李明燦  
Course: Software Testing and Secure Programming
