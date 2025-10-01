#ifndef _sun_nio_cs_DelegatableDecoder_h_
#define _sun_nio_cs_DelegatableDecoder_h_
//$ interface sun.nio.cs.DelegatableDecoder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class CharBuffer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class CoderResult;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class $export DelegatableDecoder : public ::java::lang::Object {
	$interface(DelegatableDecoder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::nio::charset::CoderResult* decodeLoop(::java::nio::ByteBuffer* src, ::java::nio::CharBuffer* dst) {return nullptr;}
	virtual ::java::nio::charset::CoderResult* implFlush(::java::nio::CharBuffer* out) {return nullptr;}
	virtual void implReset() {}
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_DelegatableDecoder_h_