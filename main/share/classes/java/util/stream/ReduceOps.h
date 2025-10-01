#ifndef _java_util_stream_ReduceOps_h_
#define _java_util_stream_ReduceOps_h_
//$ class java.util.stream.ReduceOps
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class BiFunction;
			class BinaryOperator;
			class DoubleBinaryOperator;
			class IntBinaryOperator;
			class LongBinaryOperator;
			class ObjDoubleConsumer;
			class ObjIntConsumer;
			class ObjLongConsumer;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Collector;
			class TerminalOp;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReduceOps : public ::java::lang::Object {
	$class(ReduceOps, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReduceOps();
	void init$();
	static ::java::util::stream::TerminalOp* makeDouble(double identity, ::java::util::function::DoubleBinaryOperator* operator$);
	static ::java::util::stream::TerminalOp* makeDouble(::java::util::function::DoubleBinaryOperator* operator$);
	static ::java::util::stream::TerminalOp* makeDouble(::java::util::function::Supplier* supplier, ::java::util::function::ObjDoubleConsumer* accumulator, ::java::util::function::BinaryOperator* combiner);
	static ::java::util::stream::TerminalOp* makeDoubleCounting();
	static ::java::util::stream::TerminalOp* makeInt(int32_t identity, ::java::util::function::IntBinaryOperator* operator$);
	static ::java::util::stream::TerminalOp* makeInt(::java::util::function::IntBinaryOperator* operator$);
	static ::java::util::stream::TerminalOp* makeInt(::java::util::function::Supplier* supplier, ::java::util::function::ObjIntConsumer* accumulator, ::java::util::function::BinaryOperator* combiner);
	static ::java::util::stream::TerminalOp* makeIntCounting();
	static ::java::util::stream::TerminalOp* makeLong(int64_t identity, ::java::util::function::LongBinaryOperator* operator$);
	static ::java::util::stream::TerminalOp* makeLong(::java::util::function::LongBinaryOperator* operator$);
	static ::java::util::stream::TerminalOp* makeLong(::java::util::function::Supplier* supplier, ::java::util::function::ObjLongConsumer* accumulator, ::java::util::function::BinaryOperator* combiner);
	static ::java::util::stream::TerminalOp* makeLongCounting();
	static ::java::util::stream::TerminalOp* makeRef(Object$* seed, ::java::util::function::BiFunction* reducer, ::java::util::function::BinaryOperator* combiner);
	static ::java::util::stream::TerminalOp* makeRef(::java::util::function::BinaryOperator* operator$);
	static ::java::util::stream::TerminalOp* makeRef(::java::util::stream::Collector* collector);
	static ::java::util::stream::TerminalOp* makeRef(::java::util::function::Supplier* seedFactory, ::java::util::function::BiConsumer* accumulator, ::java::util::function::BiConsumer* reducer);
	static ::java::util::stream::TerminalOp* makeRefCounting();
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps_h_