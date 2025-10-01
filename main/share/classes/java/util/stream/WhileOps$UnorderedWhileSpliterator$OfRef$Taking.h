#ifndef _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfRef$Taking_h_
#define _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfRef$Taking_h_
//$ class java.util.stream.WhileOps$UnorderedWhileSpliterator$OfRef$Taking
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

class WhileOps$UnorderedWhileSpliterator$OfRef$Taking : public ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfRef {
	$class(WhileOps$UnorderedWhileSpliterator$OfRef$Taking, $NO_CLASS_INIT, ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfRef)
public:
	WhileOps$UnorderedWhileSpliterator$OfRef$Taking();
	void init$(::java::util::Spliterator* s, bool noSplitting, ::java::util::function::Predicate* p);
	void init$(::java::util::Spliterator* s, ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfRef$Taking* parent);
	virtual ::java::util::Spliterator* makeSpliterator(::java::util::Spliterator* s) override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfRef$Taking_h_