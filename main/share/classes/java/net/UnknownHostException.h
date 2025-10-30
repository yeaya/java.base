#ifndef _java_net_UnknownHostException_h_
#define _java_net_UnknownHostException_h_
//$ class java.net.UnknownHostException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace net {

class $export UnknownHostException : public ::java::io::IOException {
	$class(UnknownHostException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	UnknownHostException();
	void init$($String* message);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xBF9E8369B89DD775;
	UnknownHostException(const UnknownHostException& e);
	virtual void throw$() override;
	inline UnknownHostException* operator ->() {
		return (UnknownHostException*)throwing$;
	}
};

	} // net
} // java

#endif // _java_net_UnknownHostException_h_