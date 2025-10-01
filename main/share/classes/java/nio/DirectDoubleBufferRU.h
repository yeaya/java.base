#ifndef _java_nio_DirectDoubleBufferRU_h_
#define _java_nio_DirectDoubleBufferRU_h_
//$ class java.nio.DirectDoubleBufferRU
//$ extends java.nio.DirectDoubleBufferU

#include <java/nio/DirectDoubleBufferU.h>

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

class DirectDoubleBufferRU : public ::java::nio::DirectDoubleBufferU {
	$class(DirectDoubleBufferRU, 0, ::java::nio::DirectDoubleBufferU)
public:
	DirectDoubleBufferRU();
	using ::java::nio::DirectDoubleBufferU::get;
	using ::java::nio::DirectDoubleBufferU::limit;
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual ::java::nio::DoubleBuffer* asReadOnlyBuffer() override;
	virtual $Object* base() override;
	virtual ::java::nio::DoubleBuffer* compact() override;
	virtual ::java::nio::DoubleBuffer* duplicate() override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::DirectDoubleBufferU::put;
	using ::java::nio::DirectDoubleBufferU::position;
	virtual ::java::nio::DoubleBuffer* put(double x) override;
	virtual ::java::nio::DoubleBuffer* put(int32_t i, double x) override;
	virtual ::java::nio::DoubleBuffer* slice() override;
	virtual ::java::nio::DoubleBuffer* slice(int32_t index, int32_t length) override;
	static bool $assertionsDisabled;
};

	} // nio
} // java

#endif // _java_nio_DirectDoubleBufferRU_h_