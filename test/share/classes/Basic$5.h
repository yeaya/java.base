#ifndef _Basic$5_h_
#define _Basic$5_h_
//$ class Basic$5
//$ extends java.nio.channels.CompletionHandler

#include <java/nio/channels/CompletionHandler.h>

namespace java {
	namespace lang {
		class Integer;
		class Throwable;
		class Void;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}

class Basic$5 : public ::java::nio::channels::CompletionHandler {
	$class(Basic$5, $NO_CLASS_INIT, ::java::nio::channels::CompletionHandler)
public:
	Basic$5();
	void init$(::java::util::concurrent::CountDownLatch* val$latch);
	virtual void completed(::java::lang::Integer* result, ::java::lang::Void* att);
	virtual void completed(Object$* result, Object$* att) override;
	virtual void failed($Throwable* exc, ::java::lang::Void* att);
	virtual void failed($Throwable* exc, Object$* att) override;
	::java::util::concurrent::CountDownLatch* val$latch = nullptr;
};

#endif // _Basic$5_h_