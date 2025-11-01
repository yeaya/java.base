#ifndef _java_util_stream_ForEachOps$ForEachOp$OfDouble_h_
#define _java_util_stream_ForEachOps$ForEachOp$OfDouble_h_
//$ class java.util.stream.ForEachOps$ForEachOp$OfDouble
//$ extends java.util.stream.ForEachOps$ForEachOp
//$ implements java.util.stream.Sink$OfDouble

#include <java/util/stream/ForEachOps$ForEachOp.h>
#include <java/util/stream/Sink$OfDouble.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class DoubleConsumer;
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

class ForEachOps$ForEachOp$OfDouble : public ::java::util::stream::ForEachOps$ForEachOp, public ::java::util::stream::Sink$OfDouble {
	$class(ForEachOps$ForEachOp$OfDouble, $NO_CLASS_INIT, ::java::util::stream::ForEachOps$ForEachOp, ::java::util::stream::Sink$OfDouble)
public:
	ForEachOps$ForEachOp$OfDouble();
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
	void init$(::java::util::function::DoubleConsumer* consumer, bool ordered);
	virtual void accept(double t) override;
	virtual $Object* evaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual $Object* evaluateSequential(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual $Object* get() override;
	virtual ::java::util::stream::StreamShape* inputShape() override;
	virtual $String* toString() override;
	::java::util::function::DoubleConsumer* consumer = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ForEachOps$ForEachOp$OfDouble_h_