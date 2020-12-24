#!/bin/bash

rm -rf obj_dir

verilator -Wall --cc Shaheen_top_openram_cv.v --top-module Shaheen_top_openram_cv --Wno-MODDUP --Wno-lint --exe --trace --build sim_main.cpp

#verilator -Wall --cc ShaheenTop.v --top-module ShaheenTop --Wno-MODDUP --Wno-lint --exe --trace --build sim_main.cpp
#./obj_dir/VShaheenTop
./obj_dir/VShaheen_top_openram_cv
