#ifndef _sun_nio_ByteBuffered_h_
#define _sun_nio_ByteBuffered_h_
//$ interface sun.nio.ByteBuffered
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace sun {
	namespace nio {

class ByteBuffered : public ::java::lang::Object {
	$interface(ByteBuffered, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::nio::ByteBuffer* getByteBuffer() {return nullptr;}
};

	} // nio
} // sun

#endif // _sun_nio_ByteBuffered_h_