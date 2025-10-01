#ifndef _java_nio_DirectIntBufferRS_h_
#define _java_nio_DirectIntBufferRS_h_
//$ class java.nio.DirectIntBufferRS
//$ extends java.nio.DirectIntBufferS

#include <java/nio/DirectIntBufferS.h>

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

class DirectIntBufferRS : public ::java::nio::DirectIntBufferS {
	$class(DirectIntBufferRS, 0, ::java::nio::DirectIntBufferS)
public:
	DirectIntBufferRS();
	using ::java::nio::DirectIntBufferS::get;
	using ::java::nio::DirectIntBufferS::limit;
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::IntBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::IntBuffer* compact() override;
	virtual ::java::nio::IntBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::DirectIntBufferS::put;
	using ::java::nio::DirectIntBufferS::position;
	virtual ::java::nio::IntBuffer* put(int32_t x) override;
	virtual ::java::nio::IntBuffer* put(int32_t i, int32_t x) override;
	virtual ::java::nio::IntBuffer* slice() override;
	virtual ::java::nio::IntBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
};

	} // nio
} // java

#endif // _java_nio_DirectIntBufferRS_h_