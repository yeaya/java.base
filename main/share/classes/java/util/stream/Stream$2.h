#ifndef _java_util_stream_Stream$2_h_
#define _java_util_stream_Stream$2_h_
//$ class java.util.stream.Stream$2
//$ extends java.util.Spliterators$AbstractSpliterator

#include <java/util/Spliterators$AbstractSpliterator.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class Predicate;
			class UnaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Stream$2 : public ::java::util::Spliterators$AbstractSpliterator {
	$class(Stream$2, $NO_CLASS_INIT, ::java::util::Spliterators$AbstractSpliterator)
public:
	Stream$2();
	void init$(int64_t est, int32_t additionalCharacteristics, ::java::util::function::UnaryOperator* val$next, Object$* val$seed, ::java::util::function::Predicate* val$hasNext);
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	::java::util::function::Predicate* val$hasNext = nullptr;
	$Object* val$seed = nullptr;
	::java::util::function::UnaryOperator* val$next = nullptr;
	$Object* prev = nullptr;
	bool started = false;
	bool finished = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Stream$2_h_