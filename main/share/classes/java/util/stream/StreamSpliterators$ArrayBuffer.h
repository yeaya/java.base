#ifndef _java_util_stream_StreamSpliterators$ArrayBuffer_h_
#define _java_util_stream_StreamSpliterators$ArrayBuffer_h_
//$ class java.util.stream.StreamSpliterators$ArrayBuffer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$ArrayBuffer : public ::java::lang::Object {
	$class(StreamSpliterators$ArrayBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StreamSpliterators$ArrayBuffer();
	void init$();
	virtual void reset();
	int32_t index = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$ArrayBuffer_h_