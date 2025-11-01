#ifndef _java_nio_DoubleBuffer_h_
#define _java_nio_DoubleBuffer_h_
//$ class java.nio.DoubleBuffer
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

class $export DoubleBuffer : public ::java::nio::Buffer, public ::java::lang::Comparable {
	$class(DoubleBuffer, 0, ::java::nio::Buffer, ::java::lang::Comparable)
public:
	DoubleBuffer();
	using ::java::nio::Buffer::limit;
	virtual $Object* clone() override;
	virtual ::java::nio::DoubleBuffer* duplicate() override {return nullptr;}
	virtual void finalize() override;
	virtual bool isDirect() override {return false;}
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $doubles* hb, int32_t offset, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($doubles* hb, int64_t addr, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	static ::java::nio::DoubleBuffer* allocate(int32_t capacity);
	virtual $Object* array() override;
	virtual int32_t arrayOffset() override;
	virtual ::java::nio::DoubleBuffer* asReadOnlyBuffer() {return nullptr;}
	virtual $Object* base() override;
	virtual ::java::nio::DoubleBuffer* clear() override;
	virtual ::java::nio::DoubleBuffer* compact() {return nullptr;}
	static int32_t compare(double x, double y);
	virtual int32_t compareTo(::java::nio::DoubleBuffer* that);
	virtual int32_t compareTo(Object$* that) override;
	virtual bool equals(Object$* ob) override;
	virtual ::java::nio::DoubleBuffer* flip() override;
	virtual double get() {return 0.0;}
	virtual double get(int32_t index) {return 0.0;}
	virtual ::java::nio::DoubleBuffer* get($doubles* dst, int32_t offset, int32_t length);
	virtual ::java::nio::DoubleBuffer* get($doubles* dst);
	virtual ::java::nio::DoubleBuffer* get(int32_t index, $doubles* dst, int32_t offset, int32_t length);
	virtual ::java::nio::DoubleBuffer* get(int32_t index, $doubles* dst);
	::java::nio::DoubleBuffer* getArray(int32_t index, $doubles* dst, int32_t offset, int32_t length);
	virtual bool hasArray() override;
	virtual int32_t hashCode() override;
	virtual ::java::nio::DoubleBuffer* limit(int32_t newLimit) override;
	virtual ::java::nio::DoubleBuffer* mark() override;
	virtual int32_t mismatch(::java::nio::DoubleBuffer* that);
	virtual ::java::nio::ByteOrder* order() {return nullptr;}
	using ::java::nio::Buffer::position;
	virtual ::java::nio::DoubleBuffer* position(int32_t newPosition) override;
	virtual ::java::nio::DoubleBuffer* put(double d) {return nullptr;}
	virtual ::java::nio::DoubleBuffer* put(int32_t index, double d) {return nullptr;}
	virtual ::java::nio::DoubleBuffer* put(::java::nio::DoubleBuffer* src);
	virtual ::java::nio::DoubleBuffer* put(int32_t index, ::java::nio::DoubleBuffer* src, int32_t offset, int32_t length);
	virtual ::java::nio::DoubleBuffer* put($doubles* src, int32_t offset, int32_t length);
	::java::nio::DoubleBuffer* put($doubles* src);
	virtual ::java::nio::DoubleBuffer* put(int32_t index, $doubles* src, int32_t offset, int32_t length);
	virtual ::java::nio::DoubleBuffer* put(int32_t index, $doubles* src);
	::java::nio::DoubleBuffer* putArray(int32_t index, $doubles* src, int32_t offset, int32_t length);
	virtual void putBuffer(int32_t pos, ::java::nio::DoubleBuffer* src, int32_t srcPos, int32_t n);
	virtual ::java::nio::DoubleBuffer* reset() override;
	virtual ::java::nio::DoubleBuffer* rewind() override;
	virtual ::java::nio::DoubleBuffer* slice() override {return nullptr;}
	virtual ::java::nio::DoubleBuffer* slice(int32_t index, int32_t length) override {return nullptr;}
	virtual $String* toString() override;
	static ::java::nio::DoubleBuffer* wrap($doubles* array, int32_t offset, int32_t length);
	static ::java::nio::DoubleBuffer* wrap($doubles* array);
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	$doubles* hb = nullptr;
	int32_t offset = 0;
	bool isReadOnly$ = false;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")

#endif // _java_nio_DoubleBuffer_h_