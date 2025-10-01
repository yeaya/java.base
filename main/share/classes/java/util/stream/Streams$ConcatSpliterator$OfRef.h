#ifndef _java_util_stream_Streams$ConcatSpliterator$OfRef_h_
#define _java_util_stream_Streams$ConcatSpliterator$OfRef_h_
//$ class java.util.stream.Streams$ConcatSpliterator$OfRef
//$ extends java.util.stream.Streams$ConcatSpliterator

#include <java/util/stream/Streams$ConcatSpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}

namespace java {
	namespace util {
		namespace stream {

class Streams$ConcatSpliterator$OfRef : public ::java::util::stream::Streams$ConcatSpliterator {
	$class(Streams$ConcatSpliterator$OfRef, $NO_CLASS_INIT, ::java::util::stream::Streams$ConcatSpliterator)
public:
	Streams$ConcatSpliterator$OfRef();
	void init$(::java::util::Spliterator* aSpliterator, ::java::util::Spliterator* bSpliterator);
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Streams$ConcatSpliterator$OfRef_h_