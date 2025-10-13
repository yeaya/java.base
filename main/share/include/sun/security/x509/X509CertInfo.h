#ifndef _sun_security_x509_X509CertInfo_h_
#define _sun_security_x509_X509CertInfo_h_
//$ class sun.security.x509.X509CertInfo
//$ extends sun.security.x509.CertAttrSet

#include <java/lang/Array.h>
#include <sun/security/x509/CertificateAlgorithmId.h>
#include <sun/security/x509/CertificateExtensions.h>
#include <sun/security/x509/CertificateSerialNumber.h>
#include <sun/security/x509/CertificateValidity.h>
#include <sun/security/x509/CertificateVersion.h>
#include <sun/security/x509/CertificateX509Key.h>

#pragma push_macro("ALGORITHM_ID")
#undef ALGORITHM_ID
#pragma push_macro("ATTR_ALGORITHM")
#undef ATTR_ALGORITHM
#pragma push_macro("ATTR_EXTENSIONS")
#undef ATTR_EXTENSIONS
#pragma push_macro("ATTR_ISSUER")
#undef ATTR_ISSUER
#pragma push_macro("ATTR_ISSUER_ID")
#undef ATTR_ISSUER_ID
#pragma push_macro("ATTR_KEY")
#undef ATTR_KEY
#pragma push_macro("ATTR_SERIAL")
#undef ATTR_SERIAL
#pragma push_macro("ATTR_SUBJECT")
#undef ATTR_SUBJECT
#pragma push_macro("ATTR_SUBJECT_ID")
#undef ATTR_SUBJECT_ID
#pragma push_macro("ATTR_VALIDITY")
#undef ATTR_VALIDITY
#pragma push_macro("ATTR_VERSION")
#undef ATTR_VERSION
#pragma push_macro("DN_NAME")
#undef DN_NAME
#pragma push_macro("EXTENSIONS")
#undef EXTENSIONS
#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("ISSUER")
#undef ISSUER
#pragma push_macro("ISSUER_ID")
#undef ISSUER_ID
#pragma push_macro("KEY")
#undef KEY
#pragma push_macro("NAME")
#undef NAME
#pragma push_macro("SERIAL_NUMBER")
#undef SERIAL_NUMBER
#pragma push_macro("SUBJECT")
#undef SUBJECT
#pragma push_macro("SUBJECT_ID")
#undef SUBJECT_ID
#pragma push_macro("VALIDITY")
#undef VALIDITY
#pragma push_macro("VERSION")
#undef VERSION

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerOutputStream;
			class DerValue;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class UniqueIdentity;
			class X500Name;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import X509CertInfo : public ::sun::security::x509::CertAttrSet {
	$class(X509CertInfo, 0, ::sun::security::x509::CertAttrSet)
public:
	X509CertInfo();
	void init$();
	void init$($bytes* cert);
	void init$(::sun::security::util::DerValue* derVal);
	int32_t attributeMap($String* name);
	virtual void delete$($String* name) override;
	void emit(::sun::security::util::DerOutputStream* out);
	virtual void encode(::java::io::OutputStream* out) override;
	virtual bool equals(Object$* other) override;
	virtual bool equals(::sun::security::x509::X509CertInfo* other);
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $bytes* getEncodedInfo();
	virtual $String* getName() override;
	$Object* getX500Name($String* name, bool getIssuer);
	virtual int32_t hashCode() override;
	void parse(::sun::security::util::DerValue* val);
	virtual void set($String* name, Object$* val) override;
	void setAlgorithmId(Object$* val);
	void setExtensions(Object$* val);
	void setIssuer(Object$* val);
	void setIssuerUniqueId(Object$* val);
	void setKey(Object$* val);
	void setSerialNumber(Object$* val);
	void setSubject(Object$* val);
	void setSubjectUniqueId(Object$* val);
	void setValidity(Object$* val);
	void setVersion(Object$* val);
	virtual $String* toString() override;
	void verifyCert(::sun::security::x509::X500Name* subject, ::sun::security::x509::CertificateExtensions* extensions);
	static $String* IDENT;
	static $String* NAME;
	static $String* DN_NAME;
	static $String* VERSION;
	static $String* SERIAL_NUMBER;
	static $String* ALGORITHM_ID;
	static $String* ISSUER;
	static $String* SUBJECT;
	static $String* VALIDITY;
	static $String* KEY;
	static $String* ISSUER_ID;
	static $String* SUBJECT_ID;
	static $String* EXTENSIONS;
	::sun::security::x509::CertificateVersion* version = nullptr;
	::sun::security::x509::CertificateSerialNumber* serialNum = nullptr;
	::sun::security::x509::CertificateAlgorithmId* algId = nullptr;
	::sun::security::x509::X500Name* issuer = nullptr;
	::sun::security::x509::X500Name* subject = nullptr;
	::sun::security::x509::CertificateValidity* interval = nullptr;
	::sun::security::x509::CertificateX509Key* pubKey = nullptr;
	::sun::security::x509::UniqueIdentity* issuerUniqueId = nullptr;
	::sun::security::x509::UniqueIdentity* subjectUniqueId = nullptr;
	::sun::security::x509::CertificateExtensions* extensions = nullptr;
	static const int32_t ATTR_VERSION = 1;
	static const int32_t ATTR_SERIAL = 2;
	static const int32_t ATTR_ALGORITHM = 3;
	static const int32_t ATTR_ISSUER = 4;
	static const int32_t ATTR_VALIDITY = 5;
	static const int32_t ATTR_SUBJECT = 6;
	static const int32_t ATTR_KEY = 7;
	static const int32_t ATTR_ISSUER_ID = 8;
	static const int32_t ATTR_SUBJECT_ID = 9;
	static const int32_t ATTR_EXTENSIONS = 10;
	$bytes* rawCertInfo = nullptr;
	static ::java::util::Map* map;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("ALGORITHM_ID")
#pragma pop_macro("ATTR_ALGORITHM")
#pragma pop_macro("ATTR_EXTENSIONS")
#pragma pop_macro("ATTR_ISSUER")
#pragma pop_macro("ATTR_ISSUER_ID")
#pragma pop_macro("ATTR_KEY")
#pragma pop_macro("ATTR_SERIAL")
#pragma pop_macro("ATTR_SUBJECT")
#pragma pop_macro("ATTR_SUBJECT_ID")
#pragma pop_macro("ATTR_VALIDITY")
#pragma pop_macro("ATTR_VERSION")
#pragma pop_macro("DN_NAME")
#pragma pop_macro("EXTENSIONS")
#pragma pop_macro("IDENT")
#pragma pop_macro("ISSUER")
#pragma pop_macro("ISSUER_ID")
#pragma pop_macro("KEY")
#pragma pop_macro("NAME")
#pragma pop_macro("SERIAL_NUMBER")
#pragma pop_macro("SUBJECT")
#pragma pop_macro("SUBJECT_ID")
#pragma pop_macro("VALIDITY")
#pragma pop_macro("VERSION")

#endif // _sun_security_x509_X509CertInfo_h_