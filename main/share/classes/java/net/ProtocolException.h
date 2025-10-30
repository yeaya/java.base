#ifndef _java_net_ProtocolException_h_
#define _java_net_ProtocolException_h_
//$ class java.net.ProtocolException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace net {

class $export ProtocolException : public ::java::io::IOException {
	$class(ProtocolException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	ProtocolException();
	void init$($String* message);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xAB5DF48B1D313490;
	ProtocolException(const ProtocolException& e);
	virtual void throw$() override;
	inline ProtocolException* operator ->() {
		return (ProtocolException*)throwing$;
	}
};

	} // net
} // java

#endif // _java_net_ProtocolException_h_