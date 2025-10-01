#ifndef _java_util_stream_StreamSpliterators$ArrayBuffer$OfPrimitive_h_
#define _java_util_stream_StreamSpliterators$ArrayBuffer$OfPrimitive_h_
//$ class java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive
//$ extends java.util.stream.StreamSpliterators$ArrayBuffer

#include <java/util/stream/StreamSpliterators$ArrayBuffer.h>

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$ArrayBuffer$OfPrimitive : public ::java::util::stream::StreamSpliterators$ArrayBuffer {
	$class(StreamSpliterators$ArrayBuffer$OfPrimitive, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$ArrayBuffer)
public:
	StreamSpliterators$ArrayBuffer$OfPrimitive();
	void init$();
	virtual void forEach(Object$* action, int64_t fence) {}
	virtual void reset() override;
	int32_t index = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$ArrayBuffer$OfPrimitive_h_