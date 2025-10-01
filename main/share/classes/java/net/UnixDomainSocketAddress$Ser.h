#ifndef _java_net_UnixDomainSocketAddress$Ser_h_
#define _java_net_UnixDomainSocketAddress$Ser_h_
//$ class java.net.UnixDomainSocketAddress$Ser
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace net {

class UnixDomainSocketAddress$Ser : public ::java::io::Serializable {
	$class(UnixDomainSocketAddress$Ser, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	UnixDomainSocketAddress$Ser();
	void init$($String* pathname);
	$Object* readResolve();
	static const int64_t serialVersionUID = (int64_t)0x9197BB2525398A5A;
	$String* pathname = nullptr;
};

	} // net
} // java

#endif // _java_net_UnixDomainSocketAddress$Ser_h_