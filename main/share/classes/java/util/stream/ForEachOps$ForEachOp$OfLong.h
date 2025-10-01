#ifndef _java_util_stream_ForEachOps$ForEachOp$OfLong_h_
#define _java_util_stream_ForEachOps$ForEachOp$OfLong_h_
//$ class java.util.stream.ForEachOps$ForEachOp$OfLong
//$ extends java.util.stream.ForEachOps$ForEachOp
//$ implements java.util.stream.Sink$OfLong

#include <java/util/stream/ForEachOps$ForEachOp.h>
#include <java/util/stream/Sink$OfLong.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class LongConsumer;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class PipelineHelper;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ForEachOps$ForEachOp$OfLong : public ::java::util::stream::ForEachOps$ForEachOp, public ::java::util::stream::Sink$OfLong {
	$class(ForEachOps$ForEachOp$OfLong, $NO_CLASS_INIT, ::java::util::stream::ForEachOps$ForEachOp, ::java::util::stream::Sink$OfLong)
public:
	ForEachOps$ForEachOp$OfLong();
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
	void init$(::java::util::function::LongConsumer* consumer, bool ordered);
	virtual void accept(int64_t t) override;
	virtual $Object* evaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual $Object* evaluateSequential(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual $Object* get() override;
	virtual ::java::util::stream::StreamShape* inputShape() override;
	virtual $String* toString() override;
	::java::util::function::LongConsumer* consumer = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ForEachOps$ForEachOp$OfLong_h_