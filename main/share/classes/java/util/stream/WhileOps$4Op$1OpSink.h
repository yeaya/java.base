#ifndef _java_util_stream_WhileOps$4Op$1OpSink_h_
#define _java_util_stream_WhileOps$4Op$1OpSink_h_
//$ class java.util.stream.WhileOps$4Op$1OpSink
//$ extends java.util.stream.Sink$ChainedDouble
//$ implements java.util.stream.WhileOps$DropWhileSink

#include <java/util/stream/Sink$ChainedDouble.h>
#include <java/util/stream/WhileOps$DropWhileSink.h>

namespace java {
	namespace util {
		namespace stream {
			class Sink;
			class WhileOps$4Op;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class WhileOps$4Op$1OpSink : public ::java::util::stream::Sink$ChainedDouble, public ::java::util::stream::WhileOps$DropWhileSink {
	$class(WhileOps$4Op$1OpSink, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedDouble, ::java::util::stream::WhileOps$DropWhileSink)
public:
	WhileOps$4Op$1OpSink();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::stream::Sink$ChainedDouble::accept;
	using ::java::util::stream::Sink$ChainedDouble::andThen;
	virtual void accept(Object$* i) override;
	virtual void accept(int32_t value) override;
	virtual void accept(int64_t value) override;
	virtual ::java::util::function::Consumer* andThen(::java::util::function::Consumer* after) override;
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	virtual $Object* clone() override;
	virtual void end() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::stream::WhileOps$4Op* this$0, ::java::util::stream::Sink* val$sink, bool val$retainAndCountDroppedElements);
	virtual void accept(double t) override;
	virtual int64_t getDropCount() override;
	virtual $String* toString() override;
	::java::util::stream::WhileOps$4Op* this$0 = nullptr;
	bool val$retainAndCountDroppedElements = false;
	::java::util::stream::Sink* val$sink = nullptr;
	int64_t dropCount = 0;
	bool take = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$4Op$1OpSink_h_