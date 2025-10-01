#ifndef _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfLong$Taking_h_
#define _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfLong$Taking_h_
//$ class java.util.stream.WhileOps$UnorderedWhileSpliterator$OfLong$Taking
//$ extends java.util.stream.WhileOps$UnorderedWhileSpliterator$OfLong

#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfLong.h>

namespace java {
	namespace util {
		class Spliterator;
		class Spliterator$OfLong;
	}
}
namespace java {
	namespace util {
		namespace function {
			class LongConsumer;
			class LongPredicate;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class WhileOps$UnorderedWhileSpliterator$OfLong$Taking : public ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfLong {
	$class(WhileOps$UnorderedWhileSpliterator$OfLong$Taking, $NO_CLASS_INIT, ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfLong)
public:
	WhileOps$UnorderedWhileSpliterator$OfLong$Taking();
	using ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfLong::forEachRemaining;
	void init$(::java::util::Spliterator$OfLong* s, bool noSplitting, ::java::util::function::LongPredicate* p);
	void init$(::java::util::Spliterator$OfLong* s, ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfLong* parent);
	::java::util::Spliterator$OfLong* makeSpliterator(::java::util::Spliterator$OfLong* s);
	virtual ::java::util::Spliterator* makeSpliterator(::java::util::Spliterator* s) override;
	using ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfLong::tryAdvance;
	virtual bool tryAdvance(::java::util::function::LongConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfLong$Taking_h_