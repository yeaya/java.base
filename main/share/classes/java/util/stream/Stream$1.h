#ifndef _java_util_stream_Stream$1_h_
#define _java_util_stream_Stream$1_h_
//$ class java.util.stream.Stream$1
//$ extends java.util.Spliterators$AbstractSpliterator

#include <java/util/Spliterators$AbstractSpliterator.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class UnaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Stream$1 : public ::java::util::Spliterators$AbstractSpliterator {
	$class(Stream$1, $NO_CLASS_INIT, ::java::util::Spliterators$AbstractSpliterator)
public:
	Stream$1();
	void init$(int64_t est, int32_t additionalCharacteristics, ::java::util::function::UnaryOperator* val$f, Object$* val$seed);
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	$Object* val$seed = nullptr;
	::java::util::function::UnaryOperator* val$f = nullptr;
	$Object* prev = nullptr;
	bool started = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Stream$1_h_