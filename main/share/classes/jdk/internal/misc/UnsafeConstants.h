#ifndef _jdk_internal_misc_UnsafeConstants_h_
#define _jdk_internal_misc_UnsafeConstants_h_
//$ class jdk.internal.misc.UnsafeConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ADDRESS_SIZE0")
#undef ADDRESS_SIZE0
#pragma push_macro("BIG_ENDIAN")
#undef BIG_ENDIAN
#pragma push_macro("DATA_CACHE_LINE_FLUSH_SIZE")
#undef DATA_CACHE_LINE_FLUSH_SIZE
#pragma push_macro("PAGE_SIZE")
#undef PAGE_SIZE
#pragma push_macro("UNALIGNED_ACCESS")
#undef UNALIGNED_ACCESS

namespace jdk {
	namespace internal {
		namespace misc {

class UnsafeConstants : public ::java::lang::Object {
	$class(UnsafeConstants, $PRELOAD, ::java::lang::Object)
public:
	UnsafeConstants();
	void init$();
	static int32_t ADDRESS_SIZE0;
	static int32_t PAGE_SIZE;
	static bool BIG_ENDIAN;
	static bool UNALIGNED_ACCESS;
	static int32_t DATA_CACHE_LINE_FLUSH_SIZE;
};

		} // misc
	} // internal
} // jdk

#pragma pop_macro("ADDRESS_SIZE0")
#pragma pop_macro("BIG_ENDIAN")
#pragma pop_macro("DATA_CACHE_LINE_FLUSH_SIZE")
#pragma pop_macro("PAGE_SIZE")
#pragma pop_macro("UNALIGNED_ACCESS")

#endif // _jdk_internal_misc_UnsafeConstants_h_