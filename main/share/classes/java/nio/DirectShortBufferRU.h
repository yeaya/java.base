#ifndef _java_nio_DirectShortBufferRU_h_
#define _java_nio_DirectShortBufferRU_h_
//$ class java.nio.DirectShortBufferRU
//$ extends java.nio.DirectShortBufferU

#include <java/nio/DirectShortBufferU.h>

namespace java {
	namespace nio {
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
namespace sun {
	namespace nio {
		namespace ch {
			class DirectBuffer;
		}
	}
}

namespace java {
	namespace nio {

class DirectShortBufferRU : public ::java::nio::DirectShortBufferU {
	$class(DirectShortBufferRU, 0, ::java::nio::DirectShortBufferU)
public:
	DirectShortBufferRU();
	using ::java::nio::DirectShortBufferU::get;
	using ::java::nio::DirectShortBufferU::limit;
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::ShortBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::ShortBuffer* compact() override;
	virtual ::java::nio::ShortBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::DirectShortBufferU::put;
	using ::java::nio::DirectShortBufferU::position;
	virtual ::java::nio::ShortBuffer* put(int16_t x) override;
	virtual ::java::nio::ShortBuffer* put(int32_t i, int16_t x) override;
	virtual ::java::nio::ShortBuffer* slice() override;
	virtual ::java::nio::ShortBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
};

	} // nio
} // java

#endif // _java_nio_DirectShortBufferRU_h_