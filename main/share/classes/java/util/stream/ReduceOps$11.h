#ifndef _java_util_stream_ReduceOps$11_h_
#define _java_util_stream_ReduceOps$11_h_
//$ class java.util.stream.ReduceOps$11
//$ extends java.util.stream.ReduceOps$ReduceOp

#include <java/util/stream/ReduceOps$ReduceOp.h>

namespace java {
	namespace util {
		namespace function {
			class LongBinaryOperator;
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

class ReduceOps$11 : public ::java::util::stream::ReduceOps$ReduceOp {
	$class(ReduceOps$11, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$ReduceOp)
public:
	ReduceOps$11();
	void init$(::java::util::stream::StreamShape* shape, ::java::util::function::LongBinaryOperator* val$operator);
	virtual ::java::util::stream::ReduceOps$AccumulatingSink* makeSink() override;
	::java::util::function::LongBinaryOperator* val$operator = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$11_h_