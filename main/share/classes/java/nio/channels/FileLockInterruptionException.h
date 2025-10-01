#ifndef _java_nio_channels_FileLockInterruptionException_h_
#define _java_nio_channels_FileLockInterruptionException_h_
//$ class java.nio.channels.FileLockInterruptionException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export FileLockInterruptionException : public ::java::io::IOException {
	$class(FileLockInterruptionException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	FileLockInterruptionException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x6296C3B4D4B27ADF;
	FileLockInterruptionException(const FileLockInterruptionException& e);
	FileLockInterruptionException wrapper$();
	virtual void throwWrapper$() override;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_FileLockInterruptionException_h_