#ifndef _jdk_internal_misc_Signal_h_
#define _jdk_internal_misc_Signal_h_
//$ class jdk.internal.misc.Signal
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Signal$Handler;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace misc {

class $import Signal : public ::java::lang::Object {
	$class(Signal, $PRELOAD, ::java::lang::Object)
public:
	Signal();
	void init$($String* name);
	static void dispatch(int32_t number);
	virtual bool equals(Object$* obj) override;
	static int32_t findSignal0($String* sigName);
	$String* getName();
	int32_t getNumber();
	static ::jdk::internal::misc::Signal$Handler* handle(::jdk::internal::misc::Signal* sig, ::jdk::internal::misc::Signal$Handler* handler);
	static int64_t handle0(int32_t sig, int64_t nativeH);
	virtual int32_t hashCode() override;
	static void raise(::jdk::internal::misc::Signal* sig);
	static void raise0(int32_t sig);
	virtual $String* toString() override;
	static ::java::util::Hashtable* handlers;
	static ::java::util::Hashtable* signals;
	int32_t number = 0;
	$String* name = nullptr;
};

		} // misc
	} // internal
} // jdk

#endif // _jdk_internal_misc_Signal_h_