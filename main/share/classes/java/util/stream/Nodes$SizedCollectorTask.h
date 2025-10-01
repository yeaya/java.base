#ifndef _java_util_stream_Nodes$SizedCollectorTask_h_
#define _java_util_stream_Nodes$SizedCollectorTask_h_
//$ class java.util.stream.Nodes$SizedCollectorTask
//$ extends java.util.concurrent.CountedCompleter
//$ implements java.util.stream.Sink

#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/stream/Sink.h>

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

class Nodes$SizedCollectorTask : public ::java::util::concurrent::CountedCompleter, public ::java::util::stream::Sink {
	$class(Nodes$SizedCollectorTask, 0, ::java::util::concurrent::CountedCompleter, ::java::util::stream::Sink)
public:
	Nodes$SizedCollectorTask();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::stream::Sink::accept;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Spliterator* spliterator, ::java::util::stream::PipelineHelper* helper, int32_t arrayLength);
	void init$(::java::util::stream::Nodes$SizedCollectorTask* parent, ::java::util::Spliterator* spliterator, int64_t offset, int64_t length, int32_t arrayLength);
	virtual void begin(int64_t size) override;
	virtual void compute() override;
	virtual ::java::util::stream::Nodes$SizedCollectorTask* makeChild(::java::util::Spliterator* spliterator, int64_t offset, int64_t size) {return nullptr;}
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	::java::util::Spliterator* spliterator = nullptr;
	::java::util::stream::PipelineHelper* helper = nullptr;
	int64_t targetSize = 0;
	int64_t offset = 0;
	int64_t length = 0;
	int32_t index = 0;
	int32_t fence = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$SizedCollectorTask_h_