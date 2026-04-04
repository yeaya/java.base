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
	static const int64_t serialVersionUID = (int64_t)0xe5e8da9542b6d95e;
	ProviderNotFoundException(const ProviderNotFoundException& e);
	virtual void throw$() override;
	inline ProviderNotFoundException* operator ->() const {
		return (ProviderNotFoundException*)throwing$;
	}
	inline operator ProviderNotFoundException*() const {
		return (ProviderNotFoundException*)throwing$;
	}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_ProviderNotFoundException_h_