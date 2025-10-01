#ifndef _java_util_stream_StreamSpliterators$SliceSpliterator_h_
#define _java_util_stream_StreamSpliterators$SliceSpliterator_h_
//$ class java.util.stream.StreamSpliterators$SliceSpliterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$SliceSpliterator : public ::java::lang::Object {
	$class(StreamSpliterators$SliceSpliterator, 0, ::java::lang::Object)
public:
	StreamSpliterators$SliceSpliterator();
	void init$(::java::util::Spliterator* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence);
	virtual int32_t characteristics();
	virtual int64_t estimateSize();
	virtual ::java::util::Spliterator* makeSpliterator(::java::util::Spliterator* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) {return nullptr;}
	virtual ::java::util::Spliterator* trySplit();
	static bool $assertionsDisabled;
	int64_t sliceOrigin = 0;
	int64_t sliceFence = 0;
	::java::util::Spliterator* s = nullptr;
	int64_t index = 0;
	int64_t fence = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$SliceSpliterator_h_