#include <groonga.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int
main() {
  grn_rc rc;
  grn_ctx *ctx;
  int flags = 0;

  rc = grn_init();
  if (rc != GRN_SUCCESS) {
    return EXIT_FAILURE;
  }

  ctx = grn_ctx_open(flags);

  grn_ctx_close(ctx);
  grn_fin();
  return EXIT_SUCCESS;
}
