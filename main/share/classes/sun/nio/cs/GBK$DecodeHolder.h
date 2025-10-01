#ifndef _sun_nio_cs_GBK$DecodeHolder_h_
#define _sun_nio_cs_GBK$DecodeHolder_h_
//$ class sun.nio.cs.GBK$DecodeHolder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace nio {
		namespace cs {

class $export GBK$DecodeHolder : public ::java::lang::Object {
	$class(GBK$DecodeHolder, 0, ::java::lang::Object)
public:
	GBK$DecodeHolder();
	void init$();
	static $String* b2cSBStr;
	static $StringArray* b2cStr;
	static $Array<char16_t, 2>* b2c;
	static $chars* b2cSB;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_GBK$DecodeHolder_h_