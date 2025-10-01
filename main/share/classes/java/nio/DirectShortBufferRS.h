#ifndef _java_nio_DirectShortBufferRS_h_
#define _java_nio_DirectShortBufferRS_h_
//$ class java.nio.DirectShortBufferRS
//$ extends java.nio.DirectShortBufferS

#include <java/nio/DirectShortBufferS.h>

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

class DirectShortBufferRS : public ::java::nio::DirectShortBufferS {
	$class(DirectShortBufferRS, 0, ::java::nio::DirectShortBufferS)
public:
	DirectShortBufferRS();
	using ::java::nio::DirectShortBufferS::get;
	using ::java::nio::DirectShortBufferS::limit;
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::ShortBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::ShortBuffer* compact() override;
	virtual ::java::nio::ShortBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::DirectShortBufferS::put;
	using ::java::nio::DirectShortBufferS::position;
	virtual ::java::nio::ShortBuffer* put(int16_t x) override;
	virtual ::java::nio::ShortBuffer* put(int32_t i, int16_t x) override;
	virtual ::java::nio::ShortBuffer* slice() override;
	virtual ::java::nio::ShortBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
};

	} // nio
} // java

#endif // _java_nio_DirectShortBufferRS_h_