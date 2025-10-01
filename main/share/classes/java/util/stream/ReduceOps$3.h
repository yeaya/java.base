#ifndef _java_util_stream_ReduceOps$3_h_
#define _java_util_stream_ReduceOps$3_h_
//$ class java.util.stream.ReduceOps$3
//$ extends java.util.stream.ReduceOps$ReduceOp

#include <java/util/stream/ReduceOps$ReduceOp.h>

namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BinaryOperator;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Collector;
			class ReduceOps$AccumulatingSink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$3 : public ::java::util::stream::ReduceOps$ReduceOp {
	$class(ReduceOps$3, $PRELOAD | $NO_CLASS_INIT, ::java::util::stream::ReduceOps$ReduceOp)
public:
	ReduceOps$3();
	void init$(::java::util::stream::StreamShape* shape, ::java::util::function::BinaryOperator* val$combiner, ::java::util::function::BiConsumer* val$accumulator, ::java::util::function::Supplier* val$supplier, ::java::util::stream::Collector* val$collector);
	virtual int32_t getOpFlags() override;
	virtual ::java::util::stream::ReduceOps$AccumulatingSink* makeSink() override;
	::java::util::stream::Collector* val$collector = nullptr;
	::java::util::function::Supplier* val$supplier = nullptr;
	::java::util::function::BiConsumer* val$accumulator = nullptr;
	::java::util::function::BinaryOperator* val$combiner = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$3_h_