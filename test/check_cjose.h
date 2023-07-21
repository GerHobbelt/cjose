/*!
 *
 */

// the check unit test framework headers are noisy, disable these warnings
#pragma GCC diagnostic ignored "-Wgnu-zero-variadic-macro-arguments"
#pragma GCC diagnostic ignored "-Wincompatible-pointer-types-discards-qualifiers"
#pragma GCC diagnostic ignored "-Wpointer-sign"

#include <check.h>

Suite *cjose_version_suite(void);
Suite *cjose_util_suite(void);
Suite *cjose_base64_suite(void);
Suite *cjose_jwk_suite(void);
Suite *cjose_jwe_suite(void);
Suite *cjose_jws_suite(void);
Suite *cjose_header_suite(void);
Suite *cjose_utils_suite(void);
Suite *cjose_concatkdf_suite(void);

#define _ck_assert_bin(X, OP, Y, LEN)                                                                                            \
    do                                                                                                                           \
    {                                                                                                                            \
        const void *_chk_x = (X);                                                                                             \
        const void *_chk_y = (Y);                                                                                             \
        const unsigned int _chk_len = (LEN);                                                                                           \
        ck_assert_msg(0 OP memcmp(_chk_x, _chk_y, _chk_len),                                                                     \
                      "Assertion '" #X #OP #Y "' failed: " #LEN "==%u, " #X "==0x%p, " #Y "==0x%p", _chk_len, _chk_x, _chk_y); \
    } while (0);

#define ck_assert_bin_eq(X, Y, LEN) _ck_assert_bin(X, ==, Y, LEN)
