#ifndef _java_util_stream_Nodes$SizedCollectorTask$OfInt_h_
#define _java_util_stream_Nodes$SizedCollectorTask$OfInt_h_
//$ class java.util.stream.Nodes$SizedCollectorTask$OfInt
//$ extends java.util.stream.Nodes$SizedCollectorTask
//$ implements java.util.stream.Sink$OfInt

#include <java/lang/Array.h>
#include <java/util/stream/Nodes$SizedCollectorTask.h>
#include <java/util/stream/Sink$OfInt.h>

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

class Nodes$SizedCollectorTask$OfInt : public ::java::util::stream::Nodes$SizedCollectorTask, public ::java::util::stream::Sink$OfInt {
	$class(Nodes$SizedCollectorTask$OfInt, $NO_CLASS_INIT, ::java::util::stream::Nodes$SizedCollectorTask, ::java::util::stream::Sink$OfInt)
public:
	Nodes$SizedCollectorTask$OfInt();
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
	void init$(::java::util::Spliterator* spliterator, ::java::util::stream::PipelineHelper* helper, $ints* array);
	void init$(::java::util::stream::Nodes$SizedCollectorTask$OfInt* parent, ::java::util::Spliterator* spliterator, int64_t offset, int64_t length);
	virtual void accept(int32_t value) override;
	virtual ::java::util::stream::Nodes$SizedCollectorTask$OfInt* makeChild(::java::util::Spliterator* spliterator, int64_t offset, int64_t size) override;
	virtual $String* toString() override;
	$ints* array = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$SizedCollectorTask$OfInt_h_