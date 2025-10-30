#ifndef _java_lang_ArrayStoreException_h_
#define _java_lang_ArrayStoreException_h_
//$ class java.lang.ArrayStoreException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {

class $export ArrayStoreException : public ::java::lang::RuntimeException {
	$class(ArrayStoreException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ArrayStoreException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xC13DF09DBF50BEDF;
	ArrayStoreException(const ArrayStoreException& e);
	virtual void throw$() override;
	inline ArrayStoreException* operator ->() {
		return (ArrayStoreException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_ArrayStoreException_h_