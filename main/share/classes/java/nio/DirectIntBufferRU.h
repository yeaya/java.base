#ifndef _java_nio_DirectIntBufferRU_h_
#define _java_nio_DirectIntBufferRU_h_
//$ class java.nio.DirectIntBufferRU
//$ extends java.nio.DirectIntBufferU

#include <java/nio/DirectIntBufferU.h>

namespace java {
	namespace nio {
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
namespace sun {
	namespace nio {
		namespace ch {
			class DirectBuffer;
		}
	}
}

namespace java {
	namespace nio {

class DirectIntBufferRU : public ::java::nio::DirectIntBufferU {
	$class(DirectIntBufferRU, 0, ::java::nio::DirectIntBufferU)
public:
	DirectIntBufferRU();
	using ::java::nio::DirectIntBufferU::get;
	using ::java::nio::DirectIntBufferU::limit;
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::IntBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::IntBuffer* compact() override;
	virtual ::java::nio::IntBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::DirectIntBufferU::put;
	using ::java::nio::DirectIntBufferU::position;
	virtual ::java::nio::IntBuffer* put(int32_t x) override;
	virtual ::java::nio::IntBuffer* put(int32_t i, int32_t x) override;
	virtual ::java::nio::IntBuffer* slice() override;
	virtual ::java::nio::IntBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
};

	} // nio
} // java

#endif // _java_nio_DirectIntBufferRU_h_