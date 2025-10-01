#ifndef _java_util_stream_ReduceOps$10_h_
#define _java_util_stream_ReduceOps$10_h_
//$ class java.util.stream.ReduceOps$10
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

class ReduceOps$10 : public ::java::util::stream::ReduceOps$ReduceOp {
	$class(ReduceOps$10, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$ReduceOp)
public:
	ReduceOps$10();
	void init$(::java::util::stream::StreamShape* shape, ::java::util::function::LongBinaryOperator* val$operator, int64_t val$identity);
	virtual ::java::util::stream::ReduceOps$AccumulatingSink* makeSink() override;
	int64_t val$identity = 0;
	::java::util::function::LongBinaryOperator* val$operator = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$10_h_