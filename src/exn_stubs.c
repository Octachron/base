#define CAML_NAME_SPACE
#include <caml/mlvalues.h>
#define CAML_INTERNALS
#include <caml/backtrace.h>
#undef CAML_INTERNALS

CAMLprim value Base_clear_caml_backtrace_pos () {
  caml_backtrace_pos = 0;
  return Val_unit;
}
