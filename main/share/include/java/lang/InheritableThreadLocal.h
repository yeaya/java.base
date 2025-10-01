#ifndef _java_lang_InheritableThreadLocal_h_
#define _java_lang_InheritableThreadLocal_h_
//$ class java.lang.InheritableThreadLocal
//$ extends java.lang.ThreadLocal

#include <java/lang/ThreadLocal.h>

namespace java {
	namespace lang {
		class Thread;
		class ThreadLocal$ThreadLocalMap;
	}
}

namespace java {
	namespace lang {

class $import InheritableThreadLocal : public ::java::lang::ThreadLocal {
	$class(InheritableThreadLocal, $NO_CLASS_INIT, ::java::lang::ThreadLocal)
public:
	InheritableThreadLocal();
	void init$();
	virtual $Object* childValue(Object$* parentValue) override;
	virtual void createMap($Thread* t, Object$* firstValue) override;
	virtual ::java::lang::ThreadLocal$ThreadLocalMap* getMap($Thread* t) override;
};

	} // lang
} // java

#endif // _java_lang_InheritableThreadLocal_h_