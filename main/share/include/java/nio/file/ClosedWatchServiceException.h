#ifndef _java_nio_file_ClosedWatchServiceException_h_
#define _java_nio_file_ClosedWatchServiceException_h_
//$ class java.nio.file.ClosedWatchServiceException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace file {

class $import ClosedWatchServiceException : public ::java::lang::IllegalStateException {
	$class(ClosedWatchServiceException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	ClosedWatchServiceException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x19B85F83C6168324;
	ClosedWatchServiceException(const ClosedWatchServiceException& e);
	virtual void throw$() override;
	inline ClosedWatchServiceException* operator ->() {
		return (ClosedWatchServiceException*)throwing$;
	}
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_ClosedWatchServiceException_h_