#ifndef _sun_nio_cs_DoubleByte_h_
#define _sun_nio_cs_DoubleByte_h_
//$ class sun.nio.cs.DoubleByte
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("B2C_UNMAPPABLE")
#undef B2C_UNMAPPABLE

namespace sun {
	namespace nio {
		namespace cs {

class $import DoubleByte : public ::java::lang::Object {
	$class(DoubleByte, 0, ::java::lang::Object)
public:
	DoubleByte();
	void init$();
	static $chars* B2C_UNMAPPABLE;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("B2C_UNMAPPABLE")

#endif // _sun_nio_cs_DoubleByte_h_