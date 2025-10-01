#ifndef _sun_net_www_protocol_jar_JarURLConnection_h_
#define _sun_net_www_protocol_jar_JarURLConnection_h_
//$ class sun.net.www.protocol.jar.JarURLConnection
//$ extends java.net.JarURLConnection

#include <java/net/JarURLConnection.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
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
		class Map;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class JarEntry;
			class JarFile;
		}
	}
}
namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace jar {
					class Handler;
					class JarFileFactory;
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

class $export JarURLConnection : public ::java::net::JarURLConnection {
	$class(JarURLConnection, 0, ::java::net::JarURLConnection)
public:
	JarURLConnection();
	using ::java::net::JarURLConnection::getHeaderField;
	using ::java::net::JarURLConnection::getContent;
	void init$(::java::net::URL* url, ::sun::net::www::protocol::jar::Handler* handler);
	virtual void addRequestProperty($String* key, $String* value) override;
	virtual void connect() override;
	virtual bool getAllowUserInteraction() override;
	virtual $Object* getContent() override;
	virtual int32_t getContentLength() override;
	virtual int64_t getContentLengthLong() override;
	virtual $String* getContentType() override;
	virtual bool getDefaultUseCaches() override;
	virtual $String* getHeaderField($String* name) override;
	virtual ::java::io::InputStream* getInputStream() override;
	virtual ::java::util::jar::JarEntry* getJarEntry() override;
	virtual ::java::util::jar::JarFile* getJarFile() override;
	virtual ::java::security::Permission* getPermission() override;
	virtual ::java::util::Map* getRequestProperties() override;
	virtual $String* getRequestProperty($String* key) override;
	virtual bool getUseCaches() override;
	virtual void setAllowUserInteraction(bool allowuserinteraction) override;
	virtual void setDefaultUseCaches(bool defaultusecaches) override;
	virtual void setIfModifiedSince(int64_t ifmodifiedsince) override;
	virtual void setRequestProperty($String* key, $String* value) override;
	virtual void setUseCaches(bool usecaches) override;
	static const bool debug = false;
	static ::sun::net::www::protocol::jar::JarFileFactory* factory;
	::java::net::URL* jarFileURL = nullptr;
	::java::security::Permission* permission = nullptr;
	::java::net::URLConnection* jarFileURLConnection = nullptr;
	$String* entryName = nullptr;
	::java::util::jar::JarEntry* jarEntry = nullptr;
	::java::util::jar::JarFile* jarFile = nullptr;
	$String* contentType = nullptr;
};

				} // jar
			} // protocol
		} // www
	} // net
} // sun

#endif // _sun_net_www_protocol_jar_JarURLConnection_h_