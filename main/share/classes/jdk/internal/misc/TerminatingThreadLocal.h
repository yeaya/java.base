#ifndef _jdk_internal_misc_TerminatingThreadLocal_h_
#define _jdk_internal_misc_TerminatingThreadLocal_h_
//$ class jdk.internal.misc.TerminatingThreadLocal
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

#pragma push_macro("REGISTRY")
#undef REGISTRY

namespace jdk {
	namespace internal {
		namespace misc {

class $export TerminatingThreadLocal : public ::java::lang::ThreadLocal {
	$class(TerminatingThreadLocal, $PRELOAD, ::java::lang::ThreadLocal)
public:
	TerminatingThreadLocal();
	void init$();
	void _threadTerminated();
	static void register$(::jdk::internal::misc::TerminatingThreadLocal* tl);
	virtual void remove() override;
	virtual void set(Object$* value) override;
	virtual void threadTerminated(Object$* value);
	static void threadTerminated();
	static void unregister(::jdk::internal::misc::TerminatingThreadLocal* tl);
	static ::java::lang::ThreadLocal* REGISTRY;
};

		} // misc
	} // internal
} // jdk

#pragma pop_macro("REGISTRY")

#endif // _jdk_internal_misc_TerminatingThreadLocal_h_