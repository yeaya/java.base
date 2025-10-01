#ifndef _java_util_stream_SortedOps$AbstractDoubleSortingSink_h_
#define _java_util_stream_SortedOps$AbstractDoubleSortingSink_h_
//$ class java.util.stream.SortedOps$AbstractDoubleSortingSink
//$ extends java.util.stream.Sink$ChainedDouble

#include <java/util/stream/Sink$ChainedDouble.h>

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

class SortedOps$AbstractDoubleSortingSink : public ::java::util::stream::Sink$ChainedDouble {
	$class(SortedOps$AbstractDoubleSortingSink, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedDouble)
public:
	SortedOps$AbstractDoubleSortingSink();
	using ::java::util::stream::Sink$ChainedDouble::accept;
	using ::java::util::stream::Sink$ChainedDouble::andThen;
	void init$(::java::util::stream::Sink* downstream);
	virtual bool cancellationRequested() override;
	bool cancellationRequestedCalled = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps$AbstractDoubleSortingSink_h_