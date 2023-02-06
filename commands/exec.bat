@rem -------------------
@rem   Process to start
@rem -------------------

@echo off

cd ./../

title Running the main file

prompt $$$s

cls

cd build

@rem ----------------------------------
@rem     Running the main file
@rem ----------------------------------

main

cd ./../commands/

title main.cpp