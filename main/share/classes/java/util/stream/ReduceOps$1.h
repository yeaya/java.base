#ifndef _java_util_stream_ReduceOps$1_h_
#define _java_util_stream_ReduceOps$1_h_
//$ class java.util.stream.ReduceOps$1
//$ extends java.util.stream.ReduceOps$ReduceOp

#include <java/util/stream/ReduceOps$ReduceOp.h>

namespace java {
	namespace util {
		namespace function {
			class BiFunction;
			class BinaryOperator;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class ReduceOps$AccumulatingSink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$1 : public ::java::util::stream::ReduceOps$ReduceOp {
	$class(ReduceOps$1, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$ReduceOp)
public:
	ReduceOps$1();
	void init$(::java::util::stream::StreamShape* shape, ::java::util::function::BinaryOperator* val$combiner, ::java::util::function::BiFunction* val$reducer, Object$* val$seed);
	virtual ::java::util::stream::ReduceOps$AccumulatingSink* makeSink() override;
	$Object* val$seed = nullptr;
	::java::util::function::BiFunction* val$reducer = nullptr;
	::java::util::function::BinaryOperator* val$combiner = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$1_h_