#ifndef _java_util_stream_SortedOps$AbstractLongSortingSink_h_
#define _java_util_stream_SortedOps$AbstractLongSortingSink_h_
//$ class java.util.stream.SortedOps$AbstractLongSortingSink
//$ extends java.util.stream.Sink$ChainedLong

#include <java/util/stream/Sink$ChainedLong.h>

namespace java {
	namespace util {
		namespace stream {
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SortedOps$AbstractLongSortingSink : public ::java::util::stream::Sink$ChainedLong {
	$class(SortedOps$AbstractLongSortingSink, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedLong)
public:
	SortedOps$AbstractLongSortingSink();
	using ::java::util::stream::Sink$ChainedLong::accept;
	using ::java::util::stream::Sink$ChainedLong::andThen;
	void init$(::java::util::stream::Sink* downstream);
	virtual bool cancellationRequested() override;
	bool cancellationRequestedCalled = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps$AbstractLongSortingSink_h_