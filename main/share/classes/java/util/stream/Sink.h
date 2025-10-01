#ifndef _java_util_stream_Sink_h_
#define _java_util_stream_Sink_h_
//$ interface java.util.stream.Sink
//$ extends java.util.function.Consumer

#include <java/util/function/Consumer.h>

namespace java {
	namespace util {
		namespace stream {

class Sink : public ::java::util::function::Consumer {
	$interface(Sink, $PRELOAD | $NO_CLASS_INIT, ::java::util::function::Consumer)
public:
	using ::java::util::function::Consumer::accept;
	virtual void accept(int32_t value);
	virtual void accept(int64_t value);
	virtual void accept(double value);
	virtual void begin(int64_t size);
	virtual bool cancellationRequested();
	virtual void end();
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Sink_h_