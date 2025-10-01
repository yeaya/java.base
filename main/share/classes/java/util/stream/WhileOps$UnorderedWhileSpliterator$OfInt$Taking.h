#ifndef _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfInt$Taking_h_
#define _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfInt$Taking_h_
//$ class java.util.stream.WhileOps$UnorderedWhileSpliterator$OfInt$Taking
//$ extends java.util.stream.WhileOps$UnorderedWhileSpliterator$OfInt

#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfInt.h>

namespace java {
	namespace util {
		class Spliterator;
		class Spliterator$OfInt;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
			class IntPredicate;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class WhileOps$UnorderedWhileSpliterator$OfInt$Taking : public ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfInt {
	$class(WhileOps$UnorderedWhileSpliterator$OfInt$Taking, $NO_CLASS_INIT, ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfInt)
public:
	WhileOps$UnorderedWhileSpliterator$OfInt$Taking();
	using ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfInt::forEachRemaining;
	void init$(::java::util::Spliterator$OfInt* s, bool noSplitting, ::java::util::function::IntPredicate* p);
	void init$(::java::util::Spliterator$OfInt* s, ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfInt* parent);
	::java::util::Spliterator$OfInt* makeSpliterator(::java::util::Spliterator$OfInt* s);
	virtual ::java::util::Spliterator* makeSpliterator(::java::util::Spliterator* s) override;
	using ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfInt::tryAdvance;
	virtual bool tryAdvance(::java::util::function::IntConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfInt$Taking_h_