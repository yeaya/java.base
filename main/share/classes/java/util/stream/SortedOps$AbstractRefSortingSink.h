#ifndef _java_util_stream_SortedOps$AbstractRefSortingSink_h_
#define _java_util_stream_SortedOps$AbstractRefSortingSink_h_
//$ class java.util.stream.SortedOps$AbstractRefSortingSink
//$ extends java.util.stream.Sink$ChainedReference

#include <java/util/stream/Sink$ChainedReference.h>

namespace java {
	namespace util {
		class Comparator;
	}
}
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

class SortedOps$AbstractRefSortingSink : public ::java::util::stream::Sink$ChainedReference {
	$class(SortedOps$AbstractRefSortingSink, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedReference)
public:
	SortedOps$AbstractRefSortingSink();
	using ::java::util::stream::Sink$ChainedReference::accept;
	void init$(::java::util::stream::Sink* downstream, ::java::util::Comparator* comparator);
	virtual bool cancellationRequested() override;
	::java::util::Comparator* comparator = nullptr;
	bool cancellationRequestedCalled = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps$AbstractRefSortingSink_h_