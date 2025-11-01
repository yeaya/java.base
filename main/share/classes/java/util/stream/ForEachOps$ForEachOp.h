#ifndef _java_util_stream_ForEachOps$ForEachOp_h_
#define _java_util_stream_ForEachOps$ForEachOp_h_
//$ class java.util.stream.ForEachOps$ForEachOp
//$ extends java.util.stream.TerminalOp
//$ implements java.util.stream.TerminalSink

#include <java/util/stream/TerminalOp.h>
#include <java/util/stream/TerminalSink.h>

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

class ForEachOps$ForEachOp : public ::java::util::stream::TerminalOp, public ::java::util::stream::TerminalSink {
	$class(ForEachOps$ForEachOp, $NO_CLASS_INIT, ::java::util::stream::TerminalOp, ::java::util::stream::TerminalSink)
public:
	ForEachOps$ForEachOp();
	using ::java::util::stream::TerminalSink::accept;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool ordered);
	virtual $Object* evaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual $Object* evaluateSequential(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual $Object* get() override;
	virtual int32_t getOpFlags() override;
	virtual $String* toString() override;
	bool ordered = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ForEachOps$ForEachOp_h_