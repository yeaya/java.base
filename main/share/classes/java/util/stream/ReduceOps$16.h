#ifndef _java_util_stream_ReduceOps$16_h_
#define _java_util_stream_ReduceOps$16_h_
//$ class java.util.stream.ReduceOps$16
//$ extends java.util.stream.ReduceOps$ReduceOp

#include <java/util/stream/ReduceOps$ReduceOp.h>

namespace java {
	namespace util {
		namespace function {
			class BinaryOperator;
			class ObjDoubleConsumer;
			class Supplier;
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

class ReduceOps$16 : public ::java::util::stream::ReduceOps$ReduceOp {
	$class(ReduceOps$16, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$ReduceOp)
public:
	ReduceOps$16();
	void init$(::java::util::stream::StreamShape* shape, ::java::util::function::BinaryOperator* val$combiner, ::java::util::function::ObjDoubleConsumer* val$accumulator, ::java::util::function::Supplier* val$supplier);
	virtual ::java::util::stream::ReduceOps$AccumulatingSink* makeSink() override;
	::java::util::function::Supplier* val$supplier = nullptr;
	::java::util::function::ObjDoubleConsumer* val$accumulator = nullptr;
	::java::util::function::BinaryOperator* val$combiner = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$16_h_