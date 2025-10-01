#ifndef _java_util_stream_SortedOps$AbstractIntSortingSink_h_
#define _java_util_stream_SortedOps$AbstractIntSortingSink_h_
//$ class java.util.stream.SortedOps$AbstractIntSortingSink
//$ extends java.util.stream.Sink$ChainedInt

#include <java/util/stream/Sink$ChainedInt.h>

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

class SortedOps$AbstractIntSortingSink : public ::java::util::stream::Sink$ChainedInt {
	$class(SortedOps$AbstractIntSortingSink, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedInt)
public:
	SortedOps$AbstractIntSortingSink();
	using ::java::util::stream::Sink$ChainedInt::accept;
	using ::java::util::stream::Sink$ChainedInt::andThen;
	void init$(::java::util::stream::Sink* downstream);
	virtual bool cancellationRequested() override;
	bool cancellationRequestedCalled = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps$AbstractIntSortingSink_h_