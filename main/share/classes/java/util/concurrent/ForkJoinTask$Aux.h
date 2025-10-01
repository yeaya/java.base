#ifndef _java_util_concurrent_ForkJoinTask$Aux_h_
#define _java_util_concurrent_ForkJoinTask$Aux_h_
//$ class java.util.concurrent.ForkJoinTask$Aux
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NEXT")
#undef NEXT

namespace java {
	namespace lang {
		class Thread;
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class VarHandle;
		}
	}
}

namespace java {
	namespace util {
		namespace concurrent {

class $export ForkJoinTask$Aux : public ::java::lang::Object {
	$class(ForkJoinTask$Aux, 0, ::java::lang::Object)
public:
	ForkJoinTask$Aux();
	void init$($Thread* thread, $Throwable* ex);
	bool casNext(::java::util::concurrent::ForkJoinTask$Aux* c, ::java::util::concurrent::ForkJoinTask$Aux* v);
	$Thread* thread = nullptr;
	$Throwable* ex = nullptr;
	::java::util::concurrent::ForkJoinTask$Aux* next = nullptr;
	static ::java::lang::invoke::VarHandle* NEXT;
};

		} // concurrent
	} // util
} // java

#pragma pop_macro("NEXT")

#endif // _java_util_concurrent_ForkJoinTask$Aux_h_