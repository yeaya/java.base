#ifndef _StressLoopback$Sink$1_h_
#define _StressLoopback$Sink$1_h_
//$ class StressLoopback$Sink$1
//$ extends java.nio.channels.CompletionHandler

#include <java/nio/channels/CompletionHandler.h>

class StressLoopback$Sink;
namespace java {
	namespace lang {
		class Integer;
		class Throwable;
		class Void;
	}
}

class StressLoopback$Sink$1 : public ::java::nio::channels::CompletionHandler {
	$class(StressLoopback$Sink$1, $NO_CLASS_INIT, ::java::nio::channels::CompletionHandler)
public:
	StressLoopback$Sink$1();
	void init$(::StressLoopback$Sink* this$0);
	virtual void completed(::java::lang::Integer* nread, ::java::lang::Void* att);
	virtual void completed(Object$* nread, Object$* att) override;
	virtual void failed($Throwable* exc, ::java::lang::Void* att);
	virtual void failed($Throwable* exc, Object$* att) override;
	::StressLoopback$Sink* this$0 = nullptr;
};

#endif // _StressLoopback$Sink$1_h_