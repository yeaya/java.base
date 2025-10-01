#ifndef _sun_security_provider_certpath_Vertex_h_
#define _sun_security_provider_certpath_Vertex_h_
//$ class sun.security.provider.certpath.Vertex
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import Vertex : public ::java::lang::Object {
	$class(Vertex, 0, ::java::lang::Object)
public:
	Vertex();
	void init$(::java::security::cert::X509Certificate* cert);
	virtual $String* certToString();
	virtual ::java::security::cert::X509Certificate* getCertificate();
	virtual int32_t getIndex();
	virtual $Throwable* getThrowable();
	virtual $String* indexToString();
	virtual $String* moreToString();
	virtual void setIndex(int32_t ndx);
	virtual void setThrowable($Throwable* throwable);
	virtual $String* throwableToString();
	virtual $String* toString() override;
	static ::sun::security::util::Debug* debug;
	::java::security::cert::X509Certificate* cert = nullptr;
	int32_t index = 0;
	$Throwable* throwable = nullptr;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_Vertex_h_