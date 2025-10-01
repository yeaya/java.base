#ifndef _java_lang_ProcessImpl$2_h_
#define _java_lang_ProcessImpl$2_h_
//$ class java.lang.ProcessImpl$2
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class ProcessImpl;
	}
}

namespace java {
	namespace lang {

class ProcessImpl$2 : public ::java::security::PrivilegedAction {
	$class(ProcessImpl$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ProcessImpl$2();
	void init$(::java::lang::ProcessImpl* this$0, $longs* val$stdHandles, bool val$forceNullOutputStream);
	virtual $Object* run() override;
	::java::lang::ProcessImpl* this$0 = nullptr;
	bool val$forceNullOutputStream = false;
	$longs* val$stdHandles = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ProcessImpl$2_h_