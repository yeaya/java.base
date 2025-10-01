#ifndef _java_nio_FloatBuffer_h_
#define _java_nio_FloatBuffer_h_
//$ class java.nio.FloatBuffer
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

class $export FloatBuffer : public ::java::nio::Buffer, public ::java::lang::Comparable {
	$class(FloatBuffer, 0, ::java::nio::Buffer, ::java::lang::Comparable)
public:
	FloatBuffer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::nio::Buffer::limit;
	virtual $Object* clone() override;
	virtual ::java::nio::FloatBuffer* duplicate() override {return nullptr;}
	virtual void finalize() override;
	virtual bool isDirect() override {return false;}
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, $floats* hb, int32_t offset, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	void init$($floats* hb, int64_t addr, int32_t cap, ::jdk::internal::access::foreign::MemorySegmentProxy* segment);
	static ::java::nio::FloatBuffer* allocate(int32_t capacity);
	virtual $Object* array() override;
	virtual int32_t arrayOffset() override;
	virtual ::java::nio::FloatBuffer* asReadOnlyBuffer() {return nullptr;}
	virtual $Object* base() override;
	virtual ::java::nio::FloatBuffer* clear() override;
	virtual ::java::nio::FloatBuffer* compact() {return nullptr;}
	static int32_t compare(float x, float y);
	virtual int32_t compareTo(::java::nio::FloatBuffer* that);
	virtual int32_t compareTo(Object$* that) override;
	virtual bool equals(Object$* ob) override;
	virtual ::java::nio::FloatBuffer* flip() override;
	virtual float get() {return 0.0;}
	virtual float get(int32_t index) {return 0.0;}
	virtual ::java::nio::FloatBuffer* get($floats* dst, int32_t offset, int32_t length);
	virtual ::java::nio::FloatBuffer* get($floats* dst);
	virtual ::java::nio::FloatBuffer* get(int32_t index, $floats* dst, int32_t offset, int32_t length);
	virtual ::java::nio::FloatBuffer* get(int32_t index, $floats* dst);
	::java::nio::FloatBuffer* getArray(int32_t index, $floats* dst, int32_t offset, int32_t length);
	virtual bool hasArray() override;
	virtual int32_t hashCode() override;
	virtual ::java::nio::FloatBuffer* limit(int32_t newLimit) override;
	virtual ::java::nio::FloatBuffer* mark() override;
	virtual int32_t mismatch(::java::nio::FloatBuffer* that);
	virtual ::java::nio::ByteOrder* order() {return nullptr;}
	using ::java::nio::Buffer::position;
	virtual ::java::nio::FloatBuffer* position(int32_t newPosition) override;
	virtual ::java::nio::FloatBuffer* put(float f) {return nullptr;}
	virtual ::java::nio::FloatBuffer* put(int32_t index, float f) {return nullptr;}
	virtual ::java::nio::FloatBuffer* put(::java::nio::FloatBuffer* src);
	virtual ::java::nio::FloatBuffer* put(int32_t index, ::java::nio::FloatBuffer* src, int32_t offset, int32_t length);
	virtual ::java::nio::FloatBuffer* put($floats* src, int32_t offset, int32_t length);
	::java::nio::FloatBuffer* put($floats* src);
	virtual ::java::nio::FloatBuffer* put(int32_t index, $floats* src, int32_t offset, int32_t length);
	virtual ::java::nio::FloatBuffer* put(int32_t index, $floats* src);
	::java::nio::FloatBuffer* putArray(int32_t index, $floats* src, int32_t offset, int32_t length);
	virtual void putBuffer(int32_t pos, ::java::nio::FloatBuffer* src, int32_t srcPos, int32_t n);
	virtual ::java::nio::FloatBuffer* reset() override;
	virtual ::java::nio::FloatBuffer* rewind() override;
	virtual ::java::nio::FloatBuffer* slice() override {return nullptr;}
	virtual ::java::nio::FloatBuffer* slice(int32_t index, int32_t length) override {return nullptr;}
	virtual $String* toString() override;
	static ::java::nio::FloatBuffer* wrap($floats* array, int32_t offset, int32_t length);
	static ::java::nio::FloatBuffer* wrap($floats* array);
	static bool $assertionsDisabled;
	static int64_t ARRAY_BASE_OFFSET;
	$floats* hb = nullptr;
	int32_t offset = 0;
	bool isReadOnly$ = false;
};

	} // nio
} // java

#pragma pop_macro("ARRAY_BASE_OFFSET")

#endif // _java_nio_FloatBuffer_h_