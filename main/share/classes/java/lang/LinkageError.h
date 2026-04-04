#ifndef _java_lang_LinkageError_h_
#define _java_lang_LinkageError_h_
//$ class java.lang.LinkageError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace java {
	namespace lang {

class $export LinkageError : public ::java::lang::Error {
	$class(LinkageError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	LinkageError();
	void init$();
	void init$($String* s);
	void init$($String* s, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x31ad4b5534a84aba;
	LinkageError(const LinkageError& e);
	virtual void throw$() override;
	inline LinkageError* operator ->() const {
		return (LinkageError*)throwing$;
	}
	inline operator LinkageError*() const {
		return (LinkageError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_LinkageError_h_