#ifndef _java_nio_DirectDoubleBufferS_h_
#define _java_nio_DirectDoubleBufferS_h_
//$ class java.nio.DirectDoubleBufferS
//$ extends java.nio.DoubleBuffer
//$ implements sun.nio.ch.DirectBuffer

#include <java/nio/DoubleBuffer.h>
#include <sun/nio/ch/DirectBuffer.h>

#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET
#pragma push_macro("UNALIGNED")
#undef UNALIGNED

namespace java {
	namespace nio {
		class ByteOrder;
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
namespace jdk {
	namespace internal {
		namespace ref {
			class Cleaner;
		}
	}
}

namespace java {
	namespace nio {

class DirectDoubleBufferS : public ::java::nio::DoubleBuffer, public ::sun::nio::ch::DirectBuffer {
	$class(DirectDoubleBufferS, 0, ::java::nio::DoubleBuffer, ::sun::nio::ch::DirectBuffer)
public:
	DirectDoubleBufferS();
	using ::java::nio::DoubleBuffer::get;
	using ::java::nio::DoubleBuffer::limit;
	virtual $Object* clone() override;
	virtual bool equals(Object$* ob) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual int64_t address() override;
	virtual ::java::nio::DoubleBuffer* asReadOnlyBuffer() override;
	virtual $Object* attachment() override;
	virtual $Object* base() override;
	virtual ::jdk::internal::ref::Cleaner* cleaner() override;
	virtual ::java::nio::DoubleBuffer* compact() override;
	virtual ::java::nio::DoubleBuffer* duplicate() override;
	virtual double get() override;
	virtual double get(int32_t i) override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	int64_t ix(int32_t i);
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::DoubleBuffer::put;
	using ::java::nio::DoubleBuffer::position;
	virtual ::java::nio::DoubleBuffer* put(double x) override;
	virtual ::java::nio::DoubleBuffer* put(int32_t i, double x) override;
	virtual ::java::nio::DoubleBuffer* slice() override;
	virtual ::java::nio::DoubleBuffer* slice(int32_t index, int32_t length) override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	static bool UNALIGNED;
	$Object* att = nullptr;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")
#pragma pop_macro("UNALIGNED")

#endif // _java_nio_DirectDoubleBufferS_h_