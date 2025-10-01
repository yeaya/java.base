#ifndef _java_nio_DirectShortBufferU_h_
#define _java_nio_DirectShortBufferU_h_
//$ class java.nio.DirectShortBufferU
//$ extends java.nio.ShortBuffer
//$ implements sun.nio.ch.DirectBuffer

#include <java/nio/ShortBuffer.h>
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

class DirectShortBufferU : public ::java::nio::ShortBuffer, public ::sun::nio::ch::DirectBuffer {
	$class(DirectShortBufferU, 0, ::java::nio::ShortBuffer, ::sun::nio::ch::DirectBuffer)
public:
	DirectShortBufferU();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::nio::ShortBuffer::get;
	using ::java::nio::ShortBuffer::limit;
	virtual $Object* clone() override;
	virtual bool equals(Object$* ob) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual int64_t address() override;
	virtual ::java::nio::ShortBuffer* asReadOnlyBuffer() override;
	virtual $Object* attachment() override;
	virtual $Object* base() override;
	virtual ::jdk::internal::ref::Cleaner* cleaner() override;
	virtual ::java::nio::ShortBuffer* compact() override;
	virtual ::java::nio::ShortBuffer* duplicate() override;
	virtual int16_t get() override;
	virtual int16_t get(int32_t i) override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	int64_t ix(int32_t i);
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::ShortBuffer::put;
	using ::java::nio::ShortBuffer::position;
	virtual ::java::nio::ShortBuffer* put(int16_t x) override;
	virtual ::java::nio::ShortBuffer* put(int32_t i, int16_t x) override;
	virtual ::java::nio::ShortBuffer* slice() override;
	virtual ::java::nio::ShortBuffer* slice(int32_t index, int32_t length) override;
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

#endif // _java_nio_DirectShortBufferU_h_