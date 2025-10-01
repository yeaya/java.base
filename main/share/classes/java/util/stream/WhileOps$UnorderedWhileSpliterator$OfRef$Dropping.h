#ifndef _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfRef$Dropping_h_
#define _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfRef$Dropping_h_
//$ class java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef$Dropping
//$ extends java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef

#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfRef.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Predicate;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class WhileOps$UnorderedWhileSpliterator$OfRef$Dropping : public ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfRef {
	$class(WhileOps$UnorderedWhileSpliterator$OfRef$Dropping, $NO_CLASS_INIT, ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfRef)
public:
	WhileOps$UnorderedWhileSpliterator$OfRef$Dropping();
	void init$(::java::util::Spliterator* s, bool noSplitting, ::java::util::function::Predicate* p);
	void init$(::java::util::Spliterator* s, ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfRef$Dropping* parent);
	virtual ::java::util::Spliterator* makeSpliterator(::java::util::Spliterator* s) override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfRef$Dropping_h_