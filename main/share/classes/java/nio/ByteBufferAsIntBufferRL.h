#ifndef _java_nio_ByteBufferAsIntBufferRL_h_
#define _java_nio_ByteBufferAsIntBufferRL_h_
//$ class java.nio.ByteBufferAsIntBufferRL
//$ extends java.nio.ByteBufferAsIntBufferL

#include <java/nio/ByteBufferAsIntBufferL.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class ByteOrder;
		class IntBuffer;
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			namespace foreign {
				class MemorySegmentProxy;
			}
		}
	}
}

namespace java {
	namespace nio {

class ByteBufferAsIntBufferRL : public ::java::nio::ByteBufferAsIntBufferL {
	$class(ByteBufferAsIntBufferRL, $NO_CLASS_INIT, ::java::nio::ByteBufferAsIntBufferL)
public:
	ByteBufferAsIntBufferRL();
	using ::java::nio::ByteBufferAsIntBufferL::get;
	void init$(::java::nio::ByteBuffer* bb, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(::java::nio::ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::IntBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::IntBuffer* compact() override;
	virtual ::java::nio::IntBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	using ::java::nio::ByteBufferAsIntBufferL::limit;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::ByteBufferAsIntBufferL::put;
	using ::java::nio::ByteBufferAsIntBufferL::position;
	virtual ::java::nio::IntBuffer* put(int32_t x) override;
	virtual ::java::nio::IntBuffer* put(int32_t i, int32_t x) override;
	virtual ::java::nio::IntBuffer* slice() override;
	virtual ::java::nio::IntBuffer* slice(int32_t index, int32_t length) override;
};

	} // nio
} // java

#endif // _java_nio_ByteBufferAsIntBufferRL_h_