#ifndef _java_util_stream_SortedOps$SizedRefSortingSink_h_
#define _java_util_stream_SortedOps$SizedRefSortingSink_h_
//$ class java.util.stream.SortedOps$SizedRefSortingSink
//$ extends java.util.stream.SortedOps$AbstractRefSortingSink

#include <java/lang/Array.h>
#include <java/util/stream/SortedOps$AbstractRefSortingSink.h>

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

class SortedOps$SizedRefSortingSink : public ::java::util::stream::SortedOps$AbstractRefSortingSink {
	$class(SortedOps$SizedRefSortingSink, $NO_CLASS_INIT, ::java::util::stream::SortedOps$AbstractRefSortingSink)
public:
	SortedOps$SizedRefSortingSink();
	using ::java::util::stream::SortedOps$AbstractRefSortingSink::accept;
	void init$(::java::util::stream::Sink* sink, ::java::util::Comparator* comparator);
	virtual void accept(Object$* t) override;
	virtual void begin(int64_t size) override;
	virtual void end() override;
	$ObjectArray* array = nullptr;
	int32_t offset = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps$SizedRefSortingSink_h_