#ifndef _java_nio_DirectLongBufferU_h_
#define _java_nio_DirectLongBufferU_h_
//$ class java.nio.DirectLongBufferU
//$ extends java.nio.LongBuffer
//$ implements sun.nio.ch.DirectBuffer

#include <java/nio/LongBuffer.h>
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

class DirectLongBufferU : public ::java::nio::LongBuffer, public ::sun::nio::ch::DirectBuffer {
	$class(DirectLongBufferU, 0, ::java::nio::LongBuffer, ::sun::nio::ch::DirectBuffer)
public:
	DirectLongBufferU();
	using ::java::nio::LongBuffer::get;
	using ::java::nio::LongBuffer::limit;
	virtual $Object* clone() override;
	virtual bool equals(Object$* ob) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual int64_t address() override;
	virtual ::java::nio::LongBuffer* asReadOnlyBuffer() override;
	virtual $Object* attachment() override;
	virtual $Object* base() override;
	virtual ::jdk::internal::ref::Cleaner* cleaner() override;
	virtual ::java::nio::LongBuffer* compact() override;
	virtual ::java::nio::LongBuffer* duplicate() override;
	virtual int64_t get() override;
	virtual int64_t get(int32_t i) override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	int64_t ix(int32_t i);
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::LongBuffer::put;
	using ::java::nio::LongBuffer::position;
	virtual ::java::nio::LongBuffer* put(int64_t x) override;
	virtual ::java::nio::LongBuffer* put(int32_t i, int64_t x) override;
	virtual ::java::nio::LongBuffer* slice() override;
	virtual ::java::nio::LongBuffer* slice(int32_t index, int32_t length) override;
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

#endif // _java_nio_DirectLongBufferU_h_