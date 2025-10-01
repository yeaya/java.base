#ifndef _java_lang_module_InvalidModuleDescriptorException_h_
#define _java_lang_module_InvalidModuleDescriptorException_h_
//$ class java.lang.module.InvalidModuleDescriptorException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		namespace module {

class $export InvalidModuleDescriptorException : public ::java::lang::RuntimeException {
	$class(InvalidModuleDescriptorException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	InvalidModuleDescriptorException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x437E3BCA19D21D34;
	InvalidModuleDescriptorException(const InvalidModuleDescriptorException& e);
	InvalidModuleDescriptorException wrapper$();
	virtual void throwWrapper$() override;
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_InvalidModuleDescriptorException_h_