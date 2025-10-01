#ifndef _java_util_stream_StreamSpliterators$InfiniteSupplyingSpliterator_h_
#define _java_util_stream_StreamSpliterators$InfiniteSupplyingSpliterator_h_
//$ class java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$InfiniteSupplyingSpliterator : public ::java::util::Spliterator {
	$class(StreamSpliterators$InfiniteSupplyingSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	StreamSpliterators$InfiniteSupplyingSpliterator();
	void init$(int64_t estimate);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	int64_t estimate = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$InfiniteSupplyingSpliterator_h_