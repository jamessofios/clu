# clu: a command line utility.
This program functions as a combination of pwd, ls, and cat. This program is not a fork.

## How to compile:
Inside this git repository run:
```
$ make #compiles the program.

$ make cleanobj #removes object files. leaves behind the final binary.

$ make clean #removes compiled program and object files.
```

## How to use:
Inside this git repository run:
```
$ ./clu #lists current directory.

$ ./clu /home/$USER #lists your user's home directory.

$ ./clu r /path/to/file.txt #print at plaintext file to STDOUT.
```
