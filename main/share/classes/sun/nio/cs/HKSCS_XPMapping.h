#ifndef _sun_nio_cs_HKSCS_XPMapping_h_
#define _sun_nio_cs_HKSCS_XPMapping_h_
//$ class sun.nio.cs.HKSCS_XPMapping
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace nio {
		namespace cs {

class HKSCS_XPMapping : public ::java::lang::Object {
	$class(HKSCS_XPMapping, 0, ::java::lang::Object)
public:
	HKSCS_XPMapping();
	void init$();
	static $StringArray* b2cBmpStr;
	static $StringArray* b2cSuppStr;
	static $String* pua;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_HKSCS_XPMapping_h_