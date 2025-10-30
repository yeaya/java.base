#ifndef _java_nio_channels_OverlappingFileLockException_h_
#define _java_nio_channels_OverlappingFileLockException_h_
//$ class java.nio.channels.OverlappingFileLockException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $import OverlappingFileLockException : public ::java::lang::IllegalStateException {
	$class(OverlappingFileLockException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	OverlappingFileLockException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x1C6B4A4A35F15E11;
	OverlappingFileLockException(const OverlappingFileLockException& e);
	virtual void throw$() override;
	inline OverlappingFileLockException* operator ->() {
		return (OverlappingFileLockException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_OverlappingFileLockException_h_