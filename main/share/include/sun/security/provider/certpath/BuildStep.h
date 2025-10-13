#ifndef _sun_security_provider_certpath_BuildStep_h_
#define _sun_security_provider_certpath_BuildStep_h_
//$ class sun.security.provider.certpath.BuildStep
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BACK")
#undef BACK
#pragma push_macro("FAIL")
#undef FAIL
#pragma push_macro("FOLLOW")
#undef FOLLOW
#pragma push_macro("POSSIBLE")
#undef POSSIBLE
#pragma push_macro("SUCCEED")
#undef SUCCEED

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
		namespace provider {
			namespace certpath {
				class Vertex;
			}
		}
	}
}

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

class $import BuildStep : public ::java::lang::Object {
	$class(BuildStep, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BuildStep();
	void init$(::sun::security::provider::certpath::Vertex* vtx, int32_t res);
	virtual $String* fullToString();
	virtual ::java::security::cert::X509Certificate* getCertificate();
	virtual $String* getIssuerName();
	virtual $String* getIssuerName($String* defaultName);
	virtual int32_t getResult();
	virtual $String* getSubjectName();
	virtual $String* getSubjectName($String* defaultName);
	virtual $Throwable* getThrowable();
	virtual ::sun::security::provider::certpath::Vertex* getVertex();
	virtual $String* resultToString(int32_t res);
	virtual $String* toString() override;
	virtual $String* verboseToString();
	::sun::security::provider::certpath::Vertex* vertex = nullptr;
	::java::security::cert::X509Certificate* cert = nullptr;
	$Throwable* throwable = nullptr;
	int32_t result = 0;
	static const int32_t POSSIBLE = 1;
	static const int32_t BACK = 2;
	static const int32_t FOLLOW = 3;
	static const int32_t FAIL = 4;
	static const int32_t SUCCEED = 5;
};

			} // certpath
		} // provider
	} // security
} // sun

#pragma pop_macro("BACK")
#pragma pop_macro("FAIL")
#pragma pop_macro("FOLLOW")
#pragma pop_macro("POSSIBLE")
#pragma pop_macro("SUCCEED")

#endif // _sun_security_provider_certpath_BuildStep_h_