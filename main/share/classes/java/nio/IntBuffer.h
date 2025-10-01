#ifndef _java_nio_IntBuffer_h_
#define _java_nio_IntBuffer_h_
//$ class java.nio.IntBuffer
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

class $export IntBuffer : public ::java::nio::Buffer, public ::java::lang::Comparable {
	$class(IntBuffer, 0, ::java::nio::Buffer, ::java::lang::Comparable)
public:
	IntBuffer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::nio::Buffer::limit;
	virtual $Object* clone() override;
	virtual ::java::nio::IntBuffer* duplicate() override {return nullptr;}
	virtual void finalize() override;
	virtual bool isDirect() override {return false;}
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $ints* hb, int32_t offset, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($ints* hb, int64_t addr, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	static ::java::nio::IntBuffer* allocate(int32_t capacity);
	virtual $Object* array() override;
	virtual int32_t arrayOffset() override;
	virtual ::java::nio::IntBuffer* asReadOnlyBuffer() {return nullptr;}
	virtual $Object* base() override;
	virtual ::java::nio::IntBuffer* clear() override;
	virtual ::java::nio::IntBuffer* compact() {return nullptr;}
	static int32_t compare(int32_t x, int32_t y);
	virtual int32_t compareTo(::java::nio::IntBuffer* that);
	virtual int32_t compareTo(Object$* that) override;
	virtual bool equals(Object$* ob) override;
	virtual ::java::nio::IntBuffer* flip() override;
	virtual int32_t get() {return 0;}
	virtual int32_t get(int32_t index) {return 0;}
	virtual ::java::nio::IntBuffer* get($ints* dst, int32_t offset, int32_t length);
	virtual ::java::nio::IntBuffer* get($ints* dst);
	virtual ::java::nio::IntBuffer* get(int32_t index, $ints* dst, int32_t offset, int32_t length);
	virtual ::java::nio::IntBuffer* get(int32_t index, $ints* dst);
	::java::nio::IntBuffer* getArray(int32_t index, $ints* dst, int32_t offset, int32_t length);
	virtual bool hasArray() override;
	virtual int32_t hashCode() override;
	virtual ::java::nio::IntBuffer* limit(int32_t newLimit) override;
	virtual ::java::nio::IntBuffer* mark() override;
	virtual int32_t mismatch(::java::nio::IntBuffer* that);
	virtual ::java::nio::ByteOrder* order() {return nullptr;}
	using ::java::nio::Buffer::position;
	virtual ::java::nio::IntBuffer* position(int32_t newPosition) override;
	virtual ::java::nio::IntBuffer* put(int32_t i) {return nullptr;}
	virtual ::java::nio::IntBuffer* put(int32_t index, int32_t i) {return nullptr;}
	virtual ::java::nio::IntBuffer* put(::java::nio::IntBuffer* src);
	virtual ::java::nio::IntBuffer* put(int32_t index, ::java::nio::IntBuffer* src, int32_t offset, int32_t length);
	virtual ::java::nio::IntBuffer* put($ints* src, int32_t offset, int32_t length);
	::java::nio::IntBuffer* put($ints* src);
	virtual ::java::nio::IntBuffer* put(int32_t index, $ints* src, int32_t offset, int32_t length);
	virtual ::java::nio::IntBuffer* put(int32_t index, $ints* src);
	::java::nio::IntBuffer* putArray(int32_t index, $ints* src, int32_t offset, int32_t length);
	virtual void putBuffer(int32_t pos, ::java::nio::IntBuffer* src, int32_t srcPos, int32_t n);
	virtual ::java::nio::IntBuffer* reset() override;
	virtual ::java::nio::IntBuffer* rewind() override;
	virtual ::java::nio::IntBuffer* slice() override {return nullptr;}
	virtual ::java::nio::IntBuffer* slice(int32_t index, int32_t length) override {return nullptr;}
	virtual $String* toString() override;
	static ::java::nio::IntBuffer* wrap($ints* array, int32_t offset, int32_t length);
	static ::java::nio::IntBuffer* wrap($ints* array);
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	$ints* hb = nullptr;
	int32_t offset = 0;
	bool isReadOnly$ = false;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")

#endif // _java_nio_IntBuffer_h_