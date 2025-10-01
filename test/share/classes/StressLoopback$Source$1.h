#ifndef _StressLoopback$Source$1_h_
#define _StressLoopback$Source$1_h_
//$ class StressLoopback$Source$1
//$ extends java.nio.channels.CompletionHandler

#include <java/nio/channels/CompletionHandler.h>

class StressLoopback$Source;
namespace java {
	namespace lang {
		class Integer;
		class Throwable;
		class Void;
	}
}

class StressLoopback$Source$1 : public ::java::nio::channels::CompletionHandler {
	$class(StressLoopback$Source$1, $NO_CLASS_INIT, ::java::nio::channels::CompletionHandler)
public:
	StressLoopback$Source$1();
	void init$(::StressLoopback$Source* this$0);
	virtual void completed(::java::lang::Integer* nwrote, ::java::lang::Void* att);
	virtual void completed(Object$* nwrote, Object$* att) override;
	virtual void failed($Throwable* exc, ::java::lang::Void* att);
	virtual void failed($Throwable* exc, Object$* att) override;
	::StressLoopback$Source* this$0 = nullptr;
};

#endif // _StressLoopback$Source$1_h_