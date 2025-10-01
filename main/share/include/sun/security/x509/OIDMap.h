#ifndef _sun_security_x509_OIDMap_h_
#define _sun_security_x509_OIDMap_h_
//$ class sun.security.x509.OIDMap
//$ extends java.lang.Object

#include <sun/security/x509/AuthorityInfoAccessExtension.h>
#include <sun/security/x509/AuthorityKeyIdentifierExtension.h>
#include <sun/security/x509/BasicConstraintsExtension.h>
#include <sun/security/x509/CRLReasonCodeExtension.h>
#include <sun/security/x509/CertificateIssuerExtension.h>
#include <sun/security/x509/CertificatePoliciesExtension.h>
#include <sun/security/x509/DeltaCRLIndicatorExtension.h>
#include <sun/security/x509/ExtendedKeyUsageExtension.h>
#include <sun/security/x509/FreshestCRLExtension.h>
#include <sun/security/x509/InhibitAnyPolicyExtension.h>
#include <sun/security/x509/IssuerAlternativeNameExtension.h>
#include <sun/security/x509/IssuingDistributionPointExtension.h>
#include <sun/security/x509/KeyUsageExtension.h>
#include <sun/security/x509/NameConstraintsExtension.h>
#include <sun/security/x509/NetscapeCertTypeExtension.h>
#include <sun/security/x509/OCSPNoCheckExtension.h>
#include <sun/security/x509/PolicyConstraintsExtension.h>
#include <sun/security/x509/PolicyMappingsExtension.h>
#include <sun/security/x509/PrivateKeyUsageExtension.h>
#include <sun/security/x509/SubjectAlternativeNameExtension.h>
#include <sun/security/x509/SubjectInfoAccessExtension.h>
#include <sun/security/x509/SubjectKeyIdentifierExtension.h>
#include <sun/security/x509/X509CertImpl.h>
#include <sun/security/x509/X509CertInfo.h>

#pragma push_macro("CRL_REASON")
#undef CRL_REASON
#pragma push_macro("ROOT")
#undef ROOT
#pragma push_macro("POLICY_MAPPINGS")
#undef POLICY_MAPPINGS
#pragma push_macro("NAME_CONSTRAINTS")
#undef NAME_CONSTRAINTS
#pragma push_macro("SUBJECT_INFO_ACCESS")
#undef SUBJECT_INFO_ACCESS
#pragma push_macro("CRL_NUMBER")
#undef CRL_NUMBER
#pragma push_macro("NETSCAPE_CERT")
#undef NETSCAPE_CERT
#pragma push_macro("OCSPNOCHECK")
#undef OCSPNOCHECK
#pragma push_macro("SUB_ALT_NAME")
#undef SUB_ALT_NAME
#pragma push_macro("BASIC_CONSTRAINTS")
#undef BASIC_CONSTRAINTS
#pragma push_macro("CERT_ISSUER")
#undef CERT_ISSUER
#pragma push_macro("ISSUING_DIST_POINT")
#undef ISSUING_DIST_POINT
#pragma push_macro("AUTH_INFO_ACCESS")
#undef AUTH_INFO_ACCESS
#pragma push_macro("AUTH_KEY_IDENTIFIER")
#undef AUTH_KEY_IDENTIFIER
#pragma push_macro("CERT_POLICIES")
#undef CERT_POLICIES
#pragma push_macro("INHIBIT_ANY_POLICY")
#undef INHIBIT_ANY_POLICY
#pragma push_macro("EXT_KEY_USAGE")
#undef EXT_KEY_USAGE
#pragma push_macro("CRL_DIST_POINTS")
#undef CRL_DIST_POINTS
#pragma push_macro("DELTA_CRL_INDICATOR")
#undef DELTA_CRL_INDICATOR
#pragma push_macro("PRIVATE_KEY_USAGE")
#undef PRIVATE_KEY_USAGE
#pragma push_macro("SUB_KEY_IDENTIFIER")
#undef SUB_KEY_IDENTIFIER
#pragma push_macro("FRESHEST_CRL")
#undef FRESHEST_CRL
#pragma push_macro("KEY_USAGE")
#undef KEY_USAGE
#pragma push_macro("ISSUER_ALT_NAME")
#undef ISSUER_ALT_NAME
#pragma push_macro("POLICY_CONSTRAINTS")
#undef POLICY_CONSTRAINTS

namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class ObjectIdentifier;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class CRLDistributionPointsExtension;
			class CRLNumberExtension;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import OIDMap : public ::java::lang::Object {
	$class(OIDMap, 0, ::java::lang::Object)
public:
	OIDMap();
	void init$();
	static void addAttribute($String* name, $String* oid, $Class* clazz);
	static void addInternal($String* name, ::sun::security::util::ObjectIdentifier* oid, $String* className);
	static $Class* getClass($String* name);
	static $Class* getClass(::sun::security::util::ObjectIdentifier* oid);
	static $String* getName(::sun::security::util::ObjectIdentifier* oid);
	static ::sun::security::util::ObjectIdentifier* getOID($String* name);
	static $String* ROOT;
	static $String* AUTH_KEY_IDENTIFIER;
	static $String* SUB_KEY_IDENTIFIER;
	static $String* KEY_USAGE;
	static $String* PRIVATE_KEY_USAGE;
	static $String* POLICY_MAPPINGS;
	static $String* SUB_ALT_NAME;
	static $String* ISSUER_ALT_NAME;
	static $String* BASIC_CONSTRAINTS;
	static $String* NAME_CONSTRAINTS;
	static $String* POLICY_CONSTRAINTS;
	static $String* CRL_NUMBER;
	static $String* CRL_REASON;
	static $String* NETSCAPE_CERT;
	static $String* CERT_POLICIES;
	static $String* EXT_KEY_USAGE;
	static $String* INHIBIT_ANY_POLICY;
	static $String* CRL_DIST_POINTS;
	static $String* CERT_ISSUER;
	static $String* SUBJECT_INFO_ACCESS;
	static $String* AUTH_INFO_ACCESS;
	static $String* ISSUING_DIST_POINT;
	static $String* DELTA_CRL_INDICATOR;
	static $String* FRESHEST_CRL;
	static $String* OCSPNOCHECK;
	static ::java::util::Map* oidMap;
	static ::java::util::Map* nameMap;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("CRL_REASON")
#pragma pop_macro("ROOT")
#pragma pop_macro("POLICY_MAPPINGS")
#pragma pop_macro("NAME_CONSTRAINTS")
#pragma pop_macro("SUBJECT_INFO_ACCESS")
#pragma pop_macro("CRL_NUMBER")
#pragma pop_macro("NETSCAPE_CERT")
#pragma pop_macro("OCSPNOCHECK")
#pragma pop_macro("SUB_ALT_NAME")
#pragma pop_macro("BASIC_CONSTRAINTS")
#pragma pop_macro("CERT_ISSUER")
#pragma pop_macro("ISSUING_DIST_POINT")
#pragma pop_macro("AUTH_INFO_ACCESS")
#pragma pop_macro("AUTH_KEY_IDENTIFIER")
#pragma pop_macro("CERT_POLICIES")
#pragma pop_macro("INHIBIT_ANY_POLICY")
#pragma pop_macro("EXT_KEY_USAGE")
#pragma pop_macro("CRL_DIST_POINTS")
#pragma pop_macro("DELTA_CRL_INDICATOR")
#pragma pop_macro("PRIVATE_KEY_USAGE")
#pragma pop_macro("SUB_KEY_IDENTIFIER")
#pragma pop_macro("FRESHEST_CRL")
#pragma pop_macro("KEY_USAGE")
#pragma pop_macro("ISSUER_ALT_NAME")
#pragma pop_macro("POLICY_CONSTRAINTS")

#endif // _sun_security_x509_OIDMap_h_