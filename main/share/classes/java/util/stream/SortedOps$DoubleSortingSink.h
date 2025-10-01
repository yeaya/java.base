#ifndef _java_util_stream_SortedOps$DoubleSortingSink_h_
#define _java_util_stream_SortedOps$DoubleSortingSink_h_
//$ class java.util.stream.SortedOps$DoubleSortingSink
//$ extends java.util.stream.SortedOps$AbstractDoubleSortingSink

#include <java/util/stream/SortedOps$AbstractDoubleSortingSink.h>

namespace java {
	namespace util {
		namespace stream {
			class Sink;
			class SpinedBuffer$OfDouble;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SortedOps$DoubleSortingSink : public ::java::util::stream::SortedOps$AbstractDoubleSortingSink {
	$class(SortedOps$DoubleSortingSink, $NO_CLASS_INIT, ::java::util::stream::SortedOps$AbstractDoubleSortingSink)
public:
	SortedOps$DoubleSortingSink();
	using ::java::util::stream::SortedOps$AbstractDoubleSortingSink::accept;
	using ::java::util::stream::SortedOps$AbstractDoubleSortingSink::andThen;
	void init$(::java::util::stream::Sink* sink);
	virtual void accept(double t) override;
	virtual void begin(int64_t size) override;
	virtual void end() override;
	::java::util::stream::SpinedBuffer$OfDouble* b = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps$DoubleSortingSink_h_