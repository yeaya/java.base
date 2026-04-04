#ifndef _java_lang_ClassCircularityError_h_
#define _java_lang_ClassCircularityError_h_
//$ class java.lang.ClassCircularityError
//$ extends java.lang.LinkageError

#include <java/lang/LinkageError.h>

namespace java {
	namespace lang {

class $export ClassCircularityError : public ::java::lang::LinkageError {
	$class(ClassCircularityError, $NO_CLASS_INIT, ::java::lang::LinkageError)
public:
	ClassCircularityError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x0ea1d92582e610a9;
	ClassCircularityError(const ClassCircularityError& e);
	virtual void throw$() override;
	inline ClassCircularityError* operator ->() const {
		return (ClassCircularityError*)throwing$;
	}
	inline operator ClassCircularityError*() const {
		return (ClassCircularityError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_ClassCircularityError_h_