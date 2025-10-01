#ifndef _java_util_stream_FindOps$FindSink$OfRef_h_
#define _java_util_stream_FindOps$FindSink$OfRef_h_
//$ class java.util.stream.FindOps$FindSink$OfRef
//$ extends java.util.stream.FindOps$FindSink

#include <java/util/stream/FindOps$FindSink.h>

#pragma push_macro("OP_FIND_ANY")
#undef OP_FIND_ANY
#pragma push_macro("OP_FIND_FIRST")
#undef OP_FIND_FIRST

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

class FindOps$FindSink$OfRef : public ::java::util::stream::FindOps$FindSink {
	$class(FindOps$FindSink$OfRef, $PRELOAD, ::java::util::stream::FindOps$FindSink)
public:
	FindOps$FindSink$OfRef();
	using ::java::util::stream::FindOps$FindSink::accept;
	void init$();
	virtual $Object* get() override;
	static ::java::util::stream::TerminalOp* OP_FIND_FIRST;
	static ::java::util::stream::TerminalOp* OP_FIND_ANY;
};

		} // stream
	} // util
} // java

#pragma pop_macro("OP_FIND_ANY")
#pragma pop_macro("OP_FIND_FIRST")

#endif // _java_util_stream_FindOps$FindSink$OfRef_h_