#ifndef _java_nio_LongBuffer_h_
#define _java_nio_LongBuffer_h_
//$ class java.nio.LongBuffer
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

class $export LongBuffer : public ::java::nio::Buffer, public ::java::lang::Comparable {
	$class(LongBuffer, 0, ::java::nio::Buffer, ::java::lang::Comparable)
public:
	LongBuffer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::nio::Buffer::limit;
	virtual $Object* clone() override;
	virtual ::java::nio::LongBuffer* duplicate() override {return nullptr;}
	virtual void finalize() override;
	virtual bool isDirect() override {return false;}
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $longs* hb, int32_t offset, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($longs* hb, int64_t addr, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	static ::java::nio::LongBuffer* allocate(int32_t capacity);
	virtual $Object* array() override;
	virtual int32_t arrayOffset() override;
	virtual ::java::nio::LongBuffer* asReadOnlyBuffer() {return nullptr;}
	virtual $Object* base() override;
	virtual ::java::nio::LongBuffer* clear() override;
	virtual ::java::nio::LongBuffer* compact() {return nullptr;}
	static int32_t compare(int64_t x, int64_t y);
	virtual int32_t compareTo(::java::nio::LongBuffer* that);
	virtual int32_t compareTo(Object$* that) override;
	virtual bool equals(Object$* ob) override;
	virtual ::java::nio::LongBuffer* flip() override;
	virtual int64_t get() {return 0;}
	virtual int64_t get(int32_t index) {return 0;}
	virtual ::java::nio::LongBuffer* get($longs* dst, int32_t offset, int32_t length);
	virtual ::java::nio::LongBuffer* get($longs* dst);
	virtual ::java::nio::LongBuffer* get(int32_t index, $longs* dst, int32_t offset, int32_t length);
	virtual ::java::nio::LongBuffer* get(int32_t index, $longs* dst);
	::java::nio::LongBuffer* getArray(int32_t index, $longs* dst, int32_t offset, int32_t length);
	virtual bool hasArray() override;
	virtual int32_t hashCode() override;
	virtual ::java::nio::LongBuffer* limit(int32_t newLimit) override;
	virtual ::java::nio::LongBuffer* mark() override;
	virtual int32_t mismatch(::java::nio::LongBuffer* that);
	virtual ::java::nio::ByteOrder* order() {return nullptr;}
	using ::java::nio::Buffer::position;
	virtual ::java::nio::LongBuffer* position(int32_t newPosition) override;
	virtual ::java::nio::LongBuffer* put(int64_t l) {return nullptr;}
	virtual ::java::nio::LongBuffer* put(int32_t index, int64_t l) {return nullptr;}
	virtual ::java::nio::LongBuffer* put(::java::nio::LongBuffer* src);
	virtual ::java::nio::LongBuffer* put(int32_t index, ::java::nio::LongBuffer* src, int32_t offset, int32_t length);
	virtual ::java::nio::LongBuffer* put($longs* src, int32_t offset, int32_t length);
	::java::nio::LongBuffer* put($longs* src);
	virtual ::java::nio::LongBuffer* put(int32_t index, $longs* src, int32_t offset, int32_t length);
	virtual ::java::nio::LongBuffer* put(int32_t index, $longs* src);
	::java::nio::LongBuffer* putArray(int32_t index, $longs* src, int32_t offset, int32_t length);
	virtual void putBuffer(int32_t pos, ::java::nio::LongBuffer* src, int32_t srcPos, int32_t n);
	virtual ::java::nio::LongBuffer* reset() override;
	virtual ::java::nio::LongBuffer* rewind() override;
	virtual ::java::nio::LongBuffer* slice() override {return nullptr;}
	virtual ::java::nio::LongBuffer* slice(int32_t index, int32_t length) override {return nullptr;}
	virtual $String* toString() override;
	static ::java::nio::LongBuffer* wrap($longs* array, int32_t offset, int32_t length);
	static ::java::nio::LongBuffer* wrap($longs* array);
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	$longs* hb = nullptr;
	int32_t offset = 0;
	bool isReadOnly$ = false;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")

#endif // _java_nio_LongBuffer_h_