#ifndef _sun_nio_cs_ArrayDecoder_h_
#define _sun_nio_cs_ArrayDecoder_h_
//$ interface sun.nio.cs.ArrayDecoder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace nio {
		namespace cs {

class $import ArrayDecoder : public ::java::lang::Object {
	$interface(ArrayDecoder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t decode($bytes* src, int32_t off, int32_t len, $chars* dst) {return 0;}
	virtual int32_t decodeToLatin1($bytes* src, int32_t sp, int32_t len, $bytes* dst);
	virtual bool isASCIICompatible();
	virtual bool isLatin1Decodable();
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ArrayDecoder_h_