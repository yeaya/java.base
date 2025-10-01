#ifndef _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping_h_
#define _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping_h_
//$ class java.util.stream.WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping
//$ extends java.util.stream.WhileOps$UnorderedWhileSpliterator$OfDouble

#include <java/util/stream/WhileOps$UnorderedWhileSpliterator$OfDouble.h>

namespace java {
	namespace util {
		class Spliterator;
		class Spliterator$OfDouble;
	}
}
namespace java {
	namespace util {
		namespace function {
			class DoubleConsumer;
			class DoublePredicate;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping : public ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfDouble {
	$class(WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping, $NO_CLASS_INIT, ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfDouble)
public:
	WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping();
	using ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfDouble::forEachRemaining;
	void init$(::java::util::Spliterator$OfDouble* s, bool noSplitting, ::java::util::function::DoublePredicate* p);
	void init$(::java::util::Spliterator$OfDouble* s, ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfDouble* parent);
	::java::util::Spliterator$OfDouble* makeSpliterator(::java::util::Spliterator$OfDouble* s);
	virtual ::java::util::Spliterator* makeSpliterator(::java::util::Spliterator* s) override;
	using ::java::util::stream::WhileOps$UnorderedWhileSpliterator$OfDouble::tryAdvance;
	virtual bool tryAdvance(::java::util::function::DoubleConsumer* action) override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$UnorderedWhileSpliterator$OfDouble$Dropping_h_