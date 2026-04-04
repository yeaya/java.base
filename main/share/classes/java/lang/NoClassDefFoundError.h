#ifndef _java_lang_NoClassDefFoundError_h_
#define _java_lang_NoClassDefFoundError_h_
//$ class java.lang.NoClassDefFoundError
//$ extends java.lang.LinkageError

#include <java/lang/LinkageError.h>

namespace java {
	namespace lang {

class $export NoClassDefFoundError : public ::java::lang::LinkageError {
	$class(NoClassDefFoundError, $NO_CLASS_INIT, ::java::lang::LinkageError)
public:
	NoClassDefFoundError();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0x7e3afc5a8df49c6a;
	NoClassDefFoundError(const NoClassDefFoundError& e);
	virtual void throw$() override;
	inline NoClassDefFoundError* operator ->() const {
		return (NoClassDefFoundError*)throwing$;
	}
	inline operator NoClassDefFoundError*() const {
		return (NoClassDefFoundError*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_NoClassDefFoundError_h_