#ifndef _sun_net_www_protocol_jar_URLJarFile$URLJarFileCloseController_h_
#define _sun_net_www_protocol_jar_URLJarFile$URLJarFileCloseController_h_
//$ interface sun.net.www.protocol.jar.URLJarFile$URLJarFileCloseController
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace jar {
			class JarFile;
		}
	}
}

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {

class $export URLJarFile$URLJarFileCloseController : public ::java::lang::Object {
	$interface(URLJarFile$URLJarFileCloseController, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void close(::java::util::jar::JarFile* jarFile) {}
};

				} // jar
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_jar_URLJarFile$URLJarFileCloseController_h_