#ifndef _jdk_internal_jimage_NativeImageBuffer_h_
#define _jdk_internal_jimage_NativeImageBuffer_h_
//$ class jdk.internal.jimage.NativeImageBuffer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace jdk {
	namespace internal {
		namespace jimage {

class NativeImageBuffer : public ::java::lang::Object {
	$class(NativeImageBuffer, 0, ::java::lang::Object)
public:
	NativeImageBuffer();
	void init$();
	static ::java::nio::ByteBuffer* getNativeMap($String* imagePath);
};

		} // jimage
	} // internal
} // jdk

#endif // _jdk_internal_jimage_NativeImageBuffer_h_