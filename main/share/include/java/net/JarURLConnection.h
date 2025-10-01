#ifndef _java_net_JarURLConnection_h_
#define _java_net_JarURLConnection_h_
//$ class java.net.JarURLConnection
//$ extends java.net.URLConnection

#include <java/lang/Array.h>
#include <java/net/URLConnection.h>

namespace java {
	namespace net {
		class URL;
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
			class JarEntry;
			class JarFile;
			class Manifest;
		}
	}
}

namespace java {
	namespace net {

class $import JarURLConnection : public ::java::net::URLConnection {
	$class(JarURLConnection, $NO_CLASS_INIT, ::java::net::URLConnection)
public:
	JarURLConnection();
	void init$(::java::net::URL* url);
	virtual ::java::util::jar::Attributes* getAttributes();
	virtual $Array<::java::security::cert::Certificate>* getCertificates();
	virtual $String* getEntryName();
	virtual ::java::util::jar::JarEntry* getJarEntry();
	virtual ::java::util::jar::JarFile* getJarFile() {return nullptr;}
	virtual ::java::net::URL* getJarFileURL();
	virtual ::java::util::jar::Attributes* getMainAttributes();
	virtual ::java::util::jar::Manifest* getManifest();
	void parseSpecs(::java::net::URL* url);
	::java::net::URL* jarFileURL = nullptr;
	$String* entryName = nullptr;
	::java::net::URLConnection* jarFileURLConnection = nullptr;
};

	} // net
} // java

#endif // _java_net_JarURLConnection_h_