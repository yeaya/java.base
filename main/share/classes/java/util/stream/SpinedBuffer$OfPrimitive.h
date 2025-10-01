#ifndef _java_util_stream_SpinedBuffer$OfPrimitive_h_
#define _java_util_stream_SpinedBuffer$OfPrimitive_h_
//$ class java.util.stream.SpinedBuffer$OfPrimitive
//$ extends java.util.stream.AbstractSpinedBuffer
//$ implements java.lang.Iterable

#include <java/lang/Array.h>
#include <java/lang/Iterable.h>
#include <java/util/stream/AbstractSpinedBuffer.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SpinedBuffer$OfPrimitive : public ::java::util::stream::AbstractSpinedBuffer, public ::java::lang::Iterable {
	$class(SpinedBuffer$OfPrimitive, $NO_CLASS_INIT, ::java::util::stream::AbstractSpinedBuffer, ::java::lang::Iterable)
public:
	SpinedBuffer$OfPrimitive();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t initialCapacity);
	void init$();
	virtual void arrayForEach(Object$* array, int32_t from, int32_t to, Object$* consumer) {}
	virtual int32_t arrayLength(Object$* array) {return 0;}
	virtual $Object* asPrimitiveArray();
	virtual int64_t capacity();
	virtual int32_t chunkFor(int64_t index);
	virtual void clear() override;
	virtual void copyInto(Object$* array, int32_t offset);
	void ensureCapacity(int64_t targetSize);
	virtual void forEach(::java::util::function::Consumer* consumer) override {}
	virtual void forEach(Object$* consumer);
	virtual void increaseCapacity();
	void inflateSpine();
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	virtual $Object* newArray(int32_t size) {return nullptr;}
	virtual $ObjectArray* newArrayArray(int32_t size) {return nullptr;}
	virtual void preAccept();
	virtual $String* toString() override;
	$Object* curChunk = nullptr;
	$ObjectArray* spine = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SpinedBuffer$OfPrimitive_h_