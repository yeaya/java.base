#ifndef _java_util_stream_StreamSpliterators$InfiniteSupplyingSpliterator$OfRef_h_
#define _java_util_stream_StreamSpliterators$InfiniteSupplyingSpliterator$OfRef_h_
//$ class java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfRef
//$ extends java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator

#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Supplier;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$InfiniteSupplyingSpliterator$OfRef : public ::java::util::stream::StreamSpliterators$InfiniteSupplyingSpliterator {
	$class(StreamSpliterators$InfiniteSupplyingSpliterator$OfRef, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$InfiniteSupplyingSpliterator)
public:
	StreamSpliterators$InfiniteSupplyingSpliterator$OfRef();
	void init$(int64_t size, ::java::util::function::Supplier* s);
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::function::Supplier* s = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$InfiniteSupplyingSpliterator$OfRef_h_