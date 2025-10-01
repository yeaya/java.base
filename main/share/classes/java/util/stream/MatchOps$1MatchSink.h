#ifndef _java_util_stream_MatchOps$1MatchSink_h_
#define _java_util_stream_MatchOps$1MatchSink_h_
//$ class java.util.stream.MatchOps$1MatchSink
//$ extends java.util.stream.MatchOps$BooleanTerminalSink

#include <java/util/stream/MatchOps$BooleanTerminalSink.h>

namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class MatchOps$MatchKind;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class MatchOps$1MatchSink : public ::java::util::stream::MatchOps$BooleanTerminalSink {
	$class(MatchOps$1MatchSink, $NO_CLASS_INIT, ::java::util::stream::MatchOps$BooleanTerminalSink)
public:
	MatchOps$1MatchSink();
	using ::java::util::stream::MatchOps$BooleanTerminalSink::accept;
	void init$(::java::util::stream::MatchOps$MatchKind* val$matchKind, ::java::util::function::Predicate* val$predicate);
	virtual void accept(Object$* t) override;
	::java::util::function::Predicate* val$predicate = nullptr;
	::java::util::stream::MatchOps$MatchKind* val$matchKind = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_MatchOps$1MatchSink_h_