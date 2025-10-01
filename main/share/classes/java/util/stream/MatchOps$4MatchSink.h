#ifndef _java_util_stream_MatchOps$4MatchSink_h_
#define _java_util_stream_MatchOps$4MatchSink_h_
//$ class java.util.stream.MatchOps$4MatchSink
//$ extends java.util.stream.MatchOps$BooleanTerminalSink
//$ implements java.util.stream.Sink$OfDouble

#include <java/util/stream/MatchOps$BooleanTerminalSink.h>
#include <java/util/stream/Sink$OfDouble.h>

namespace java {
	namespace util {
		namespace function {
			class DoublePredicate;
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

class MatchOps$4MatchSink : public ::java::util::stream::MatchOps$BooleanTerminalSink, public ::java::util::stream::Sink$OfDouble {
	$class(MatchOps$4MatchSink, $NO_CLASS_INIT, ::java::util::stream::MatchOps$BooleanTerminalSink, ::java::util::stream::Sink$OfDouble)
public:
	MatchOps$4MatchSink();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::stream::Sink$OfDouble::accept;
	using ::java::util::stream::Sink$OfDouble::andThen;
	virtual void accept(int32_t value) override;
	virtual void accept(int64_t value) override;
	virtual void accept(Object$* t) override;
	virtual ::java::util::function::Consumer* andThen(::java::util::function::Consumer* after) override;
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	virtual $Object* clone() override;
	virtual void end() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::stream::MatchOps$MatchKind* val$matchKind, ::java::util::function::DoublePredicate* val$predicate);
	virtual void accept(double t) override;
	virtual $String* toString() override;
	::java::util::function::DoublePredicate* val$predicate = nullptr;
	::java::util::stream::MatchOps$MatchKind* val$matchKind = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_MatchOps$4MatchSink_h_