#ifndef _GNU_SOURCE
# define _GNU_SOURCE
#endif

//include guard
#ifndef NAV_H

# define NAV_H

  //functions
  int ls (char* path); // returns total file & dir count; prints to stdout

  char* pwd (void); // returns the pwd

  void cat (char* file); // prints contents of a text file to stdout

#endif
//end include guard
