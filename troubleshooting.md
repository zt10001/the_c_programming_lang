# Troubleshooting while learning C

## compiler error
```shell
➜  the_c_programming_lang make hello
cc     hello.c   -o hello
Undefined symbols for architecture arm64:
  "_main", referenced from:
     implicit entry/start for main executable
ld: symbol(s) not found for architecture arm64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
make: *** [hello] Error 1
```

visual studio code didn't save the file on time.
https://medium.com/@hyperdebris/how-a-simple-hello-world-in-c-can-fuck-you-up-your-day-ef11d7825406
