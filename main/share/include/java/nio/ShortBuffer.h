#ifndef _java_nio_ShortBuffer_h_
#define _java_nio_ShortBuffer_h_
//$ class java.nio.ShortBuffer
//$ extends java.nio.Buffer
//$ implements java.lang.Comparable

#include <java/lang/Array.h>
#include <java/lang/Comparable.h>
#include <java/nio/Buffer.h>

#pragma push_macro("ARRAY_BASE_OFFSET")
#undef ARRAY_BASE_OFFSET

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

namespace java {
	namespace nio {

class $import ShortBuffer : public ::java::nio::Buffer, public ::java::lang::Comparable {
	$class(ShortBuffer, 0, ::java::nio::Buffer, ::java::lang::Comparable)
public:
	ShortBuffer();
	using ::java::nio::Buffer::limit;
	virtual $Object* clone() override;
	virtual ::java::nio::ShortBuffer* duplicate() override {return nullptr;}
	virtual void finalize() override;
	virtual bool isDirect() override {return false;}
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $shorts* hb, int32_t offset, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($shorts* hb, int64_t addr, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	static ::java::nio::ShortBuffer* allocate(int32_t capacity);
	virtual $Object* array() override;
	virtual int32_t arrayOffset() override;
	virtual ::java::nio::ShortBuffer* asReadOnlyBuffer() {return nullptr;}
	virtual $Object* base() override;
	virtual ::java::nio::ShortBuffer* clear() override;
	virtual ::java::nio::ShortBuffer* compact() {return nullptr;}
	static int32_t compare(int16_t x, int16_t y);
	virtual int32_t compareTo(::java::nio::ShortBuffer* that);
	virtual int32_t compareTo(Object$* that) override;
	virtual bool equals(Object$* ob) override;
	virtual ::java::nio::ShortBuffer* flip() override;
	virtual int16_t get() {return 0;}
	virtual int16_t get(int32_t index) {return 0;}
	virtual ::java::nio::ShortBuffer* get($shorts* dst, int32_t offset, int32_t length);
	virtual ::java::nio::ShortBuffer* get($shorts* dst);
	virtual ::java::nio::ShortBuffer* get(int32_t index, $shorts* dst, int32_t offset, int32_t length);
	virtual ::java::nio::ShortBuffer* get(int32_t index, $shorts* dst);
	::java::nio::ShortBuffer* getArray(int32_t index, $shorts* dst, int32_t offset, int32_t length);
	virtual bool hasArray() override;
	virtual int32_t hashCode() override;
	virtual ::java::nio::ShortBuffer* limit(int32_t newLimit) override;
	virtual ::java::nio::ShortBuffer* mark() override;
	virtual int32_t mismatch(::java::nio::ShortBuffer* that);
	virtual ::java::nio::ByteOrder* order() {return nullptr;}
	using ::java::nio::Buffer::position;
	virtual ::java::nio::ShortBuffer* position(int32_t newPosition) override;
	virtual ::java::nio::ShortBuffer* put(int16_t s) {return nullptr;}
	virtual ::java::nio::ShortBuffer* put(int32_t index, int16_t s) {return nullptr;}
	virtual ::java::nio::ShortBuffer* put(::java::nio::ShortBuffer* src);
	virtual ::java::nio::ShortBuffer* put(int32_t index, ::java::nio::ShortBuffer* src, int32_t offset, int32_t length);
	virtual ::java::nio::ShortBuffer* put($shorts* src, int32_t offset, int32_t length);
	::java::nio::ShortBuffer* put($shorts* src);
	virtual ::java::nio::ShortBuffer* put(int32_t index, $shorts* src, int32_t offset, int32_t length);
	virtual ::java::nio::ShortBuffer* put(int32_t index, $shorts* src);
	::java::nio::ShortBuffer* putArray(int32_t index, $shorts* src, int32_t offset, int32_t length);
	virtual void putBuffer(int32_t pos, ::java::nio::ShortBuffer* src, int32_t srcPos, int32_t n);
	virtual ::java::nio::ShortBuffer* reset() override;
	virtual ::java::nio::ShortBuffer* rewind() override;
	virtual ::java::nio::ShortBuffer* slice() override {return nullptr;}
	virtual ::java::nio::ShortBuffer* slice(int32_t index, int32_t length) override {return nullptr;}
	virtual $String* toString() override;
	static ::java::nio::ShortBuffer* wrap($shorts* array, int32_t offset, int32_t length);
	static ::java::nio::ShortBuffer* wrap($shorts* array);
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	$shorts* hb = nullptr;
	int32_t offset = 0;
	bool isReadOnly$ = false;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")

#endif // _java_nio_ShortBuffer_h_