#ifndef _sun_net_ext_ExtendedSocketOptions$NoExtendedSocketOptions_h_
#define _sun_net_ext_ExtendedSocketOptions$NoExtendedSocketOptions_h_
//$ class sun.net.ext.ExtendedSocketOptions$NoExtendedSocketOptions
//$ extends sun.net.ext.ExtendedSocketOptions

#include <sun/net/ext/ExtendedSocketOptions.h>

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

namespace sun {
	namespace net {
		namespace ext {

class $import ExtendedSocketOptions$NoExtendedSocketOptions : public ::sun::net::ext::ExtendedSocketOptions {
	$class(ExtendedSocketOptions$NoExtendedSocketOptions, $NO_CLASS_INIT, ::sun::net::ext::ExtendedSocketOptions)
public:
	ExtendedSocketOptions$NoExtendedSocketOptions();
	void init$();
	virtual $Object* getOption(::java::io::FileDescriptor* fd, ::java::net::SocketOption* option) override;
	virtual void setOption(::java::io::FileDescriptor* fd, ::java::net::SocketOption* option, Object$* value) override;
};

		} // ext
	} // net
} // sun

#endif // _sun_net_ext_ExtendedSocketOptions$NoExtendedSocketOptions_h_