#ifndef _java_nio_channels_WritePendingException_h_
#define _java_nio_channels_WritePendingException_h_
//$ class java.nio.channels.WritePendingException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export WritePendingException : public ::java::lang::IllegalStateException {
	$class(WritePendingException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	WritePendingException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x61963A2E6D864A94;
	WritePendingException(const WritePendingException& e);
	WritePendingException wrapper$();
	virtual void throwWrapper$() override;
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_WritePendingException_h_