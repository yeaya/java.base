#ifndef _java_util_stream_SpinedBuffer$OfDouble_h_
#define _java_util_stream_SpinedBuffer$OfDouble_h_
//$ class java.util.stream.SpinedBuffer$OfDouble
//$ extends java.util.stream.SpinedBuffer$OfPrimitive
//$ implements java.util.function.DoubleConsumer

#include <java/lang/Array.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/SpinedBuffer$OfPrimitive.h>

namespace java {
	namespace util {
		class Iterator;
		class Spliterator;
	}
}
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

class SpinedBuffer$OfDouble : public ::java::util::stream::SpinedBuffer$OfPrimitive, public ::java::util::function::DoubleConsumer {
	$class(SpinedBuffer$OfDouble, $NO_CLASS_INIT, ::java::util::stream::SpinedBuffer$OfPrimitive, ::java::util::function::DoubleConsumer)
public:
	SpinedBuffer$OfDouble();
	using ::java::util::stream::SpinedBuffer$OfPrimitive::forEach;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t initialCapacity);
	virtual void accept(double i) override;
	virtual void arrayForEach($doubles* array, int32_t from, int32_t to, ::java::util::function::DoubleConsumer* consumer);
	virtual void arrayForEach(Object$* array, int32_t from, int32_t to, Object$* consumer) override;
	virtual int32_t arrayLength($doubles* array);
	virtual int32_t arrayLength(Object$* array) override;
	virtual void forEach(::java::util::function::Consumer* consumer) override;
	virtual double get(int64_t index);
	virtual ::java::util::Iterator* iterator() override;
	virtual $Object* newArray(int32_t size) override;
	virtual $ObjectArray* newArrayArray(int32_t size) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual $String* toString() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SpinedBuffer$OfDouble_h_