#ifndef _java_util_stream_Streams$ConcatSpliterator$OfPrimitive_h_
#define _java_util_stream_Streams$ConcatSpliterator$OfPrimitive_h_
//$ class java.util.stream.Streams$ConcatSpliterator$OfPrimitive
//$ extends java.util.stream.Streams$ConcatSpliterator
//$ implements java.util.Spliterator$OfPrimitive

#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/stream/Streams$ConcatSpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}

namespace java {
	namespace util {
		namespace stream {

class Streams$ConcatSpliterator$OfPrimitive : public ::java::util::stream::Streams$ConcatSpliterator, public ::java::util::Spliterator$OfPrimitive {
	$class(Streams$ConcatSpliterator$OfPrimitive, $NO_CLASS_INIT, ::java::util::stream::Streams$ConcatSpliterator, ::java::util::Spliterator$OfPrimitive)
public:
	Streams$ConcatSpliterator$OfPrimitive();
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
	void init$(::java::util::Spliterator$OfPrimitive* aSpliterator, ::java::util::Spliterator$OfPrimitive* bSpliterator);
	virtual void forEachRemaining(Object$* action) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* consumer) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Streams$ConcatSpliterator$OfPrimitive_h_