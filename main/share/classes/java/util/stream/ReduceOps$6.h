#ifndef _java_util_stream_ReduceOps$6_h_
#define _java_util_stream_ReduceOps$6_h_
//$ class java.util.stream.ReduceOps$6
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

class ReduceOps$6 : public ::java::util::stream::ReduceOps$ReduceOp {
	$class(ReduceOps$6, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$ReduceOp)
public:
	ReduceOps$6();
	void init$(::java::util::stream::StreamShape* shape, ::java::util::function::IntBinaryOperator* val$operator, int32_t val$identity);
	virtual ::java::util::stream::ReduceOps$AccumulatingSink* makeSink() override;
	int32_t val$identity = 0;
	::java::util::function::IntBinaryOperator* val$operator = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$6_h_