#ifndef _java_nio_DirectFloatBufferRU_h_
#define _java_nio_DirectFloatBufferRU_h_
//$ class java.nio.DirectFloatBufferRU
//$ extends java.nio.DirectFloatBufferU

#include <java/nio/DirectFloatBufferU.h>

namespace java {
	namespace nio {
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
namespace sun {
	namespace nio {
		namespace ch {
			class DirectBuffer;
		}
	}
}

namespace java {
	namespace nio {

class DirectFloatBufferRU : public ::java::nio::DirectFloatBufferU {
	$class(DirectFloatBufferRU, 0, ::java::nio::DirectFloatBufferU)
public:
	DirectFloatBufferRU();
	using ::java::nio::DirectFloatBufferU::get;
	using ::java::nio::DirectFloatBufferU::limit;
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::FloatBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::FloatBuffer* compact() override;
	virtual ::java::nio::FloatBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::DirectFloatBufferU::put;
	using ::java::nio::DirectFloatBufferU::position;
	virtual ::java::nio::FloatBuffer* put(float x) override;
	virtual ::java::nio::FloatBuffer* put(int32_t i, float x) override;
	virtual ::java::nio::FloatBuffer* slice() override;
	virtual ::java::nio::FloatBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
};

	} // nio
} // java

#endif // _java_nio_DirectFloatBufferRU_h_