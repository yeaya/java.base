#ifndef _sun_net_www_protocol_jar_URLJarFileCallBack_h_
#define _sun_net_www_protocol_jar_URLJarFileCallBack_h_
//$ interface sun.net.www.protocol.jar.URLJarFileCallBack
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URL;
	}
}
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

class $import URLJarFileCallBack : public ::java::lang::Object {
	$interface(URLJarFileCallBack, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::jar::JarFile* retrieve(::java::net::URL* url) {return nullptr;}
};

				} // jar
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_jar_URLJarFileCallBack_h_