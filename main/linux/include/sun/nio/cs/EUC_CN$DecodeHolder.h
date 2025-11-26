#ifndef _sun_nio_cs_EUC_CN$DecodeHolder_h_
#define _sun_nio_cs_EUC_CN$DecodeHolder_h_
//$ class sun.nio.cs.EUC_CN$DecodeHolder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace nio {
		namespace cs {

class $import EUC_CN$DecodeHolder : public ::java::lang::Object {
	$class(EUC_CN$DecodeHolder, 0, ::java::lang::Object)
public:
	EUC_CN$DecodeHolder();
	void init$();
	static $String* b2cSBStr;
	static $StringArray* b2cStr;
	static $Array<char16_t, 2>* b2c;
	static $chars* b2cSB;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_EUC_CN$DecodeHolder_h_