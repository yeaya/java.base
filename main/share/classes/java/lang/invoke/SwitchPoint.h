#ifndef _java_lang_invoke_SwitchPoint_h_
#define _java_lang_invoke_SwitchPoint_h_
//$ class java.lang.invoke.SwitchPoint
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MutableCallSite;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $export SwitchPoint : public ::java::lang::Object {
	$class(SwitchPoint, 0, ::java::lang::Object)
public:
	SwitchPoint();
	void init$();
	virtual ::java::lang::invoke::MethodHandle* guardWithTest(::java::lang::invoke::MethodHandle* target, ::java::lang::invoke::MethodHandle* fallback);
	virtual bool hasBeenInvalidated();
	static void invalidateAll($Array<::java::lang::invoke::SwitchPoint>* switchPoints);
	static ::java::lang::invoke::MethodHandle* K_true;
	static ::java::lang::invoke::MethodHandle* K_false;
	::java::lang::invoke::MutableCallSite* mcs = nullptr;
	::java::lang::invoke::MethodHandle* mcsInvoker = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_SwitchPoint_h_