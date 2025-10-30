#ifndef _java_lang_module_InvalidModuleDescriptorException_h_
#define _java_lang_module_InvalidModuleDescriptorException_h_
//$ class java.lang.module.InvalidModuleDescriptorException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		namespace module {

class $import InvalidModuleDescriptorException : public ::java::lang::RuntimeException {
	$class(InvalidModuleDescriptorException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	InvalidModuleDescriptorException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x437E3BCA19D21D34;
	InvalidModuleDescriptorException(const InvalidModuleDescriptorException& e);
	virtual void throw$() override;
	inline InvalidModuleDescriptorException* operator ->() {
		return (InvalidModuleDescriptorException*)throwing$;
	}
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_InvalidModuleDescriptorException_h_