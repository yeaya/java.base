#ifndef _java_util_stream_MatchOps_h_
#define _java_util_stream_MatchOps_h_
//$ class java.util.stream.MatchOps
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace function {
			class DoublePredicate;
			class IntPredicate;
			class LongPredicate;
			class Predicate;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class MatchOps$BooleanTerminalSink;
			class MatchOps$MatchKind;
			class TerminalOp;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class MatchOps : public ::java::lang::Object {
	$class(MatchOps, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MatchOps();
	void init$();
	static ::java::util::stream::MatchOps$BooleanTerminalSink* lambda$makeDouble$3(::java::util::stream::MatchOps$MatchKind* matchKind, ::java::util::function::DoublePredicate* predicate);
	static ::java::util::stream::MatchOps$BooleanTerminalSink* lambda$makeInt$1(::java::util::stream::MatchOps$MatchKind* matchKind, ::java::util::function::IntPredicate* predicate);
	static ::java::util::stream::MatchOps$BooleanTerminalSink* lambda$makeLong$2(::java::util::stream::MatchOps$MatchKind* matchKind, ::java::util::function::LongPredicate* predicate);
	static ::java::util::stream::MatchOps$BooleanTerminalSink* lambda$makeRef$0(::java::util::stream::MatchOps$MatchKind* matchKind, ::java::util::function::Predicate* predicate);
	static ::java::util::stream::TerminalOp* makeDouble(::java::util::function::DoublePredicate* predicate, ::java::util::stream::MatchOps$MatchKind* matchKind);
	static ::java::util::stream::TerminalOp* makeInt(::java::util::function::IntPredicate* predicate, ::java::util::stream::MatchOps$MatchKind* matchKind);
	static ::java::util::stream::TerminalOp* makeLong(::java::util::function::LongPredicate* predicate, ::java::util::stream::MatchOps$MatchKind* matchKind);
	static ::java::util::stream::TerminalOp* makeRef(::java::util::function::Predicate* predicate, ::java::util::stream::MatchOps$MatchKind* matchKind);
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_MatchOps_h_