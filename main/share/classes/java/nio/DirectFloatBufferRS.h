#ifndef _java_nio_DirectFloatBufferRS_h_
#define _java_nio_DirectFloatBufferRS_h_
//$ class java.nio.DirectFloatBufferRS
//$ extends java.nio.DirectFloatBufferS

#include <java/nio/DirectFloatBufferS.h>

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

class DirectFloatBufferRS : public ::java::nio::DirectFloatBufferS {
	$class(DirectFloatBufferRS, 0, ::java::nio::DirectFloatBufferS)
public:
	DirectFloatBufferRS();
	using ::java::nio::DirectFloatBufferS::get;
	using ::java::nio::DirectFloatBufferS::limit;
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::FloatBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::FloatBuffer* compact() override;
	virtual ::java::nio::FloatBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::DirectFloatBufferS::put;
	using ::java::nio::DirectFloatBufferS::position;
	virtual ::java::nio::FloatBuffer* put(float x) override;
	virtual ::java::nio::FloatBuffer* put(int32_t i, float x) override;
	virtual ::java::nio::FloatBuffer* slice() override;
	virtual ::java::nio::FloatBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
};

	} // nio
} // java

#endif // _java_nio_DirectFloatBufferRS_h_