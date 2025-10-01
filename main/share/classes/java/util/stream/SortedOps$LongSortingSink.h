#ifndef _java_util_stream_SortedOps$LongSortingSink_h_
#define _java_util_stream_SortedOps$LongSortingSink_h_
//$ class java.util.stream.SortedOps$LongSortingSink
//$ extends java.util.stream.SortedOps$AbstractLongSortingSink

#include <java/util/stream/SortedOps$AbstractLongSortingSink.h>

namespace java {
	namespace util {
		namespace stream {
			class Sink;
			class SpinedBuffer$OfLong;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SortedOps$LongSortingSink : public ::java::util::stream::SortedOps$AbstractLongSortingSink {
	$class(SortedOps$LongSortingSink, $NO_CLASS_INIT, ::java::util::stream::SortedOps$AbstractLongSortingSink)
public:
	SortedOps$LongSortingSink();
	using ::java::util::stream::SortedOps$AbstractLongSortingSink::accept;
	using ::java::util::stream::SortedOps$AbstractLongSortingSink::andThen;
	void init$(::java::util::stream::Sink* sink);
	virtual void accept(int64_t t) override;
	virtual void begin(int64_t size) override;
	virtual void end() override;
	::java::util::stream::SpinedBuffer$OfLong* b = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps$LongSortingSink_h_