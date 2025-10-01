#ifndef _java_nio_BufferMismatch_h_
#define _java_nio_BufferMismatch_h_
//$ class java.nio.BufferMismatch
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SCOPED_MEMORY_ACCESS")
#undef SCOPED_MEMORY_ACCESS

namespace java {
	namespace nio {
		class ByteBuffer;
		class CharBuffer;
		class DoubleBuffer;
		class FloatBuffer;
		class IntBuffer;
		class LongBuffer;
		class ShortBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class ScopedMemoryAccess;
		}
	}
}

namespace java {
	namespace nio {

class BufferMismatch : public ::java::lang::Object {
	$class(BufferMismatch, 0, ::java::lang::Object)
public:
	BufferMismatch();
	void init$();
	static int32_t mismatch(::java::nio::ByteBuffer* a, int32_t aOff, ::java::nio::ByteBuffer* b, int32_t bOff, int32_t length);
	static int32_t mismatch(::java::nio::CharBuffer* a, int32_t aOff, ::java::nio::CharBuffer* b, int32_t bOff, int32_t length);
	static int32_t mismatch(::java::nio::ShortBuffer* a, int32_t aOff, ::java::nio::ShortBuffer* b, int32_t bOff, int32_t length);
	static int32_t mismatch(::java::nio::IntBuffer* a, int32_t aOff, ::java::nio::IntBuffer* b, int32_t bOff, int32_t length);
	static int32_t mismatch(::java::nio::FloatBuffer* a, int32_t aOff, ::java::nio::FloatBuffer* b, int32_t bOff, int32_t length);
	static int32_t mismatch(::java::nio::LongBuffer* a, int32_t aOff, ::java::nio::LongBuffer* b, int32_t bOff, int32_t length);
	static int32_t mismatch(::java::nio::DoubleBuffer* a, int32_t aOff, ::java::nio::DoubleBuffer* b, int32_t bOff, int32_t length);
	static ::jdk::internal::misc::ScopedMemoryAccess* SCOPED_MEMORY_ACCESS;
};

	} // nio
} // java

#pragma pop_macro("SCOPED_MEMORY_ACCESS")

#endif // _java_nio_BufferMismatch_h_