#ifndef _java_lang_EnumConstantNotPresentException_h_
#define _java_lang_EnumConstantNotPresentException_h_
//$ class java.lang.EnumConstantNotPresentException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {

class $import EnumConstantNotPresentException : public ::java::lang::RuntimeException {
	$class(EnumConstantNotPresentException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	EnumConstantNotPresentException();
	void init$($Class* enumType, $String* constantName);
	virtual $String* constantName();
	virtual $Class* enumType();
	static const int64_t serialVersionUID = (int64_t)0xac14bee1f53b226c;
	$Class* enumType$ = nullptr;
	$String* constantName$ = nullptr;
	EnumConstantNotPresentException(const EnumConstantNotPresentException& e);
	virtual void throw$() override;
	inline EnumConstantNotPresentException* operator ->() const {
		return (EnumConstantNotPresentException*)throwing$;
	}
	inline operator EnumConstantNotPresentException*() const {
		return (EnumConstantNotPresentException*)throwing$;
	}
};

	} // lang
} // java

#endif // _java_lang_EnumConstantNotPresentException_h_