#ifndef _java_net_ProtocolException_h_
#define _java_net_ProtocolException_h_
//$ class java.net.ProtocolException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace net {

class $import ProtocolException : public ::java::io::IOException {
	$class(ProtocolException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	ProtocolException();
	void init$($String* message);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xab5df48b1d313490;
	ProtocolException(const ProtocolException& e);
	virtual void throw$() override;
	inline ProtocolException* operator ->() const {
		return (ProtocolException*)throwing$;
	}
	inline operator ProtocolException*() const {
		return (ProtocolException*)throwing$;
	}
};

	} // net
} // java

#endif // _java_net_ProtocolException_h_