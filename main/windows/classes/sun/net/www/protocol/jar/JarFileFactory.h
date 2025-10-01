#ifndef _sun_net_www_protocol_jar_JarFileFactory_h_
#define _sun_net_www_protocol_jar_JarFileFactory_h_
//$ class sun.net.www.protocol.jar.JarFileFactory
//$ extends sun.net.www.protocol.jar.URLJarFile$URLJarFileCloseController

#include <sun/net/www/protocol/jar/URLJarFile$URLJarFileCloseController.h>

namespace java {
	namespace net {
		class URL;
		class URLConnection;
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}
namespace java {
	namespace util {
		class HashMap;
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

class $export JarFileFactory : public ::sun::net::www::protocol::jar::URLJarFile$URLJarFileCloseController {
	$class(JarFileFactory, 0, ::sun::net::www::protocol::jar::URLJarFile$URLJarFileCloseController)
public:
	JarFileFactory();
	void init$();
	virtual bool cacheIfAbsent(::java::net::URL* url, ::java::util::jar::JarFile* jarFile);
	virtual void close(::java::util::jar::JarFile* jarFile) override;
	virtual bool closeIfNotCached(::java::net::URL* url, ::java::util::jar::JarFile* jarFile);
	virtual ::java::util::jar::JarFile* get(::java::net::URL* url);
	virtual ::java::util::jar::JarFile* get(::java::net::URL* url, bool useCaches);
	::java::util::jar::JarFile* getCachedJarFile(::java::net::URL* url);
	virtual ::java::net::URLConnection* getConnection(::java::util::jar::JarFile* jarFile);
	static ::sun::net::www::protocol::jar::JarFileFactory* getInstance();
	virtual ::java::util::jar::JarFile* getOrCreate(::java::net::URL* url, bool useCaches);
	::java::security::Permission* getPermission(::java::util::jar::JarFile* jarFile);
	::java::net::URL* urlFor(::java::net::URL* url);
	$String* urlKey(::java::net::URL* url);
	static bool $assertionsDisabled;
	static ::java::util::HashMap* fileCache;
	static ::java::util::HashMap* urlCache;
	static ::sun::net::www::protocol::jar::JarFileFactory* instance;
};

				} // jar
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_jar_JarFileFactory_h_