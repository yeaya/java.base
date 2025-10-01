#ifndef _java_util_stream_MatchOps$BooleanTerminalSink_h_
#define _java_util_stream_MatchOps$BooleanTerminalSink_h_
//$ class java.util.stream.MatchOps$BooleanTerminalSink
//$ extends java.util.stream.Sink

#include <java/util/stream/Sink.h>

namespace java {
	namespace util {
		namespace stream {
			class MatchOps$MatchKind;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class MatchOps$BooleanTerminalSink : public ::java::util::stream::Sink {
	$class(MatchOps$BooleanTerminalSink, $NO_CLASS_INIT, ::java::util::stream::Sink)
public:
	MatchOps$BooleanTerminalSink();
	using ::java::util::stream::Sink::accept;
	void init$(::java::util::stream::MatchOps$MatchKind* matchKind);
	virtual bool cancellationRequested() override;
	virtual bool getAndClearState();
	bool stop = false;
	bool value = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_MatchOps$BooleanTerminalSink_h_