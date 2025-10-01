#ifndef _sun_net_www_protocol_jar_URLJarFile$URLJarFileEntry_h_
#define _sun_net_www_protocol_jar_URLJarFile$URLJarFileEntry_h_
//$ class sun.net.www.protocol.jar.URLJarFile$URLJarFileEntry
//$ extends java.util.jar.JarEntry

#include <java/lang/Array.h>
#include <java/util/jar/JarEntry.h>

namespace java {
	namespace security {
		class CodeSigner;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
		}
	}
}
namespace java {
	namespace util {
		namespace jar {
			class Attributes;
		}
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {
					class URLJarFile;
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

class $import URLJarFile$URLJarFileEntry : public ::java::util::jar::JarEntry {
	$class(URLJarFile$URLJarFileEntry, $NO_CLASS_INIT, ::java::util::jar::JarEntry)
public:
	URLJarFile$URLJarFileEntry();
	void init$(::sun::net::www::protocol::jar::URLJarFile* this$0, ::java::util::jar::JarEntry* je);
	virtual ::java::util::jar::Attributes* getAttributes() override;
	virtual $Array<::java::security::cert::Certificate>* getCertificates() override;
	virtual $Array<::java::security::CodeSigner>* getCodeSigners() override;
	::sun::net::www::protocol::jar::URLJarFile* this$0 = nullptr;
	::java::util::jar::JarEntry* je = nullptr;
};

				} // jar
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_jar_URLJarFile$URLJarFileEntry_h_