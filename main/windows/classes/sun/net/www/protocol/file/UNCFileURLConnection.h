#ifndef _sun_net_www_protocol_file_UNCFileURLConnection_h_
#define _sun_net_www_protocol_file_UNCFileURLConnection_h_
//$ class sun.net.www.protocol.file.UNCFileURLConnection
//$ extends sun.net.www.protocol.file.FileURLConnection

#include <sun/net/www/protocol/file/FileURLConnection.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace file {

class UNCFileURLConnection : public ::sun::net::www::protocol::file::FileURLConnection {
	$class(UNCFileURLConnection, $NO_CLASS_INIT, ::sun::net::www::protocol::file::FileURLConnection)
public:
	UNCFileURLConnection();
	void init$(::java::net::URL* u, ::java::io::File* file, $String* effectivePath);
	virtual ::java::security::Permission* getPermission() override;
	$String* effectivePath = nullptr;
	$volatile(::java::security::Permission*) permission = nullptr;
};

				} // file
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_file_UNCFileURLConnection_h_