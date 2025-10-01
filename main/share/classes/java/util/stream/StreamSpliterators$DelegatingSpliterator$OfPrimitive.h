#ifndef _java_util_stream_StreamSpliterators$DelegatingSpliterator$OfPrimitive_h_
#define _java_util_stream_StreamSpliterators$DelegatingSpliterator$OfPrimitive_h_
//$ class java.util.stream.StreamSpliterators$DelegatingSpliterator$OfPrimitive
//$ extends java.util.stream.StreamSpliterators$DelegatingSpliterator
//$ implements java.util.Spliterator$OfPrimitive

#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$DelegatingSpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$DelegatingSpliterator$OfPrimitive : public ::java::util::stream::StreamSpliterators$DelegatingSpliterator, public ::java::util::Spliterator$OfPrimitive {
	$class(StreamSpliterators$DelegatingSpliterator$OfPrimitive, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$DelegatingSpliterator, ::java::util::Spliterator$OfPrimitive)
public:
	StreamSpliterators$DelegatingSpliterator$OfPrimitive();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Comparator* getComparator() override;
	virtual int64_t getExactSizeIfKnown() override;
	virtual bool hasCharacteristics(int32_t characteristics) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::function::Supplier* supplier);
	virtual void forEachRemaining(Object$* consumer) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* consumer) override;
	virtual bool tryAdvance(Object$* consumer) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$DelegatingSpliterator$OfPrimitive_h_