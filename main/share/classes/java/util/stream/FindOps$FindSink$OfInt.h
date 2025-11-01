#ifndef _java_util_stream_FindOps$FindSink$OfInt_h_
#define _java_util_stream_FindOps$FindSink$OfInt_h_
//$ class java.util.stream.FindOps$FindSink$OfInt
//$ extends java.util.stream.FindOps$FindSink
//$ implements java.util.stream.Sink$OfInt

#include <java/util/stream/FindOps$FindSink.h>
#include <java/util/stream/Sink$OfInt.h>

#pragma push_macro("OP_FIND_ANY")
#undef OP_FIND_ANY
#pragma push_macro("OP_FIND_FIRST")
#undef OP_FIND_FIRST

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class TerminalOp;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class FindOps$FindSink$OfInt : public ::java::util::stream::FindOps$FindSink, public ::java::util::stream::Sink$OfInt {
	$class(FindOps$FindSink$OfInt, 0, ::java::util::stream::FindOps$FindSink, ::java::util::stream::Sink$OfInt)
public:
	FindOps$FindSink$OfInt();
	using ::java::util::stream::Sink$OfInt::andThen;
	virtual void accept(Object$* value) override;
	virtual void accept(int64_t value) override;
	virtual void accept(double value) override;
	virtual ::java::util::function::Consumer* andThen(::java::util::function::Consumer* after) override;
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	virtual $Object* clone() override;
	virtual void end() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(int32_t value) override;
	virtual void accept(::java::lang::Integer* value) override;
	virtual $Object* get() override;
	virtual $String* toString() override;
	static ::java::util::stream::TerminalOp* OP_FIND_FIRST;
	static ::java::util::stream::TerminalOp* OP_FIND_ANY;
};

		} // stream
	} // util
} // java

#pragma pop_macro("OP_FIND_ANY")
#pragma pop_macro("OP_FIND_FIRST")

#endif // _java_util_stream_FindOps$FindSink$OfInt_h_