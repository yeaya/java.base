#ifndef _java_nio_charset_CoderResult$Cache_h_
#define _java_nio_charset_CoderResult$Cache_h_
//$ class java.nio.charset.CoderResult$Cache
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace nio {
		namespace charset {

class CoderResult$Cache : public ::java::lang::Object {
	$class(CoderResult$Cache, 0, ::java::lang::Object)
public:
	CoderResult$Cache();
	void init$();
	static ::java::nio::charset::CoderResult$Cache* INSTANCE;
	::java::util::Map* unmappable = nullptr;
	::java::util::Map* malformed = nullptr;
};

		} // charset
	} // nio
} // java

#pragma pop_macro("INSTANCE")

#endif // _java_nio_charset_CoderResult$Cache_h_