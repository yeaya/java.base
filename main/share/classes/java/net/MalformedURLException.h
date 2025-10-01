#ifndef _java_net_MalformedURLException_h_
#define _java_net_MalformedURLException_h_
//$ class java.net.MalformedURLException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace net {

class $export MalformedURLException : public ::java::io::IOException {
	$class(MalformedURLException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	MalformedURLException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xFD769BB78DDED186;
	MalformedURLException(const MalformedURLException& e);
	MalformedURLException wrapper$();
	virtual void throwWrapper$() override;
};

	} // net
} // java

#endif // _java_net_MalformedURLException_h_