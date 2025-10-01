#ifndef _java_net_URL_h_
#define _java_net_URL_h_
//$ class java.net.URL
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("BUILTIN_HANDLERS_PREFIX")
#undef BUILTIN_HANDLERS_PREFIX

namespace java {
	namespace io {
		class InputStream;
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace lang {
		class SecurityManager;
		class ThreadLocal;
	}
}
namespace java {
	namespace net {
		class InetAddress;
		class Proxy;
		class URI;
		class URLConnection;
		class URLStreamHandler;
		class URLStreamHandlerFactory;
		class UrlDeserializedState;
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Iterator;
	}
}

namespace java {
	namespace net {

class $export URL : public ::java::io::Serializable {
	$class(URL, $PRELOAD, ::java::io::Serializable)
public:
	URL();
	void init$($String* protocol, $String* host, int32_t port, $String* file);
	void init$($String* protocol, $String* host, $String* file);
	void init$($String* protocol, $String* host, int32_t port, $String* file, ::java::net::URLStreamHandler* handler);
	void init$($String* spec);
	void init$(::java::net::URL* context, $String* spec);
	void init$(::java::net::URL* context, $String* spec, ::java::net::URLStreamHandler* handler);
	void checkSpecifyHandler(::java::lang::SecurityManager* sm);
	virtual bool equals(Object$* obj) override;
	::java::net::URL* fabricateNewURL();
	static ::java::net::URL* fromURI(::java::net::URI* uri);
	$String* getAuthority();
	$Object* getContent();
	$Object* getContent($ClassArray* classes);
	int32_t getDefaultPort();
	$String* getFile();
	$String* getHost();
	::java::net::InetAddress* getHostAddress();
	$String* getPath();
	int32_t getPort();
	$String* getProtocol();
	$String* getQuery();
	$String* getRef();
	static ::java::net::URLStreamHandler* getURLStreamHandler($String* protocol);
	$String* getUserInfo();
	virtual int32_t hashCode() override;
	bool isBuiltinStreamHandler(::java::net::URLStreamHandler* handler);
	bool isBuiltinStreamHandler($String* handlerClassName);
	static bool isOverrideable($String* protocol);
	bool isValidProtocol($String* protocol);
	static ::java::net::URLStreamHandler* lookupViaProperty($String* protocol);
	static ::java::net::URLStreamHandler* lookupViaProviders($String* protocol);
	::java::net::URLConnection* openConnection();
	::java::net::URLConnection* openConnection(::java::net::Proxy* proxy);
	::java::io::InputStream* openStream();
	static ::java::util::Iterator* providers();
	void readObject(::java::io::ObjectInputStream* s);
	$Object* readResolve();
	void resetState();
	bool sameFile(::java::net::URL* other);
	void set($String* protocol, $String* host, int32_t port, $String* authority, $String* userInfo, $String* path, $String* query, $String* ref);
	::java::net::URL* setDeserializedFields(::java::net::URLStreamHandler* handler);
	void setSerializedHashCode(int32_t hc);
	static void setURLStreamHandlerFactory(::java::net::URLStreamHandlerFactory* fac);
	$String* toExternalForm();
	static $String* toLowerCase($String* protocol);
	virtual $String* toString() override;
	::java::net::URI* toURI();
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* BUILTIN_HANDLERS_PREFIX;
	static const int64_t serialVersionUID = (int64_t)0x962537361AFCE472;
	static $String* protocolPathProp;
	$String* protocol = nullptr;
	$String* host = nullptr;
	int32_t port = 0;
	$String* file = nullptr;
	$String* query = nullptr;
	$String* authority = nullptr;
	$String* path = nullptr;
	$String* userInfo = nullptr;
	$String* ref = nullptr;
	::java::net::InetAddress* hostAddress = nullptr;
	::java::net::URLStreamHandler* handler = nullptr;
	int32_t hashCode$ = 0;
	::java::net::UrlDeserializedState* tempState = nullptr;
	static $volatile(::java::net::URLStreamHandlerFactory*) factory;
	static ::java::net::URLStreamHandlerFactory* defaultFactory;
	static ::java::lang::ThreadLocal* gate;
	static ::java::util::Hashtable* handlers;
	static $Object* streamHandlerLock;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

	} // net
} // java

#pragma pop_macro("BUILTIN_HANDLERS_PREFIX")

#endif // _java_net_URL_h_