#ifndef _sun_security_util_ArrayUtil_h_
#define _sun_security_util_ArrayUtil_h_
//$ class sun.security.util.ArrayUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("AIOOBE_SUPPLIER")
#undef AIOOBE_SUPPLIER

namespace java {
	namespace util {
		namespace function {
			class BiFunction;
		}
	}
}

namespace sun {
	namespace security {
		namespace util {

class $export ArrayUtil : public ::java::lang::Object {
	$class(ArrayUtil, 0, ::java::lang::Object)
public:
	ArrayUtil();
	void init$();
	static void blockSizeCheck(int32_t len, int32_t blockSize);
	static void nullAndBoundsCheck($bytes* array, int32_t offset, int32_t len);
	static void reverse($bytes* arr);
	static void swap($bytes* arr, int32_t i, int32_t j);
	static ::java::util::function::BiFunction* AIOOBE_SUPPLIER;
};

		} // util
	} // security
} // sun

#pragma pop_macro("AIOOBE_SUPPLIER")

#endif // _sun_security_util_ArrayUtil_h_