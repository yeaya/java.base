#ifndef _java_nio_ByteBufferAsLongBufferRB_h_
#define _java_nio_ByteBufferAsLongBufferRB_h_
//$ class java.nio.ByteBufferAsLongBufferRB
//$ extends java.nio.ByteBufferAsLongBufferB

#include <java/nio/ByteBufferAsLongBufferB.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class ByteOrder;
		class LongBuffer;
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

class ByteBufferAsLongBufferRB : public ::java::nio::ByteBufferAsLongBufferB {
	$class(ByteBufferAsLongBufferRB, $NO_CLASS_INIT, ::java::nio::ByteBufferAsLongBufferB)
public:
	ByteBufferAsLongBufferRB();
	using ::java::nio::ByteBufferAsLongBufferB::get;
	void init$(::java::nio::ByteBuffer* bb, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(::java::nio::ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::LongBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::LongBuffer* compact() override;
	virtual ::java::nio::LongBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	using ::java::nio::ByteBufferAsLongBufferB::limit;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::ByteBufferAsLongBufferB::put;
	using ::java::nio::ByteBufferAsLongBufferB::position;
	virtual ::java::nio::LongBuffer* put(int64_t x) override;
	virtual ::java::nio::LongBuffer* put(int32_t i, int64_t x) override;
	virtual ::java::nio::LongBuffer* slice() override;
	virtual ::java::nio::LongBuffer* slice(int32_t index, int32_t length) override;
};

	} // nio
} // java

#endif // _java_nio_ByteBufferAsLongBufferRB_h_