#ifndef _java_net_UnixDomainSocketAddress_h_
#define _java_net_UnixDomainSocketAddress_h_
//$ class java.net.UnixDomainSocketAddress
//$ extends java.net.SocketAddress

#include <java/net/SocketAddress.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

namespace java {
	namespace net {

class $import UnixDomainSocketAddress : public ::java::net::SocketAddress {
	$class(UnixDomainSocketAddress, $NO_CLASS_INIT, ::java::net::SocketAddress)
public:
	UnixDomainSocketAddress();
	void init$(::java::nio::file::Path* path);
	virtual bool equals(Object$* o) override;
	::java::nio::file::Path* getPath();
	virtual int32_t hashCode() override;
	static ::java::net::UnixDomainSocketAddress* of($String* pathname);
	static ::java::net::UnixDomainSocketAddress* of(::java::nio::file::Path* path);
	void readObject(::java::io::ObjectInputStream* s);
	void readObjectNoData();
	virtual $String* toString() override;
	$Object* writeReplace();
	static const int64_t serialVersionUID = (int64_t)0x014A0E5413F48978;
	::java::nio::file::Path* path = nullptr;
};

	} // net
} // java

#endif // _java_net_UnixDomainSocketAddress_h_