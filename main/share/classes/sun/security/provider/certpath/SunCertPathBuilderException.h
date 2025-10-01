#ifndef _sun_security_provider_certpath_SunCertPathBuilderException_h_
#define _sun_security_provider_certpath_SunCertPathBuilderException_h_
//$ class sun.security.provider.certpath.SunCertPathBuilderException
//$ extends java.security.cert.CertPathBuilderException

#include <java/security/cert/CertPathBuilderException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {
				class AdjacencyList;
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $export SunCertPathBuilderException : public ::java::security::cert::CertPathBuilderException {
	$class(SunCertPathBuilderException, $NO_CLASS_INIT, ::java::security::cert::CertPathBuilderException)
public:
	SunCertPathBuilderException();
	void init$();
	void init$($String* msg);
	void init$($Throwable* cause);
	void init$($String* msg, $Throwable* cause);
	void init$($String* msg, ::sun::security::provider::certpath::AdjacencyList* adjList);
	void init$($String* msg, $Throwable* cause, ::sun::security::provider::certpath::AdjacencyList* adjList);
	virtual ::sun::security::provider::certpath::AdjacencyList* getAdjacencyList();
	static const int64_t serialVersionUID = (int64_t)0x938E1216D75FE7BB;
	::sun::security::provider::certpath::AdjacencyList* adjList = nullptr;
	SunCertPathBuilderException(const SunCertPathBuilderException& e);
	SunCertPathBuilderException wrapper$();
	virtual void throwWrapper$() override;
};

			} // certpath
		} // provider
	} // security
} // sun

#endif // _sun_security_provider_certpath_SunCertPathBuilderException_h_