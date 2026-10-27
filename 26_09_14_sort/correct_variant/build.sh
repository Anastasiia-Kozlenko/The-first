
#!/bin/bash

cd "$(dirname "$0")" || exit 1

g++ main.cpp io.cpp sortings.cpp -o main

if [ $? -eq 0 ]; then
    ./main
fi
