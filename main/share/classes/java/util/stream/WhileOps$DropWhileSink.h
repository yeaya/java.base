#ifndef _java_util_stream_WhileOps$DropWhileSink_h_
#define _java_util_stream_WhileOps$DropWhileSink_h_
//$ interface java.util.stream.WhileOps$DropWhileSink
//$ extends java.util.stream.Sink

#include <java/util/stream/Sink.h>

namespace java {
	namespace util {
		namespace stream {

class WhileOps$DropWhileSink : public ::java::util::stream::Sink {
	$interface(WhileOps$DropWhileSink, $NO_CLASS_INIT, ::java::util::stream::Sink)
public:
	using ::java::util::stream::Sink::accept;
	virtual int64_t getDropCount() {return 0;}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$DropWhileSink_h_