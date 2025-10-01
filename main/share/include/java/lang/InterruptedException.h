#ifndef _java_lang_InterruptedException_h_
#define _java_lang_InterruptedException_h_
//$ class java.lang.InterruptedException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace lang {

class $import InterruptedException : public ::java::lang::Exception {
	$class(InterruptedException, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Exception)
public:
	InterruptedException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x5CFDA8C301DEB7F9;
	InterruptedException(const InterruptedException& e);
	InterruptedException wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_InterruptedException_h_