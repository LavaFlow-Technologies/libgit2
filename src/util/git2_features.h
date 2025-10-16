#ifndef INCLUDE_features_h__
#define INCLUDE_features_h__

/* Debugging options */

// #define GIT_DEBUG_POOL 1
// #define GIT_DEBUG_STRICT_ALLOC 1
// #define GIT_DEBUG_STRICT_OPEN 1
// #define GIT_DEBUG_LEAKCHECK_WIN32 1

/* Feature enablement and provider / backend selection */

#define GIT_THREADS 1
// #define GIT_THREADS_PTHREADS 1
#define GIT_THREADS_WIN32 1

// #define GIT_SHA1_BUILTIN 1
#define GIT_SHA1_OPENSSL 1
// #define GIT_SHA1_OPENSSL_FIPS 1
// #define GIT_SHA1_OPENSSL_DYNAMIC 1
// #define GIT_SHA1_MBEDTLS 1
// #define GIT_SHA1_COMMON_CRYPTO 1
// #define GIT_SHA1_WIN32 1

// #define GIT_SHA256_BUILTIN 1
// #define GIT_SHA256_WIN32 1
// #define GIT_SHA256_COMMON_CRYPTO 1
#define GIT_SHA256_OPENSSL 1
// #define GIT_SHA256_OPENSSL_FIPS 1
// #define GIT_SHA256_OPENSSL_DYNAMIC 1
// #define GIT_SHA256_MBEDTLS 1

// #define GIT_COMPRESSION_BUILTIN 1
#define GIT_COMPRESSION_ZLIB 1

// #define GIT_NSEC 1
// #define GIT_NSEC_MTIM 1
// #define GIT_NSEC_MTIMESPEC 1
// #define GIT_NSEC_MTIME_NSEC 1
// #define GIT_NSEC_WIN32 1

// #define GIT_I18N 1
// #define GIT_I18N_ICONV 1

// #define GIT_REGEX_REGCOMP_L 1
// #define GIT_REGEX_REGCOMP 1
// #define GIT_REGEX_PCRE 1
// #define GIT_REGEX_PCRE2 1
// #define GIT_REGEX_BUILTIN 1

#define GIT_SSH 1
#define GIT_SSH_EXEC 1
// #define GIT_SSH_LIBSSH2 1
// #define GIT_SSH_LIBSSH2_MEMORY_CREDENTIALS 1

#define GIT_HTTPS 1
#define GIT_HTTPS_OPENSSL 1
// #define GIT_HTTPS_OPENSSL_DYNAMIC 1
// #define GIT_HTTPS_SECURETRANSPORT 1
// #define GIT_HTTPS_MBEDTLS 1
// #define GIT_HTTPS_SCHANNEL 1
// #define GIT_HTTPS_WINHTTP 1

// #define GIT_HTTPPARSER_HTTPPARSER 1
#define GIT_HTTPPARSER_LLHTTP 1
#define GIT_HTTPPARSER_BUILTIN 1

// #define GIT_AUTH_NTLM 1
// #define GIT_AUTH_NTLM_BUILTIN 1
// #define GIT_AUTH_NTLM_SSPI 1

// #define GIT_AUTH_NEGOTIATE 1
// #define GIT_AUTH_NEGOTIATE_GSSFRAMEWORK 1
// #define GIT_AUTH_NEGOTIATE_GSSAPI 1
// #define GIT_AUTH_NEGOTIATE_SSPI 1

/* Platform details */

// #define GIT_ARCH_64 1
// #define GIT_ARCH_32 1

// #define GIT_QSORT_BSD 1
// #define GIT_QSORT_GNU 1
// #define GIT_QSORT_C11 1
// #define GIT_QSORT_MSC 1

// #define GIT_FUTIMENS 1

// #define GIT_RAND_GETENTROPY 1
// #define GIT_RAND_GETLOADAVG 1

// #define GIT_IO_POLL 1
#define GIT_IO_WSAPOLL 1
// #define GIT_IO_SELECT 1

/* Compile-time information */

#define GIT_BUILD_CPU "@GIT_BUILD_CPU@"
#define GIT_BUILD_COMMIT "@GIT_BUILD_COMMIT@"

#endif
