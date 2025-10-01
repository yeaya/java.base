#ifndef _sun_nio_cs_ArrayEncoder_h_
#define _sun_nio_cs_ArrayEncoder_h_
//$ interface sun.nio.cs.ArrayEncoder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace nio {
		namespace cs {

class $import ArrayEncoder : public ::java::lang::Object {
	$interface(ArrayEncoder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t encode($chars* src, int32_t off, int32_t len, $bytes* dst) {return 0;}
	virtual int32_t encodeFromLatin1($bytes* src, int32_t sp, int32_t len, $bytes* dst);
	virtual int32_t encodeFromUTF16($bytes* src, int32_t sp, int32_t len, $bytes* dst);
	virtual bool isASCIICompatible();
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ArrayEncoder_h_