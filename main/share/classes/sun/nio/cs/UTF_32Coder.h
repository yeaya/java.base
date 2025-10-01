#ifndef _sun_nio_cs_UTF_32Coder_h_
#define _sun_nio_cs_UTF_32Coder_h_
//$ class sun.nio.cs.UTF_32Coder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BOM_LITTLE")
#undef BOM_LITTLE
#pragma push_macro("BIG")
#undef BIG
#pragma push_macro("BOM_BIG")
#undef BOM_BIG
#pragma push_macro("LITTLE")
#undef LITTLE
#pragma push_macro("NONE")
#undef NONE

namespace sun {
	namespace nio {
		namespace cs {

class UTF_32Coder : public ::java::lang::Object {
	$class(UTF_32Coder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UTF_32Coder();
	void init$();
	static const int32_t BOM_BIG = 0x0000FEFF;
	static const int32_t BOM_LITTLE = 0xFFFE0000;
	static const int32_t NONE = 0;
	static const int32_t BIG = 1;
	static const int32_t LITTLE = 2;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("BOM_LITTLE")
#pragma pop_macro("BIG")
#pragma pop_macro("BOM_BIG")
#pragma pop_macro("LITTLE")
#pragma pop_macro("NONE")

#endif // _sun_nio_cs_UTF_32Coder_h_