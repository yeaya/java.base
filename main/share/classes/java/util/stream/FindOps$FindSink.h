#ifndef _java_util_stream_FindOps$FindSink_h_
#define _java_util_stream_FindOps$FindSink_h_
//$ class java.util.stream.FindOps$FindSink
//$ extends java.util.stream.TerminalSink

#include <java/util/stream/TerminalSink.h>

namespace java {
	namespace util {
		namespace stream {

class FindOps$FindSink : public ::java::util::stream::TerminalSink {
	$class(FindOps$FindSink, $PRELOAD | $NO_CLASS_INIT, ::java::util::stream::TerminalSink)
public:
	FindOps$FindSink();
	using ::java::util::stream::TerminalSink::accept;
	void init$();
	virtual void accept(Object$* value) override;
	virtual bool cancellationRequested() override;
	bool hasValue = false;
	$Object* value = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_FindOps$FindSink_h_