#ifndef _java_util_stream_SortedOps$SizedIntSortingSink_h_
#define _java_util_stream_SortedOps$SizedIntSortingSink_h_
//$ class java.util.stream.SortedOps$SizedIntSortingSink
//$ extends java.util.stream.SortedOps$AbstractIntSortingSink

#include <java/lang/Array.h>
#include <java/util/stream/SortedOps$AbstractIntSortingSink.h>

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

class SortedOps$SizedIntSortingSink : public ::java::util::stream::SortedOps$AbstractIntSortingSink {
	$class(SortedOps$SizedIntSortingSink, $NO_CLASS_INIT, ::java::util::stream::SortedOps$AbstractIntSortingSink)
public:
	SortedOps$SizedIntSortingSink();
	using ::java::util::stream::SortedOps$AbstractIntSortingSink::accept;
	using ::java::util::stream::SortedOps$AbstractIntSortingSink::andThen;
	void init$(::java::util::stream::Sink* downstream);
	virtual void accept(int32_t t) override;
	virtual void begin(int64_t size) override;
	virtual void end() override;
	$ints* array = nullptr;
	int32_t offset = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps$SizedIntSortingSink_h_