#ifndef _java_util_stream_SortedOps$SizedLongSortingSink_h_
#define _java_util_stream_SortedOps$SizedLongSortingSink_h_
//$ class java.util.stream.SortedOps$SizedLongSortingSink
//$ extends java.util.stream.SortedOps$AbstractLongSortingSink

#include <java/lang/Array.h>
#include <java/util/stream/SortedOps$AbstractLongSortingSink.h>

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

class SortedOps$SizedLongSortingSink : public ::java::util::stream::SortedOps$AbstractLongSortingSink {
	$class(SortedOps$SizedLongSortingSink, $NO_CLASS_INIT, ::java::util::stream::SortedOps$AbstractLongSortingSink)
public:
	SortedOps$SizedLongSortingSink();
	using ::java::util::stream::SortedOps$AbstractLongSortingSink::accept;
	using ::java::util::stream::SortedOps$AbstractLongSortingSink::andThen;
	void init$(::java::util::stream::Sink* downstream);
	virtual void accept(int64_t t) override;
	virtual void begin(int64_t size) override;
	virtual void end() override;
	$longs* array = nullptr;
	int32_t offset = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps$SizedLongSortingSink_h_