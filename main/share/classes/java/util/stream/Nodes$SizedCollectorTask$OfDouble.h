#ifndef _java_util_stream_Nodes$SizedCollectorTask$OfDouble_h_
#define _java_util_stream_Nodes$SizedCollectorTask$OfDouble_h_
//$ class java.util.stream.Nodes$SizedCollectorTask$OfDouble
//$ extends java.util.stream.Nodes$SizedCollectorTask
//$ implements java.util.stream.Sink$OfDouble

#include <java/lang/Array.h>
#include <java/util/stream/Nodes$SizedCollectorTask.h>
#include <java/util/stream/Sink$OfDouble.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class PipelineHelper;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$SizedCollectorTask$OfDouble : public ::java::util::stream::Nodes$SizedCollectorTask, public ::java::util::stream::Sink$OfDouble {
	$class(Nodes$SizedCollectorTask$OfDouble, $NO_CLASS_INIT, ::java::util::stream::Nodes$SizedCollectorTask, ::java::util::stream::Sink$OfDouble)
public:
	Nodes$SizedCollectorTask$OfDouble();
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
	void init$(::java::util::Spliterator* spliterator, ::java::util::stream::PipelineHelper* helper, $doubles* array);
	void init$(::java::util::stream::Nodes$SizedCollectorTask$OfDouble* parent, ::java::util::Spliterator* spliterator, int64_t offset, int64_t length);
	virtual void accept(double value) override;
	virtual ::java::util::stream::Nodes$SizedCollectorTask$OfDouble* makeChild(::java::util::Spliterator* spliterator, int64_t offset, int64_t size) override;
	virtual $String* toString() override;
	$doubles* array = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$SizedCollectorTask$OfDouble_h_