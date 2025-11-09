#pragma once

#define ST_ENABLE_STL_STRINGS true
#define ST_ENABLE_STL_FILESYSTEM true
#define ST_ENUM_CONSTANT(type, name) constexpr type name = type::name
#define ST_AVAILABILITY(...)
#define ST_FILESYSTEM_AVAILABILITY
#define ST_DEPRECATED(...)
#define ST_DEPRECATED_VERSION
#define ST_DEPRECATED_IN_3_0(...)
#define ST_DEPRECATED_IN_3_4(...)
#define ST_DEPRECATED_IN_4_0(...)
#define ST_NODISCARD
#define ST_LIFETIME_BOUND
#define ST_MAX_SSO_LENGTH (16)
#define ST_MAX_SSO_SIZE (48)
#define ST_STACK_STRING_SIZE (256)
#ifdef _MSC_VER
	#ifdef _WIN64
		typedef __int64 ST_ssize_t;
	#else
		typedef int ST_ssize_t;
	#endif
#else
	#include <sys/types.h>
	typedef ssize_t ST_ssize_t;
#endif
