#ifndef _java_nio_DirectCharBufferS_h_
#define _java_nio_DirectCharBufferS_h_
//$ class java.nio.DirectCharBufferS
//$ extends java.nio.CharBuffer
//$ implements sun.nio.ch.DirectBuffer

#include <java/nio/CharBuffer.h>
#include <sun/nio/ch/DirectBuffer.h>

#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET
#pragma push_macro("UNALIGNED")
#undef UNALIGNED

namespace java {
	namespace lang {
		class CharSequence;
	}
}
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

class DirectCharBufferS : public ::java::nio::CharBuffer, public ::sun::nio::ch::DirectBuffer {
	$class(DirectCharBufferS, 0, ::java::nio::CharBuffer, ::sun::nio::ch::DirectBuffer)
public:
	DirectCharBufferS();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::nio::CharBuffer::get;
	using ::java::nio::CharBuffer::limit;
	virtual $Object* clone() override;
	virtual bool equals(Object$* ob) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::nio::ch::DirectBuffer* db, int32_t mark, int32_t pos, int32_t lim, int32_t cap, int32_t off, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	virtual int64_t address() override;
	virtual ::java::nio::CharBuffer* asReadOnlyBuffer() override;
	virtual $Object* attachment() override;
	virtual $Object* base() override;
	virtual ::java::nio::ByteOrder* charRegionOrder() override;
	virtual ::jdk::internal::ref::Cleaner* cleaner() override;
	virtual ::java::nio::CharBuffer* compact() override;
	virtual ::java::nio::CharBuffer* duplicate() override;
	virtual char16_t get() override;
	virtual char16_t get(int32_t i) override;
	virtual char16_t getUnchecked(int32_t i) override;
	virtual bool isDirect() override;
	virtual bool isReadOnly() override;
	int64_t ix(int32_t i);
	virtual ::java::nio::ByteOrder* order() override;
	using ::java::nio::CharBuffer::put;
	using ::java::nio::CharBuffer::position;
	virtual ::java::nio::CharBuffer* put(char16_t x) override;
	virtual ::java::nio::CharBuffer* put(int32_t i, char16_t x) override;
	virtual ::java::nio::CharBuffer* slice() override;
	virtual ::java::nio::CharBuffer* slice(int32_t index, int32_t length) override;
	virtual ::java::lang::CharSequence* subSequence(int32_t start, int32_t end) override;
	virtual $String* toString() override;
	virtual $String* toString(int32_t start, int32_t end) override;
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	static bool UNALIGNED;
	$Object* att = nullptr;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")
#pragma pop_macro("UNALIGNED")

#endif // _java_nio_DirectCharBufferS_h_