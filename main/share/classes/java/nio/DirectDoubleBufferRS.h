#ifndef _java_nio_DirectDoubleBufferRS_h_
#define _java_nio_DirectDoubleBufferRS_h_
//$ class java.nio.DirectDoubleBufferRS
//$ extends java.nio.DirectDoubleBufferS

#include <java/nio/DirectDoubleBufferS.h>

namespace java {
	namespace nio {
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
namespace sun {
	namespace nio {
		namespace ch {
			class DirectBuffer;
		}
	}
}

namespace java {
	namespace nio {

class DirectDoubleBufferRS : public ::java::nio::DirectDoubleBufferS {
	$class(DirectDoubleBufferRS, 0, ::java::nio::DirectDoubleBufferS)
public:
	DirectDoubleBufferRS();
	using ::java::nio::DirectDoubleBufferS::get;
	using ::java::nio::DirectDoubleBufferS::limit;
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::DoubleBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::DoubleBuffer* compact() override;
	virtual ::java::nio::DoubleBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::DirectDoubleBufferS::put;
	using ::java::nio::DirectDoubleBufferS::position;
	virtual ::java::nio::DoubleBuffer* put(double x) override;
	virtual ::java::nio::DoubleBuffer* put(int32_t i, double x) override;
	virtual ::java::nio::DoubleBuffer* slice() override;
	virtual ::java::nio::DoubleBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
};

	} // nio
} // java

#endif // _java_nio_DirectDoubleBufferRS_h_