
// xxhash lib
#ifndef XXH_LIB
#define XXH_LIB
#define XXH_STATIC_LINKING_ONLY // enable xxh3
#include "xxhash.c"
#endif // XXH_LIB

// ass.h lib
#ifndef ASS_DEPS
#define ASS_DEPS
#define TSF_IMPLEMENTATION
#define TSF_NO_STDIO
#include "tsf.h"
#define TML_IMPLEMENTATION
#define TML_NO_STDIO
#include "tml.h"
#endif // ASS_DEPS

#include "loguru.h"

// loguru lib
#ifndef LOGURU_IMPLEMENTATION
#define LOGURU_IMPLEMENTATION
#include "loguru.h"
#endif // LOGURU_IMPLEMENTATION

// tinyxml2
#include "tinyxml2.cpp"

// inih - https://github.com/benhoyt/inih/tree/0a87bf16693e35ed172ce8738404d9acd9545a5a/
#define INIH_IMPLEMENTATION
#include "inih.h"
