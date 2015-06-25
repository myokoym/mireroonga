#include <groonga.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int
main() {
  grn_rc rc;

  rc = grn_init();
  if (rc != GRN_SUCCESS) {
    return EXIT_FAILURE;
  }

  grn_fin();
  return EXIT_SUCCESS;
}
