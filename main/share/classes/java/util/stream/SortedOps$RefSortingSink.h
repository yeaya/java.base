#ifndef _java_util_stream_SortedOps$RefSortingSink_h_
#define _java_util_stream_SortedOps$RefSortingSink_h_
//$ class java.util.stream.SortedOps$RefSortingSink
//$ extends java.util.stream.SortedOps$AbstractRefSortingSink

#include <java/util/stream/SortedOps$AbstractRefSortingSink.h>

namespace java {
	namespace util {
		class ArrayList;
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

class SortedOps$RefSortingSink : public ::java::util::stream::SortedOps$AbstractRefSortingSink {
	$class(SortedOps$RefSortingSink, $NO_CLASS_INIT, ::java::util::stream::SortedOps$AbstractRefSortingSink)
public:
	SortedOps$RefSortingSink();
	using ::java::util::stream::SortedOps$AbstractRefSortingSink::accept;
	void init$(::java::util::stream::Sink* sink, ::java::util::Comparator* comparator);
	virtual void accept(Object$* t) override;
	virtual void begin(int64_t size) override;
	virtual void end() override;
	::java::util::ArrayList* list = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps$RefSortingSink_h_