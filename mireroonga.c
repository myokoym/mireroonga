#include <groonga.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int
main(int argc, char **argv) {
  grn_rc rc;
  grn_ctx *ctx;
  grn_obj *db;
  int flags = 0;

  rc = grn_init();
  if (rc != GRN_SUCCESS) {
    return EXIT_FAILURE;
  }

  ctx = grn_ctx_open(flags);
  db = grn_db_open(ctx, argv[1]);
  grn_p(ctx, db);

  grn_obj_unlink(ctx, db);
  grn_ctx_close(ctx);
  grn_fin();
  return EXIT_SUCCESS;
}
