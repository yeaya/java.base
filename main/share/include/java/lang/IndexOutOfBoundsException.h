#ifndef _java_lang_IndexOutOfBoundsException_h_
#define _java_lang_IndexOutOfBoundsException_h_
//$ class java.lang.IndexOutOfBoundsException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {

class $import IndexOutOfBoundsException : public ::java::lang::RuntimeException {
	$class(IndexOutOfBoundsException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	IndexOutOfBoundsException();
	void init$();
	void init$($String* s);
	void init$(int32_t index);
	void init$(int64_t index);
	static const int64_t serialVersionUID = (int64_t)0x033FC59FDAB42B27;
	IndexOutOfBoundsException(const IndexOutOfBoundsException& e);
	IndexOutOfBoundsException wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_IndexOutOfBoundsException_h_