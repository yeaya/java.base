#ifndef _java_util_stream_ForEachOps_h_
#define _java_util_stream_ForEachOps_h_
//$ class java.util.stream.ForEachOps
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class DoubleConsumer;
			class IntConsumer;
			class LongConsumer;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class TerminalOp;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ForEachOps : public ::java::lang::Object {
	$class(ForEachOps, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ForEachOps();
	void init$();
	static ::java::util::stream::TerminalOp* makeDouble(::java::util::function::DoubleConsumer* action, bool ordered);
	static ::java::util::stream::TerminalOp* makeInt(::java::util::function::IntConsumer* action, bool ordered);
	static ::java::util::stream::TerminalOp* makeLong(::java::util::function::LongConsumer* action, bool ordered);
	static ::java::util::stream::TerminalOp* makeRef(::java::util::function::Consumer* action, bool ordered);
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ForEachOps_h_