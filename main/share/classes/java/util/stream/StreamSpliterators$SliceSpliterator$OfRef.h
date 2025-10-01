#ifndef _java_util_stream_StreamSpliterators$SliceSpliterator$OfRef_h_
#define _java_util_stream_StreamSpliterators$SliceSpliterator$OfRef_h_
//$ class java.util.stream.StreamSpliterators$SliceSpliterator$OfRef
//$ extends java.util.stream.StreamSpliterators$SliceSpliterator
//$ implements java.util.Spliterator

#include <java/util/Spliterator.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator.h>

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

class StreamSpliterators$SliceSpliterator$OfRef : public ::java::util::stream::StreamSpliterators$SliceSpliterator, public ::java::util::Spliterator {
	$class(StreamSpliterators$SliceSpliterator$OfRef, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$SliceSpliterator, ::java::util::Spliterator)
public:
	StreamSpliterators$SliceSpliterator$OfRef();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Spliterator* s, int64_t sliceOrigin, int64_t sliceFence);
	void init$(::java::util::Spliterator* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	static void lambda$tryAdvance$0(Object$* e);
	virtual ::java::util::Spliterator* makeSpliterator(::java::util::Spliterator* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$SliceSpliterator$OfRef_h_