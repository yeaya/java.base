#ifndef _java_util_stream_ForEachOps$ForEachOp$OfInt_h_
#define _java_util_stream_ForEachOps$ForEachOp$OfInt_h_
//$ class java.util.stream.ForEachOps$ForEachOp$OfInt
//$ extends java.util.stream.ForEachOps$ForEachOp
//$ implements java.util.stream.Sink$OfInt

#include <java/util/stream/ForEachOps$ForEachOp.h>
#include <java/util/stream/Sink$OfInt.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
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

class ForEachOps$ForEachOp$OfInt : public ::java::util::stream::ForEachOps$ForEachOp, public ::java::util::stream::Sink$OfInt {
	$class(ForEachOps$ForEachOp$OfInt, $NO_CLASS_INIT, ::java::util::stream::ForEachOps$ForEachOp, ::java::util::stream::Sink$OfInt)
public:
	ForEachOps$ForEachOp$OfInt();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::stream::Sink$OfInt::accept;
	using ::java::util::stream::Sink$OfInt::andThen;
	virtual void accept(int64_t value) override;
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
	void init$(::java::util::function::IntConsumer* consumer, bool ordered);
	virtual void accept(int32_t t) override;
	virtual $Object* evaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual $Object* evaluateSequential(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual $Object* get() override;
	virtual ::java::util::stream::StreamShape* inputShape() override;
	virtual $String* toString() override;
	::java::util::function::IntConsumer* consumer = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ForEachOps$ForEachOp$OfInt_h_