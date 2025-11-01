#ifndef _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator$OfRef_h_
#define _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator$OfRef_h_
//$ class java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfRef
//$ extends java.util.stream.StreamSpliterators$UnorderedSliceSpliterator
//$ implements java.util.Spliterator,java.util.function.Consumer

#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator.h>

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$UnorderedSliceSpliterator$OfRef : public ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator, public ::java::util::Spliterator, public ::java::util::function::Consumer {
	$class(StreamSpliterators$UnorderedSliceSpliterator$OfRef, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator, ::java::util::Spliterator, ::java::util::function::Consumer)
public:
	StreamSpliterators$UnorderedSliceSpliterator$OfRef();
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Spliterator* s, int64_t skip, int64_t limit);
	void init$(::java::util::Spliterator* s, ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$OfRef* parent);
	virtual void accept(Object$* t) override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* makeSpliterator(::java::util::Spliterator* s) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	$Object* tmpSlot = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator$OfRef_h_