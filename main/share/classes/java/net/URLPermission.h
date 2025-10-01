#ifndef _java_net_URLPermission_h_
#define _java_net_URLPermission_h_
//$ class java.net.URLPermission
//$ extends java.security.Permission

#include <java/security/Permission.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace net {
		class URLPermission$Authority;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace net {

class $export URLPermission : public ::java::security::Permission {
	$class(URLPermission, $NO_CLASS_INIT, ::java::security::Permission)
public:
	URLPermission();
	void init$($String* url, $String* actions);
	void init$($String* url);
	$String* actions();
	virtual bool equals(Object$* p) override;
	virtual $String* getActions() override;
	virtual int32_t hashCode() override;
	virtual bool implies(::java::security::Permission* p) override;
	void init($String* actions);
	static $String* normalize($String* url);
	::java::util::List* normalizeHeaders($String* headers);
	::java::util::List* normalizeMethods($String* methods);
	void parseURI($String* url);
	void readObject(::java::io::ObjectInputStream* s);
	static const int64_t serialVersionUID = (int64_t)0xDA7EEB7A86DE1AA6;
	$String* scheme = nullptr;
	$String* ssp = nullptr;
	$String* path = nullptr;
	::java::util::List* methods = nullptr;
	::java::util::List* requestHeaders = nullptr;
	::java::net::URLPermission$Authority* authority = nullptr;
	$String* actions$ = nullptr;
};

	} // net
} // java

#endif // _java_net_URLPermission_h_