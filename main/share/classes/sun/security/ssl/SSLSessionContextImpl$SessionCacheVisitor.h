#ifndef _sun_security_ssl_SSLSessionContextImpl$SessionCacheVisitor_h_
#define _sun_security_ssl_SSLSessionContextImpl$SessionCacheVisitor_h_
//$ class sun.security.ssl.SSLSessionContextImpl$SessionCacheVisitor
//$ extends sun.security.util.Cache$CacheVisitor

#include <sun/security/util/Cache$CacheVisitor.h>

namespace java {
	namespace util {
		class ArrayList;
		class Enumeration;
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace ssl {
			class SSLSessionContextImpl;
		}
	}
}

namespace sun {
	namespace security {
		namespace ssl {

class SSLSessionContextImpl$SessionCacheVisitor : public ::sun::security::util::Cache$CacheVisitor {
	$class(SSLSessionContextImpl$SessionCacheVisitor, $NO_CLASS_INIT, ::sun::security::util::Cache$CacheVisitor)
public:
	SSLSessionContextImpl$SessionCacheVisitor();
	void init$(::sun::security::ssl::SSLSessionContextImpl* this$0);
	::java::util::Enumeration* getSessionIds();
	virtual void visit(::java::util::Map* map) override;
	::sun::security::ssl::SSLSessionContextImpl* this$0 = nullptr;
	::java::util::ArrayList* ids = nullptr;
};

		} // ssl
	} // security
} // sun

#endif // _sun_security_ssl_SSLSessionContextImpl$SessionCacheVisitor_h_