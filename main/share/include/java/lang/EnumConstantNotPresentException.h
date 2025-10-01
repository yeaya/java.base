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
	static const int64_t serialVersionUID = (int64_t)0xAC14BEE1F53B226C;
	$Class* enumType$ = nullptr;
	$String* constantName$ = nullptr;
	EnumConstantNotPresentException(const EnumConstantNotPresentException& e);
	EnumConstantNotPresentException wrapper$();
	virtual void throwWrapper$() override;
};

	} // lang
} // java

#endif // _java_lang_EnumConstantNotPresentException_h_