#ifndef _java_util_stream_MatchOps$3MatchSink_h_
#define _java_util_stream_MatchOps$3MatchSink_h_
//$ class java.util.stream.MatchOps$3MatchSink
//$ extends java.util.stream.MatchOps$BooleanTerminalSink
//$ implements java.util.stream.Sink$OfLong

#include <java/util/stream/MatchOps$BooleanTerminalSink.h>
#include <java/util/stream/Sink$OfLong.h>

namespace java {
	namespace util {
		namespace function {
			class LongPredicate;
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

class MatchOps$3MatchSink : public ::java::util::stream::MatchOps$BooleanTerminalSink, public ::java::util::stream::Sink$OfLong {
	$class(MatchOps$3MatchSink, $NO_CLASS_INIT, ::java::util::stream::MatchOps$BooleanTerminalSink, ::java::util::stream::Sink$OfLong)
public:
	MatchOps$3MatchSink();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::stream::Sink$OfLong::accept;
	using ::java::util::stream::Sink$OfLong::andThen;
	virtual void accept(int32_t value) override;
	virtual void accept(double value) override;
	virtual void accept(Object$* t) override;
	virtual ::java::util::function::Consumer* andThen(::java::util::function::Consumer* after) override;
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	virtual $Object* clone() override;
	virtual void end() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::stream::MatchOps$MatchKind* val$matchKind, ::java::util::function::LongPredicate* val$predicate);
	virtual void accept(int64_t t) override;
	virtual $String* toString() override;
	::java::util::function::LongPredicate* val$predicate = nullptr;
	::java::util::stream::MatchOps$MatchKind* val$matchKind = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_MatchOps$3MatchSink_h_