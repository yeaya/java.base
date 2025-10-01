#ifndef _sun_nio_ch_Invoker$2_h_
#define _sun_nio_ch_Invoker$2_h_
//$ class sun.nio.ch.Invoker$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class CompletionHandler;
		}
	}
}

namespace sun {
	namespace nio {
		namespace ch {

class Invoker$2 : public ::java::lang::Runnable {
	$class(Invoker$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Invoker$2();
	void init$(::java::nio::channels::CompletionHandler* val$handler, Object$* val$attachment, Object$* val$result, $Throwable* val$exc);
	virtual void run() override;
	$Throwable* val$exc = nullptr;
	$Object* val$result = nullptr;
	$Object* val$attachment = nullptr;
	::java::nio::channels::CompletionHandler* val$handler = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Invoker$2_h_