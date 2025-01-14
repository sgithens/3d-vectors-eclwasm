#include <stdio.h>
#include <ecl/ecl.h>

int main (int argc, char **argv) {
  /* Initialize ECL */
  cl_boot(argc, argv);

  cl_object my_fun3_4 = cl_eval(c_string_to_object("(probe-file \"asdf.lisp\")"));
  ecl_print(my_fun3_4, ECL_T);

  cl_object my_fun3_5 = cl_eval(c_string_to_object("(load \"asdf.lisp\")"));
  ecl_print(my_fun3_5, ECL_T);

  cl_object my_fun4 = cl_eval(c_string_to_object("(probe-file \"boxerdata/quicklisp/setup.lisp\")"));
  ecl_print(my_fun4, ECL_T);

  cl_object my_fun5 = cl_eval(c_string_to_object("(load \"boxerdata/quicklisp/setup.lisp\")"));
  ecl_print(my_fun5, ECL_T);

  cl_object my_fun6 = cl_eval(c_string_to_object("(ql:quickload :3d-vectors)"));
  ecl_print(my_fun6, ECL_T);

  cl_object my_fun8 = cl_eval(c_string_to_object("(print \"January 13th 2024\")"));
  ecl_print(my_fun8, ECL_T);

  ecl_terpri(ECL_T);

  cl_shutdown();
  return 0;
}
