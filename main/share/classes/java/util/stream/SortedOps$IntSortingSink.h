#ifndef _java_util_stream_SortedOps$IntSortingSink_h_
#define _java_util_stream_SortedOps$IntSortingSink_h_
//$ class java.util.stream.SortedOps$IntSortingSink
//$ extends java.util.stream.SortedOps$AbstractIntSortingSink

#include <java/util/stream/SortedOps$AbstractIntSortingSink.h>

namespace java {
	namespace util {
		namespace stream {
			class Sink;
			class SpinedBuffer$OfInt;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SortedOps$IntSortingSink : public ::java::util::stream::SortedOps$AbstractIntSortingSink {
	$class(SortedOps$IntSortingSink, $NO_CLASS_INIT, ::java::util::stream::SortedOps$AbstractIntSortingSink)
public:
	SortedOps$IntSortingSink();
	using ::java::util::stream::SortedOps$AbstractIntSortingSink::accept;
	using ::java::util::stream::SortedOps$AbstractIntSortingSink::andThen;
	void init$(::java::util::stream::Sink* sink);
	virtual void accept(int32_t t) override;
	virtual void begin(int64_t size) override;
	virtual void end() override;
	::java::util::stream::SpinedBuffer$OfInt* b = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps$IntSortingSink_h_