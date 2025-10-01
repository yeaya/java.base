#ifndef _java_nio_DirectCharBufferRS_h_
#define _java_nio_DirectCharBufferRS_h_
//$ class java.nio.DirectCharBufferRS
//$ extends java.nio.DirectCharBufferS

#include <java/nio/DirectCharBufferS.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace nio {
		class ByteOrder;
		class CharBuffer;
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

class DirectCharBufferRS : public ::java::nio::DirectCharBufferS {
	$class(DirectCharBufferRS, 0, ::java::nio::DirectCharBufferS)
public:
	DirectCharBufferRS();
	using ::java::nio::DirectCharBufferS::get;
	using ::java::nio::DirectCharBufferS::limit;
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::CharBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::ByteOrder* charRegionOrder() override;
	virtual ::java::nio::CharBuffer* compact() override;
	virtual ::java::nio::CharBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::DirectCharBufferS::put;
	using ::java::nio::DirectCharBufferS::position;
	virtual ::java::nio::CharBuffer* put(char16_t x) override;
	virtual ::java::nio::CharBuffer* put(int32_t i, char16_t x) override;
	virtual ::java::nio::CharBuffer* slice() override;
	virtual ::java::nio::CharBuffer* slice(int32_t index, int32_t length) override;
	virtual ::java::lang::CharSequence* subSequence(int32_t start, int32_t end) override;
	using ::java::nio::DirectCharBufferS::toString;
	virtual $String* toString(int32_t start, int32_t end) override;
	static bool $assertionsDisabled;
};

	} // nio
} // java

#endif // _java_nio_DirectCharBufferRS_h_