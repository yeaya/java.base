#ifndef _sun_nio_cs_CharsetMapping$Entry_h_
#define _sun_nio_cs_CharsetMapping$Entry_h_
//$ class sun.nio.cs.CharsetMapping$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace nio {
		namespace cs {

class $import CharsetMapping$Entry : public ::java::lang::Object {
	$class(CharsetMapping$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CharsetMapping$Entry();
	void init$();
	int32_t bs = 0;
	int32_t cp = 0;
	int32_t cp2 = 0;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_CharsetMapping$Entry_h_