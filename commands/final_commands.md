# Final Project AFL++ Commands

## cJSON

git clone https://github.com/DaveGamble/cJSON.git
cd cJSON
afl-clang-fast afl_cjson_harness.c cJSON.c -I. -o afl_cjson
mkdir in out
echo '{"name":"Leor"}' > in/test1.json
echo '{"user":{"id":1,"role":"admin"}}' > in/test2.json
export AFL_I_DONT_CARE_ABOUT_MISSING_CRASHES=1
afl-fuzz -i in -o out -V 1800 -- ./afl_cjson @@

## TinyXML2

git clone https://github.com/leethomason/tinyxml2.git
cd tinyxml2
afl-clang-fast++ afl_tinyxml2_harness.cpp tinyxml2.cpp -I. -o afl_tinyxml2
mkdir in out
echo '<root><name>Leor</name></root>' > in/test1.xml
echo '<user id="1"><role>admin</role></user>' > in/test2.xml
export AFL_I_DONT_CARE_ABOUT_MISSING_CRASHES=1
afl-fuzz -i in -o out -V 1800 -- ./afl_tinyxml2 @@
