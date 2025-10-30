#ifndef _java_net_UnknownServiceException_h_
#define _java_net_UnknownServiceException_h_
//$ class java.net.UnknownServiceException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace net {

class $import UnknownServiceException : public ::java::io::IOException {
	$class(UnknownServiceException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	UnknownServiceException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xC6249E5941493EAC;
	UnknownServiceException(const UnknownServiceException& e);
	virtual void throw$() override;
	inline UnknownServiceException* operator ->() {
		return (UnknownServiceException*)throwing$;
	}
};

	} // net
} // java

#endif // _java_net_UnknownServiceException_h_