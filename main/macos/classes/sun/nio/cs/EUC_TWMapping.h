#ifndef _sun_nio_cs_EUC_TWMapping_h_
#define _sun_nio_cs_EUC_TWMapping_h_
//$ class sun.nio.cs.EUC_TWMapping
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("C2BSIZE")
#undef C2BSIZE
#pragma push_macro("C2BSUPPSIZE")
#undef C2BSUPPSIZE

namespace sun {
	namespace nio {
		namespace cs {

class EUC_TWMapping : public ::java::lang::Object {
	$class(EUC_TWMapping, 0, ::java::lang::Object)
public:
	EUC_TWMapping();
	void init$();
	static const int32_t b1Min = 161;
	static const int32_t b1Max = 254;
	static const int32_t b2Min = 161;
	static const int32_t b2Max = 254;
	static $StringArray* b2c;
	static const int32_t C2BSIZE = 31744;
	static $chars* c2bIndex;
	static const int32_t C2BSUPPSIZE = 0x0000AA00;
	static $chars* c2bSuppIndex;
	static $String* b2cIsSuppStr;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("C2BSIZE")
#pragma pop_macro("C2BSUPPSIZE")

#endif // _sun_nio_cs_EUC_TWMapping_h_