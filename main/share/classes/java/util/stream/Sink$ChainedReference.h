#ifndef _java_util_stream_Sink$ChainedReference_h_
#define _java_util_stream_Sink$ChainedReference_h_
//$ class java.util.stream.Sink$ChainedReference
//$ extends java.util.stream.Sink

#include <java/util/stream/Sink.h>

namespace java {
	namespace util {
		namespace stream {

class Sink$ChainedReference : public ::java::util::stream::Sink {
	$class(Sink$ChainedReference, $PRELOAD | $NO_CLASS_INIT, ::java::util::stream::Sink)
public:
	Sink$ChainedReference();
	using ::java::util::stream::Sink::accept;
	void init$(::java::util::stream::Sink* downstream);
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	virtual void end() override;
	::java::util::stream::Sink* downstream = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Sink$ChainedReference_h_