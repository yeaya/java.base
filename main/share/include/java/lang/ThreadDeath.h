#ifndef _java_lang_ThreadDeath_h_
#define _java_lang_ThreadDeath_h_
//$ class java.lang.ThreadDeath
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace java {
	namespace lang {

class $import ThreadDeath : public ::java::lang::Error {
	$class(ThreadDeath, $NO_CLASS_INIT, ::java::lang::Error)
public:
	ThreadDeath();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xC2B334F919F8CAF4;
	ThreadDeath(const ThreadDeath& e);
	ThreadDeath wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_ThreadDeath_h_