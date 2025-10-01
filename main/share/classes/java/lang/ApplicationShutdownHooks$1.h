#ifndef _java_lang_ApplicationShutdownHooks$1_h_
#define _java_lang_ApplicationShutdownHooks$1_h_
//$ class java.lang.ApplicationShutdownHooks$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {

class ApplicationShutdownHooks$1 : public ::java::lang::Runnable {
	$class(ApplicationShutdownHooks$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ApplicationShutdownHooks$1();
	void init$();
	virtual void run() override;
};

	} // lang
} // java

#endif // _java_lang_ApplicationShutdownHooks$1_h_