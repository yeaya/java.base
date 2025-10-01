#ifndef _java_nio_ByteBufferAsFloatBufferRL_h_
#define _java_nio_ByteBufferAsFloatBufferRL_h_
//$ class java.nio.ByteBufferAsFloatBufferRL
//$ extends java.nio.ByteBufferAsFloatBufferL

#include <java/nio/ByteBufferAsFloatBufferL.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class ByteOrder;
		class FloatBuffer;
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

class ByteBufferAsFloatBufferRL : public ::java::nio::ByteBufferAsFloatBufferL {
	$class(ByteBufferAsFloatBufferRL, $NO_CLASS_INIT, ::java::nio::ByteBufferAsFloatBufferL)
public:
	ByteBufferAsFloatBufferRL();
	using ::java::nio::ByteBufferAsFloatBufferL::get;
	void init$(::java::nio::ByteBuffer* bb, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(::java::nio::ByteBuffer* bb, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int64_t addr, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::FloatBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::FloatBuffer* compact() override;
	virtual ::java::nio::FloatBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	using ::java::nio::ByteBufferAsFloatBufferL::limit;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::ByteBufferAsFloatBufferL::put;
	using ::java::nio::ByteBufferAsFloatBufferL::position;
	virtual ::java::nio::FloatBuffer* put(float x) override;
	virtual ::java::nio::FloatBuffer* put(int32_t i, float x) override;
	virtual ::java::nio::FloatBuffer* slice() override;
	virtual ::java::nio::FloatBuffer* slice(int32_t index, int32_t length) override;
};

	} // nio
} // java

#endif // _java_nio_ByteBufferAsFloatBufferRL_h_