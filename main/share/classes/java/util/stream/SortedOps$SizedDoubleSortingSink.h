#ifndef _java_util_stream_SortedOps$SizedDoubleSortingSink_h_
#define _java_util_stream_SortedOps$SizedDoubleSortingSink_h_
//$ class java.util.stream.SortedOps$SizedDoubleSortingSink
//$ extends java.util.stream.SortedOps$AbstractDoubleSortingSink

#include <java/lang/Array.h>
#include <java/util/stream/SortedOps$AbstractDoubleSortingSink.h>

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

class SortedOps$SizedDoubleSortingSink : public ::java::util::stream::SortedOps$AbstractDoubleSortingSink {
	$class(SortedOps$SizedDoubleSortingSink, $NO_CLASS_INIT, ::java::util::stream::SortedOps$AbstractDoubleSortingSink)
public:
	SortedOps$SizedDoubleSortingSink();
	using ::java::util::stream::SortedOps$AbstractDoubleSortingSink::accept;
	using ::java::util::stream::SortedOps$AbstractDoubleSortingSink::andThen;
	void init$(::java::util::stream::Sink* downstream);
	virtual void accept(double t) override;
	virtual void begin(int64_t size) override;
	virtual void end() override;
	$doubles* array = nullptr;
	int32_t offset = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps$SizedDoubleSortingSink_h_