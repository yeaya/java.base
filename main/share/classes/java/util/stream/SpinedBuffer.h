#ifndef _java_util_stream_SpinedBuffer_h_
#define _java_util_stream_SpinedBuffer_h_
//$ class java.util.stream.SpinedBuffer
//$ extends java.util.stream.AbstractSpinedBuffer
//$ implements java.util.function.Consumer,java.lang.Iterable

#include <java/lang/Array.h>
#include <java/lang/Iterable.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/AbstractSpinedBuffer.h>

#pragma push_macro("SPLITERATOR_CHARACTERISTICS")
#undef SPLITERATOR_CHARACTERISTICS

namespace java {
	namespace util {
		class Iterator;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntFunction;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SpinedBuffer : public ::java::util::stream::AbstractSpinedBuffer, public ::java::util::function::Consumer, public ::java::lang::Iterable {
	$class(SpinedBuffer, $NO_CLASS_INIT, ::java::util::stream::AbstractSpinedBuffer, ::java::util::function::Consumer, ::java::lang::Iterable)
public:
	SpinedBuffer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t initialCapacity);
	void init$();
	virtual void accept(Object$* e) override;
	virtual $ObjectArray* asArray(::java::util::function::IntFunction* arrayFactory);
	virtual int64_t capacity();
	virtual void clear() override;
	virtual void copyInto($ObjectArray* array, int32_t offset);
	void ensureCapacity(int64_t targetSize);
	virtual void forEach(::java::util::function::Consumer* consumer) override;
	virtual $Object* get(int64_t index);
	virtual void increaseCapacity();
	void inflateSpine();
	virtual ::java::util::Iterator* iterator() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual $String* toString() override;
	$ObjectArray* curChunk = nullptr;
	$Array<::java::lang::Object, 2>* spine = nullptr;
	static const int32_t SPLITERATOR_CHARACTERISTICS = 16464; // Spliterator.SIZED | Spliterator.ORDERED | Spliterator.SUBSIZED
};

		} // stream
	} // util
} // java

#pragma pop_macro("SPLITERATOR_CHARACTERISTICS")

#endif // _java_util_stream_SpinedBuffer_h_