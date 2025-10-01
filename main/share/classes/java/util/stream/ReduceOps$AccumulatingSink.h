#ifndef _java_util_stream_ReduceOps$AccumulatingSink_h_
#define _java_util_stream_ReduceOps$AccumulatingSink_h_
//$ interface java.util.stream.ReduceOps$AccumulatingSink
//$ extends java.util.stream.TerminalSink

#include <java/util/stream/TerminalSink.h>

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$AccumulatingSink : public ::java::util::stream::TerminalSink {
	$interface(ReduceOps$AccumulatingSink, $PRELOAD | $NO_CLASS_INIT, ::java::util::stream::TerminalSink)
public:
	using ::java::util::stream::TerminalSink::accept;
	virtual void combine(::java::util::stream::ReduceOps$AccumulatingSink* other) {}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$AccumulatingSink_h_