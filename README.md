# AFLpp-Fuzzing-Final-Project

## Description

This project evaluates the effectiveness of AFL++ fuzz testing on multiple software targets, including a simple custom C program, a crash-triggering example, and two open-source projects (cJSON and TinyXML2).

The objective is to analyze AFL++ capabilities in:

* Input mutation and test case generation
* Code coverage exploration
* Corpus growth
* Crash discovery
* Vulnerability detection in different software targets

---

## Project Structure

```text
AFLpp-Fuzzing-Final-Project/
│
├── commands/          # AFL++ command records
├── notes/             # Testing observations and results
├── screenshots/       # AFL++ execution screenshots
├── targets/
│   ├── cJSON/
│   │   ├── afl_cjson_harness.c
│   │   └── in/
│   │       ├── test1.json
│   │       └── test2.json
│   │
│   └── TinyXML2/
│       ├── afl_tinyxml2_harness.cpp
│       └── in/
│           ├── test1.xml
│           └── test2.xml
│
└── README.md
```

---

## Environment

* Operating System: Ubuntu 24.04 (VirtualBox)
* Fuzzing Framework: AFL++
* Compiler: afl-clang-fast / afl-clang-fast++
* Version Control: Git & GitHub

---

## Target Programs

### 1. Simple Test Program

A basic C program used to understand AFL++ workflow and coverage-guided fuzzing.

Purpose:

* AFL++ installation verification
* Basic fuzzing practice
* Coverage observation

---

### 2. Crash Test Program

A custom program intentionally designed to trigger crashes when specific input patterns are discovered.

Purpose:

* Validate AFL++ crash detection capability
* Observe crash generation and storage

Result:

* AFL++ successfully discovered crash-inducing inputs
* More than 150 crash events were generated during testing

---

### 3. cJSON

GitHub:

https://github.com/DaveGamble/cJSON

Description:

A lightweight JSON parser written in C.

Purpose:

* Evaluate AFL++ against a real-world parser
* Observe corpus growth and coverage expansion

Result:

* Corpus generated: 428 test cases
* Coverage density: 14.61%
* New edges discovered: 73

---

### 4. TinyXML2

GitHub:

https://github.com/leethomason/tinyxml2

Description:

A lightweight XML parser written in C++.

Purpose:

* Compare fuzzing performance with cJSON
* Evaluate AFL++ effectiveness on a larger codebase

Result:

* Corpus generated: 643 test cases
* Coverage density: 20.62%
* New edges discovered: 120

---

## Experimental Comparison

| Target              | Corpus | Coverage Density | New Edges | Crash Found |
| ------------------- | ------ | ---------------- | --------- | ----------- |
| Simple Test Program | 1      | 0.00%            | 1         | No          |
| Crash Test Program  | N/A    | N/A              | N/A       | Yes         |
| cJSON               | 428    | 14.61%           | 73        | No          |
| TinyXML2            | 643    | 20.62%           | 120       | No          |

---

## Screenshots

The repository includes:

* AFL++ execution interface
* Crash discovery results
* cJSON fuzzing results
* TinyXML2 fuzzing results
* GitHub repository screenshots

Location:

```text
screenshots/
```

---

## Notes

Detailed commands and observations are recorded in:

```text
commands/
notes/
```

---

## Conclusion

This project demonstrates AFL++ fuzz testing on both custom programs and real-world open-source software.

The experiments show that:

* AFL++ effectively generates large numbers of test cases
* Coverage increases significantly on parser-based targets
* TinyXML2 produced the largest corpus and highest coverage
* AFL++ successfully detected crash-inducing inputs in the crash test program
* AFL++ is an effective tool for automated software security testing

The results confirm the practicality of AFL++ for vulnerability discovery and robustness evaluation in open-source software projects.

---

## Author

Student Name: 李明燦

Course: Secure Software Testing

Tool: AFL++
