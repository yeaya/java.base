#ifndef _java_lang_NoClassDefFoundError_h_
#define _java_lang_NoClassDefFoundError_h_
//$ class java.lang.NoClassDefFoundError
//$ extends java.lang.LinkageError

#include <java/lang/LinkageError.h>

namespace java {
	namespace lang {

class $import NoClassDefFoundError : public ::java::lang::LinkageError {
	$class(NoClassDefFoundError, $NO_CLASS_INIT, ::java::lang::LinkageError)
public:
	NoClassDefFoundError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x7E3AFC5A8DF49C6A;
	NoClassDefFoundError(const NoClassDefFoundError& e);
	virtual void throw$() override;
	inline NoClassDefFoundError* operator ->() {
		return (NoClassDefFoundError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_NoClassDefFoundError_h_