#ifndef _java_nio_ByteBufferAsDoubleBufferRL_h_
#define _java_nio_ByteBufferAsDoubleBufferRL_h_
//$ class java.nio.ByteBufferAsDoubleBufferRL
//$ extends java.nio.ByteBufferAsDoubleBufferL

#include <java/nio/ByteBufferAsDoubleBufferL.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class ByteOrder;
		class DoubleBuffer;
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

class ByteBufferAsDoubleBufferRL : public ::java::nio::ByteBufferAsDoubleBufferL {
	$class(ByteBufferAsDoubleBufferRL, $NO_CLASS_INIT, ::java::nio::ByteBufferAsDoubleBufferL)
public:
	ByteBufferAsDoubleBufferRL();
	using ::java::nio::ByteBufferAsDoubleBufferL::get;
	void init$(::java::nio::ByteBuffer* bb, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(::java::nio::ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::DoubleBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::DoubleBuffer* compact() override;
	virtual ::java::nio::DoubleBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	using ::java::nio::ByteBufferAsDoubleBufferL::limit;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::ByteBufferAsDoubleBufferL::put;
	using ::java::nio::ByteBufferAsDoubleBufferL::position;
	virtual ::java::nio::DoubleBuffer* put(double x) override;
	virtual ::java::nio::DoubleBuffer* put(int32_t i, double x) override;
	virtual ::java::nio::DoubleBuffer* slice() override;
	virtual ::java::nio::DoubleBuffer* slice(int32_t index, int32_t length) override;
};

	} // nio
} // java

#endif // _java_nio_ByteBufferAsDoubleBufferRL_h_