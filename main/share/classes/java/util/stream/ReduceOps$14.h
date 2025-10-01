#ifndef _java_util_stream_ReduceOps$14_h_
#define _java_util_stream_ReduceOps$14_h_
//$ class java.util.stream.ReduceOps$14
//$ extends java.util.stream.ReduceOps$ReduceOp

#include <java/util/stream/ReduceOps$ReduceOp.h>

namespace java {
	namespace util {
		namespace function {
			class DoubleBinaryOperator;
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

class ReduceOps$14 : public ::java::util::stream::ReduceOps$ReduceOp {
	$class(ReduceOps$14, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$ReduceOp)
public:
	ReduceOps$14();
	void init$(::java::util::stream::StreamShape* shape, ::java::util::function::DoubleBinaryOperator* val$operator, double val$identity);
	virtual ::java::util::stream::ReduceOps$AccumulatingSink* makeSink() override;
	double val$identity = 0.0;
	::java::util::function::DoubleBinaryOperator* val$operator = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$14_h_