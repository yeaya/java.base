#ifndef _sun_net_ext_ExtendedSocketOptions_h_
#define _sun_net_ext_ExtendedSocketOptions_h_
//$ class sun.net.ext.ExtendedSocketOptions
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("SOCK_STREAM")
#undef SOCK_STREAM
#pragma push_macro("SOCK_DGRAM")
#undef SOCK_DGRAM

namespace java {
	namespace io {
		class FileDescriptor;
	}
}
namespace java {
	namespace net {
		class SocketOption;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace sun {
	namespace net {
		namespace ext {

class $export ExtendedSocketOptions : public ::java::lang::Object {
	$class(ExtendedSocketOptions, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ExtendedSocketOptions();
	void init$(::java::util::Set* options);
	static ::java::util::Set* clientSocketOptions();
	static ::java::util::Set* datagramSocketOptions();
	static ::sun::net::ext::ExtendedSocketOptions* getInstance();
	virtual $Object* getOption(::java::io::FileDescriptor* fd, ::java::net::SocketOption* option) {return nullptr;}
	static bool isDatagramOption(::java::net::SocketOption* option);
	bool isOptionSupported(::java::net::SocketOption* option);
	static bool isStreamOption(::java::net::SocketOption* option, bool server);
	static bool isUnixDomainOption(::java::net::SocketOption* option);
	::java::util::Set* options();
	::java::util::Set* options0(int16_t type, bool server);
	static void register$(::sun::net::ext::ExtendedSocketOptions* extOptions);
	static ::java::util::Set* serverSocketOptions();
	virtual void setOption(::java::io::FileDescriptor* fd, ::java::net::SocketOption* option, Object$* value) {}
	::java::util::Set* unixDomainClientOptions();
	static ::java::util::Set* unixDomainSocketOptions();
	static const int16_t SOCK_STREAM = 1;
	static const int16_t SOCK_DGRAM = 2;
	::java::util::Set* options$ = nullptr;
	::java::util::Set* datagramOptions = nullptr;
	::java::util::Set* clientStreamOptions = nullptr;
	::java::util::Set* serverStreamOptions = nullptr;
	::java::util::Set* unixDomainClientOptions$ = nullptr;
	static $volatile(::sun::net::ext::ExtendedSocketOptions*) instance;
};

		} // ext
	} // net
} // sun

#pragma pop_macro("SOCK_STREAM")
#pragma pop_macro("SOCK_DGRAM")

#endif // _sun_net_ext_ExtendedSocketOptions_h_