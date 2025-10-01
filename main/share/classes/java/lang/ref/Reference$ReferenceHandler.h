#ifndef _java_lang_ref_Reference$ReferenceHandler_h_
#define _java_lang_ref_Reference$ReferenceHandler_h_
//$ class java.lang.ref.Reference$ReferenceHandler
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace lang {
		class ThreadGroup;
	}
}

namespace java {
	namespace lang {
		namespace ref {

class Reference$ReferenceHandler : public ::java::lang::Thread {
	$class(Reference$ReferenceHandler, $PRELOAD, ::java::lang::Thread)
public:
	Reference$ReferenceHandler();
	void init$(::java::lang::ThreadGroup* g, $String* name);
	static void ensureClassInitialized($Class* clazz);
	virtual void run() override;
};

		} // ref
	} // lang
} // java

#endif // _java_lang_ref_Reference$ReferenceHandler_h_