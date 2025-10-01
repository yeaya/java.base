#ifndef _java_util_stream_ReduceOps$12_h_
#define _java_util_stream_ReduceOps$12_h_
//$ class java.util.stream.ReduceOps$12
//$ extends java.util.stream.ReduceOps$ReduceOp

#include <java/util/stream/ReduceOps$ReduceOp.h>

namespace java {
	namespace util {
		namespace function {
			class BinaryOperator;
			class ObjLongConsumer;
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

class ReduceOps$12 : public ::java::util::stream::ReduceOps$ReduceOp {
	$class(ReduceOps$12, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$ReduceOp)
public:
	ReduceOps$12();
	void init$(::java::util::stream::StreamShape* shape, ::java::util::function::BinaryOperator* val$combiner, ::java::util::function::ObjLongConsumer* val$accumulator, ::java::util::function::Supplier* val$supplier);
	virtual ::java::util::stream::ReduceOps$AccumulatingSink* makeSink() override;
	::java::util::function::Supplier* val$supplier = nullptr;
	::java::util::function::ObjLongConsumer* val$accumulator = nullptr;
	::java::util::function::BinaryOperator* val$combiner = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$12_h_