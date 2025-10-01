#ifndef _sun_net_www_protocol_jar_URLJarFile$1_h_
#define _sun_net_www_protocol_jar_URLJarFile$1_h_
//$ class sun.net.www.protocol.jar.URLJarFile$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class Runtime$Version;
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {
					class URLJarFile$URLJarFileCloseController;
				}
			}
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {

class $export URLJarFile$1 : public ::java::security::PrivilegedExceptionAction {
	$class(URLJarFile$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	URLJarFile$1();
	void init$(::java::io::InputStream* val$in, ::sun::net::www::protocol::jar::URLJarFile$URLJarFileCloseController* val$closeController, ::java::lang::Runtime$Version* val$version);
	virtual $Object* run() override;
	::java::lang::Runtime$Version* val$version = nullptr;
	::sun::net::www::protocol::jar::URLJarFile$URLJarFileCloseController* val$closeController = nullptr;
	::java::io::InputStream* val$in = nullptr;
};

				} // jar
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_jar_URLJarFile$1_h_