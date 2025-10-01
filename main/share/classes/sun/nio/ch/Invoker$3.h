#ifndef _sun_nio_ch_Invoker$3_h_
#define _sun_nio_ch_Invoker$3_h_
//$ class sun.nio.ch.Invoker$3
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

class Invoker$3 : public ::java::lang::Runnable {
	$class(Invoker$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Invoker$3();
	void init$(::java::nio::channels::CompletionHandler* val$handler, Object$* val$attachment, Object$* val$value, $Throwable* val$exc);
	virtual void run() override;
	$Throwable* val$exc = nullptr;
	$Object* val$value = nullptr;
	$Object* val$attachment = nullptr;
	::java::nio::channels::CompletionHandler* val$handler = nullptr;
};

		} // ch
	} // nio
} // sun

#endif // _sun_nio_ch_Invoker$3_h_