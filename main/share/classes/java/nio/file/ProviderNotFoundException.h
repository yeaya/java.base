#ifndef _java_nio_file_ProviderNotFoundException_h_
#define _java_nio_file_ProviderNotFoundException_h_
//$ class java.nio.file.ProviderNotFoundException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace nio {
		namespace file {

class $export ProviderNotFoundException : public ::java::lang::RuntimeException {
	$class(ProviderNotFoundException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	ProviderNotFoundException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xE5E8DA9542B6D95E;
	ProviderNotFoundException(const ProviderNotFoundException& e);
	ProviderNotFoundException wrapper$();
	virtual void throwWrapper$() override;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_ProviderNotFoundException_h_