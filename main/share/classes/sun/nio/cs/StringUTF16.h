#ifndef _sun_nio_cs_StringUTF16_h_
#define _sun_nio_cs_StringUTF16_h_
//$ class sun.nio.cs.StringUTF16
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class StringUTF16 : public ::java::lang::Object {
	$class(StringUTF16, 0, ::java::lang::Object)
public:
	StringUTF16();
	void init$();
	static char16_t getChar($bytes* val, int32_t index);
	static ::jdk::internal::misc::Unsafe* unsafe;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_StringUTF16_h_