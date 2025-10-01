#ifndef _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator_h_
#define _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator_h_
//$ class java.util.stream.StreamSpliterators$UnorderedSliceSpliterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CHUNK_SIZE")
#undef CHUNK_SIZE

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicLong;
			}
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class StreamSpliterators$UnorderedSliceSpliterator$PermitStatus;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$UnorderedSliceSpliterator : public ::java::lang::Object {
	$class(StreamSpliterators$UnorderedSliceSpliterator, 0, ::java::lang::Object)
public:
	StreamSpliterators$UnorderedSliceSpliterator();
	void init$(::java::util::Spliterator* s, int64_t skip, int64_t limit);
	void init$(::java::util::Spliterator* s, ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator* parent);
	int64_t acquirePermits(int64_t numElements);
	int32_t characteristics();
	int64_t estimateSize();
	virtual ::java::util::Spliterator* makeSpliterator(::java::util::Spliterator* s) {return nullptr;}
	::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$PermitStatus* permitStatus();
	::java::util::Spliterator* trySplit();
	static bool $assertionsDisabled;
	static const int32_t CHUNK_SIZE = 128; // 1 << 7
	::java::util::Spliterator* s = nullptr;
	bool unlimited = false;
	int32_t chunkSize = 0;
	int64_t skipThreshold = 0;
	::java::util::concurrent::atomic::AtomicLong* permits = nullptr;
};

		} // stream
	} // util
} // java

#pragma pop_macro("CHUNK_SIZE")

#endif // _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator_h_