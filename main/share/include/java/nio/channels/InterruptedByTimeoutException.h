#ifndef _java_nio_channels_InterruptedByTimeoutException_h_
#define _java_nio_channels_InterruptedByTimeoutException_h_
//$ class java.nio.channels.InterruptedByTimeoutException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace nio {
		namespace channels {

class $import InterruptedByTimeoutException : public ::java::io::IOException {
	$class(InterruptedByTimeoutException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	InterruptedByTimeoutException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xC4C4FCCA4E3EFEBD;
	InterruptedByTimeoutException(const InterruptedByTimeoutException& e);
	InterruptedByTimeoutException wrapper$();
	virtual void throwWrapper$() override;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_InterruptedByTimeoutException_h_