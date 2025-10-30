#ifndef _java_nio_channels_ReadPendingException_h_
#define _java_nio_channels_ReadPendingException_h_
//$ class java.nio.channels.ReadPendingException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace nio {
		namespace channels {

class $export ReadPendingException : public ::java::lang::IllegalStateException {
	$class(ReadPendingException, $NO_CLASS_INIT, ::java::lang::IllegalStateException)
public:
	ReadPendingException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x1B90CF3056C08951;
	ReadPendingException(const ReadPendingException& e);
	virtual void throw$() override;
	inline ReadPendingException* operator ->() {
		return (ReadPendingException*)throwing$;
	}
};

		} // channels
	} // nio
} // java

#endif // _java_nio_channels_ReadPendingException_h_