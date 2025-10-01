#ifndef _java_util_stream_FindOps_h_
#define _java_util_stream_FindOps_h_
//$ class java.util.stream.FindOps
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class FindOps : public ::java::lang::Object {
	$class(FindOps, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FindOps();
	void init$();
	static ::java::util::stream::TerminalOp* makeDouble(bool mustFindFirst);
	static ::java::util::stream::TerminalOp* makeInt(bool mustFindFirst);
	static ::java::util::stream::TerminalOp* makeLong(bool mustFindFirst);
	static ::java::util::stream::TerminalOp* makeRef(bool mustFindFirst);
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_FindOps_h_