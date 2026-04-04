#ifndef _java_nio_file_ProviderMismatchException_h_
#define _java_nio_file_ProviderMismatchException_h_
//$ class java.nio.file.ProviderMismatchException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace java {
	namespace nio {
		namespace file {

class $import ProviderMismatchException : public ::java::lang::IllegalArgumentException {
	$class(ProviderMismatchException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	ProviderMismatchException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x45430d587bc7bdf2;
	ProviderMismatchException(const ProviderMismatchException& e);
	virtual void throw$() override;
	inline ProviderMismatchException* operator ->() const {
		return (ProviderMismatchException*)throwing$;
	}
	inline operator ProviderMismatchException*() const {
		return (ProviderMismatchException*)throwing$;
	}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_ProviderMismatchException_h_