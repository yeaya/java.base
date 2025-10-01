#ifndef _java_util_stream_WhileOps_h_
#define _java_util_stream_WhileOps_h_
//$ class java.util.stream.WhileOps
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DROP_FLAGS")
#undef DROP_FLAGS
#pragma push_macro("TAKE_FLAGS")
#undef TAKE_FLAGS

namespace java {
	namespace util {
		namespace function {
			class DoublePredicate;
			class IntPredicate;
			class LongPredicate;
			class Predicate;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class DoubleStream;
			class IntStream;
			class LongStream;
			class Stream;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class WhileOps : public ::java::lang::Object {
	$class(WhileOps, 0, ::java::lang::Object)
public:
	WhileOps();
	void init$();
	static ::java::util::stream::DoubleStream* makeDropWhileDouble(::java::util::stream::AbstractPipeline* upstream, ::java::util::function::DoublePredicate* predicate);
	static ::java::util::stream::IntStream* makeDropWhileInt(::java::util::stream::AbstractPipeline* upstream, ::java::util::function::IntPredicate* predicate);
	static ::java::util::stream::LongStream* makeDropWhileLong(::java::util::stream::AbstractPipeline* upstream, ::java::util::function::LongPredicate* predicate);
	static ::java::util::stream::Stream* makeDropWhileRef(::java::util::stream::AbstractPipeline* upstream, ::java::util::function::Predicate* predicate);
	static ::java::util::stream::DoubleStream* makeTakeWhileDouble(::java::util::stream::AbstractPipeline* upstream, ::java::util::function::DoublePredicate* predicate);
	static ::java::util::stream::IntStream* makeTakeWhileInt(::java::util::stream::AbstractPipeline* upstream, ::java::util::function::IntPredicate* predicate);
	static ::java::util::stream::LongStream* makeTakeWhileLong(::java::util::stream::AbstractPipeline* upstream, ::java::util::function::LongPredicate* predicate);
	static ::java::util::stream::Stream* makeTakeWhileRef(::java::util::stream::AbstractPipeline* upstream, ::java::util::function::Predicate* predicate);
	static int32_t TAKE_FLAGS;
	static int32_t DROP_FLAGS;
};

		} // stream
	} // util
} // java

#pragma pop_macro("DROP_FLAGS")
#pragma pop_macro("TAKE_FLAGS")

#endif // _java_util_stream_WhileOps_h_