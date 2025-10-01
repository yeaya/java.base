#ifndef _java_nio_DirectLongBufferRU_h_
#define _java_nio_DirectLongBufferRU_h_
//$ class java.nio.DirectLongBufferRU
//$ extends java.nio.DirectLongBufferU

#include <java/nio/DirectLongBufferU.h>

namespace java {
	namespace nio {
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
namespace sun {
	namespace nio {
		namespace ch {
			class DirectBuffer;
		}
	}
}

namespace java {
	namespace nio {

class DirectLongBufferRU : public ::java::nio::DirectLongBufferU {
	$class(DirectLongBufferRU, 0, ::java::nio::DirectLongBufferU)
public:
	DirectLongBufferRU();
	using ::java::nio::DirectLongBufferU::get;
	using ::java::nio::DirectLongBufferU::limit;
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::LongBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::LongBuffer* compact() override;
	virtual ::java::nio::LongBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::DirectLongBufferU::put;
	using ::java::nio::DirectLongBufferU::position;
	virtual ::java::nio::LongBuffer* put(int64_t x) override;
	virtual ::java::nio::LongBuffer* put(int32_t i, int64_t x) override;
	virtual ::java::nio::LongBuffer* slice() override;
	virtual ::java::nio::LongBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
};

	} // nio
} // java

#endif // _java_nio_DirectLongBufferRU_h_