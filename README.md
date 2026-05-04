# AFLpp-Fuzzing-Final-Project
Security testing of open-source software using AFL++ fuzzing
# AFL++ Commands

## Compile target
afl-gcc test.c -o test

## Run fuzzing
export AFL_I_DONT_CARE_ABOUT_MISSING_CRASHES=1
afl-fuzz -t 5000 -i in -o out -- ./test @@
