#ifndef _java_util_stream_ReduceOps$7_h_
#define _java_util_stream_ReduceOps$7_h_
//$ class java.util.stream.ReduceOps$7
//$ extends java.util.stream.ReduceOps$ReduceOp

#include <java/util/stream/ReduceOps$ReduceOp.h>

namespace java {
	namespace util {
		namespace function {
			class IntBinaryOperator;
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

class ReduceOps$7 : public ::java::util::stream::ReduceOps$ReduceOp {
	$class(ReduceOps$7, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$ReduceOp)
public:
	ReduceOps$7();
	void init$(::java::util::stream::StreamShape* shape, ::java::util::function::IntBinaryOperator* val$operator);
	virtual ::java::util::stream::ReduceOps$AccumulatingSink* makeSink() override;
	::java::util::function::IntBinaryOperator* val$operator = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$7_h_