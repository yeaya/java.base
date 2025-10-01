#ifndef _sun_nio_cs_HKSCSMapping_h_
#define _sun_nio_cs_HKSCSMapping_h_
//$ class sun.nio.cs.HKSCSMapping
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace nio {
		namespace cs {

class $export HKSCSMapping : public ::java::lang::Object {
	$class(HKSCSMapping, 0, ::java::lang::Object)
public:
	HKSCSMapping();
	void init$();
	static $StringArray* b2cBmpStr;
	static $StringArray* b2cSuppStr;
	static $String* pua;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_HKSCSMapping_h_