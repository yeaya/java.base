#ifndef _java_lang_IllegalMonitorStateException_h_
#define _java_lang_IllegalMonitorStateException_h_
//$ class java.lang.IllegalMonitorStateException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {

class $export IllegalMonitorStateException : public ::java::lang::RuntimeException {
	$class(IllegalMonitorStateException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	IllegalMonitorStateException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x33885078182CED4D;
	IllegalMonitorStateException(const IllegalMonitorStateException& e);
	IllegalMonitorStateException wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_IllegalMonitorStateException_h_