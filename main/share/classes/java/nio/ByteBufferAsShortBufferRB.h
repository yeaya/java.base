#ifndef _java_nio_ByteBufferAsShortBufferRB_h_
#define _java_nio_ByteBufferAsShortBufferRB_h_
//$ class java.nio.ByteBufferAsShortBufferRB
//$ extends java.nio.ByteBufferAsShortBufferB

#include <java/nio/ByteBufferAsShortBufferB.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class ByteOrder;
		class ShortBuffer;
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

class ByteBufferAsShortBufferRB : public ::java::nio::ByteBufferAsShortBufferB {
	$class(ByteBufferAsShortBufferRB, $NO_CLASS_INIT, ::java::nio::ByteBufferAsShortBufferB)
public:
	ByteBufferAsShortBufferRB();
	using ::java::nio::ByteBufferAsShortBufferB::get;
	void init$(::java::nio::ByteBuffer* bb, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(::java::nio::ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::ShortBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::ShortBuffer* compact() override;
	virtual ::java::nio::ShortBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	using ::java::nio::ByteBufferAsShortBufferB::limit;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::ByteBufferAsShortBufferB::put;
	using ::java::nio::ByteBufferAsShortBufferB::position;
	virtual ::java::nio::ShortBuffer* put(int16_t x) override;
	virtual ::java::nio::ShortBuffer* put(int32_t i, int16_t x) override;
	virtual ::java::nio::ShortBuffer* slice() override;
	virtual ::java::nio::ShortBuffer* slice(int32_t index, int32_t length) override;
};

	} // nio
} // java

#endif // _java_nio_ByteBufferAsShortBufferRB_h_