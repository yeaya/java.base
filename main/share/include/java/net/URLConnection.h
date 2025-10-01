#ifndef _java_net_URLConnection_h_
#define _java_net_URLConnection_h_
//$ class java.net.URLConnection
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class ContentHandler;
		class ContentHandlerFactory;
		class FileNameMap;
		class URL;
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}
namespace sun {
	namespace net {
		namespace www {
			class MessageHeader;
		}
	}
}

namespace java {
	namespace net {

class $import URLConnection : public ::java::lang::Object {
	$class(URLConnection, 0, ::java::lang::Object)
public:
	URLConnection();
	void init$(::java::net::URL* url);
	virtual void addRequestProperty($String* key, $String* value);
	void checkConnected();
	static bool checkfpx(::java::io::InputStream* is);
	virtual void connect() {}
	virtual bool getAllowUserInteraction();
	virtual int32_t getConnectTimeout();
	virtual $Object* getContent();
	virtual $Object* getContent($ClassArray* classes);
	virtual $String* getContentEncoding();
	::java::net::ContentHandler* getContentHandler();
	$String* getContentHandlerPkgPrefixes();
	virtual int32_t getContentLength();
	virtual int64_t getContentLengthLong();
	virtual $String* getContentType();
	virtual int64_t getDate();
	static bool getDefaultAllowUserInteraction();
	static $String* getDefaultRequestProperty($String* key);
	virtual bool getDefaultUseCaches();
	static bool getDefaultUseCaches($String* protocol);
	virtual bool getDoInput();
	virtual bool getDoOutput();
	virtual int64_t getExpiration();
	static ::java::net::FileNameMap* getFileNameMap();
	virtual $String* getHeaderField($String* name);
	virtual $String* getHeaderField(int32_t n);
	virtual int64_t getHeaderFieldDate($String* name, int64_t Default);
	virtual int32_t getHeaderFieldInt($String* name, int32_t Default);
	virtual $String* getHeaderFieldKey(int32_t n);
	virtual int64_t getHeaderFieldLong($String* name, int64_t Default);
	virtual ::java::util::Map* getHeaderFields();
	virtual int64_t getIfModifiedSince();
	virtual ::java::io::InputStream* getInputStream();
	virtual int64_t getLastModified();
	virtual ::java::io::OutputStream* getOutputStream();
	virtual ::java::security::Permission* getPermission();
	virtual int32_t getReadTimeout();
	virtual ::java::util::Map* getRequestProperties();
	virtual $String* getRequestProperty($String* key);
	virtual ::java::net::URL* getURL();
	virtual bool getUseCaches();
	static $String* guessContentTypeFromName($String* fname);
	static $String* guessContentTypeFromStream(::java::io::InputStream* is);
	::java::net::ContentHandler* lookupContentHandlerClassFor($String* contentType);
	::java::net::ContentHandler* lookupContentHandlerViaProvider($String* contentType);
	static int32_t readBytes($ints* c, int32_t len, ::java::io::InputStream* is);
	virtual void setAllowUserInteraction(bool allowuserinteraction);
	virtual void setConnectTimeout(int32_t timeout);
	static void setContentHandlerFactory(::java::net::ContentHandlerFactory* fac);
	static void setDefaultAllowUserInteraction(bool defaultallowuserinteraction);
	static void setDefaultRequestProperty($String* key, $String* value);
	virtual void setDefaultUseCaches(bool defaultusecaches);
	static void setDefaultUseCaches($String* protocol, bool defaultVal);
	virtual void setDoInput(bool doinput);
	virtual void setDoOutput(bool dooutput);
	static void setFileNameMap(::java::net::FileNameMap* map);
	virtual void setIfModifiedSince(int64_t ifmodifiedsince);
	virtual void setReadTimeout(int32_t timeout);
	virtual void setRequestProperty($String* key, $String* value);
	virtual void setUseCaches(bool usecaches);
	static int64_t skipForward(::java::io::InputStream* is, int64_t toSkip);
	$String* stripOffParameters($String* contentType);
	virtual $String* toString() override;
	$String* typeToPackageName($String* contentType);
	static bool $assertionsDisabled;
	::java::net::URL* url = nullptr;
	bool doInput = false;
	bool doOutput = false;
	static bool defaultAllowUserInteraction;
	bool allowUserInteraction = false;
	static $volatile(bool) defaultUseCaches;
	bool useCaches = false;
	static ::java::util::concurrent::ConcurrentHashMap* defaultCaching;
	int64_t ifModifiedSince = 0;
	bool connected = false;
	int32_t connectTimeout = 0;
	int32_t readTimeout = 0;
	::sun::net::www::MessageHeader* requests = nullptr;
	static $volatile(::java::net::FileNameMap*) fileNameMap;
	static $volatile(::java::net::ContentHandlerFactory*) factory;
	static ::java::util::Hashtable* handlers;
	static $String* contentClassPrefix;
	static $String* contentPathProp;
};

	} // net
} // java

#endif // _java_net_URLConnection_h_