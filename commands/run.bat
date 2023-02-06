@rem -------------------
@rem   Process to start
@rem -------------------

@echo off

cd ./../

@rem -------------------
@rem   Local variables 
@rem -------------------

setlocal
  @rem Routes
  set "modelsRouter=models/*.{hpp,cpp}"
endlocal

title Compiling on each of the routes

prompt $$$s

cls 

IF NOT EXIST build (
  md build
)

cd build

@rem ----------------------------------
@rem  Compiling on each of the routes
@rem ----------------------------------

g++ -std=c++17 ./../main.cpp %modelsRouter% -o main

main

cd ./../commands/

title main.cpp