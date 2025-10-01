#ifndef _java_nio_ByteBufferAsDoubleBufferB_h_
#define _java_nio_ByteBufferAsDoubleBufferB_h_
//$ class java.nio.ByteBufferAsDoubleBufferB
//$ extends java.nio.DoubleBuffer

#include <java/nio/DoubleBuffer.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class ByteOrder;
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

class ByteBufferAsDoubleBufferB : public ::java::nio::DoubleBuffer {
	$class(ByteBufferAsDoubleBufferB, 0, ::java::nio::DoubleBuffer)
public:
	ByteBufferAsDoubleBufferB();
	using ::java::nio::DoubleBuffer::get;
	using ::java::nio::DoubleBuffer::limit;
	void init$(::java::nio::ByteBuffer* bb, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(::java::nio::ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::DoubleBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual int64_t byteOffset(int64_t i);
	virtual ::java::nio::DoubleBuffer* compact() override;
	virtual ::java::nio::DoubleBuffer* duplicate() override;
	virtual double get() override;
	virtual double get(int32_t i) override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	int32_t ix(int32_t i);
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::DoubleBuffer::put;
	using ::java::nio::DoubleBuffer::position;
	virtual ::java::nio::DoubleBuffer* put(double x) override;
	virtual ::java::nio::DoubleBuffer* put(int32_t i, double x) override;
	virtual ::java::nio::DoubleBuffer* slice() override;
	virtual ::java::nio::DoubleBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
	::java::nio::ByteBuffer* bb = nullptr;
};

	} // nio
} // java

#endif // _java_nio_ByteBufferAsDoubleBufferB_h_