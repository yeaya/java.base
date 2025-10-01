#ifndef _java_nio_ByteBufferAsIntBufferRB_h_
#define _java_nio_ByteBufferAsIntBufferRB_h_
//$ class java.nio.ByteBufferAsIntBufferRB
//$ extends java.nio.ByteBufferAsIntBufferB

#include <java/nio/ByteBufferAsIntBufferB.h>

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

class ByteBufferAsIntBufferRB : public ::java::nio::ByteBufferAsIntBufferB {
	$class(ByteBufferAsIntBufferRB, $NO_CLASS_INIT, ::java::nio::ByteBufferAsIntBufferB)
public:
	ByteBufferAsIntBufferRB();
	using ::java::nio::ByteBufferAsIntBufferB::get;
	void init$(::java::nio::ByteBuffer* bb, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(::java::nio::ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::IntBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::IntBuffer* compact() override;
	virtual ::java::nio::IntBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	using ::java::nio::ByteBufferAsIntBufferB::limit;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::ByteBufferAsIntBufferB::put;
	using ::java::nio::ByteBufferAsIntBufferB::position;
	virtual ::java::nio::IntBuffer* put(int32_t x) override;
	virtual ::java::nio::IntBuffer* put(int32_t i, int32_t x) override;
	virtual ::java::nio::IntBuffer* slice() override;
	virtual ::java::nio::IntBuffer* slice(int32_t index, int32_t length) override;
};

	} // nio
} // java

#endif // _java_nio_ByteBufferAsIntBufferRB_h_