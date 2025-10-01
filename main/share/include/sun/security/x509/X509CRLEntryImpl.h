#ifndef _sun_security_x509_X509CRLEntryImpl_h_
#define _sun_security_x509_X509CRLEntryImpl_h_
//$ class sun.security.x509.X509CRLEntryImpl
//$ extends java.security.cert.X509CRLEntry
//$ implements java.lang.Comparable

#include <java/lang/Array.h>
#include <java/lang/Comparable.h>
#include <java/security/cert/X509CRLEntry.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CRLReason;
		}
	}
}
namespace java {
	namespace util {
		class Date;
		class Map;
		class Set;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace x500 {
				class X500Principal;
			}
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerOutputStream;
			class DerValue;
			class ObjectIdentifier;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class CRLExtensions;
			class CertificateIssuerExtension;
			class Extension;
			class SerialNumber;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import X509CRLEntryImpl : public ::java::security::cert::X509CRLEntry, public ::java::lang::Comparable {
	$class(X509CRLEntryImpl, $NO_CLASS_INIT, ::java::security::cert::X509CRLEntry, ::java::lang::Comparable)
public:
	X509CRLEntryImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::math::BigInteger* num, ::java::util::Date* date);
	void init$(::java::math::BigInteger* num, ::java::util::Date* date, ::sun::security::x509::CRLExtensions* crlEntryExts);
	void init$($bytes* revokedCert);
	void init$(::sun::security::util::DerValue* derValue);
	virtual int32_t compareTo(::sun::security::x509::X509CRLEntryImpl* that);
	virtual int32_t compareTo(Object$* that) override;
	virtual void encode(::sun::security::util::DerOutputStream* outStrm);
	virtual ::javax::security::auth::x500::X500Principal* getCertificateIssuer() override;
	virtual ::sun::security::x509::CertificateIssuerExtension* getCertificateIssuerExtension();
	virtual ::java::util::Set* getCriticalExtensionOIDs() override;
	virtual $bytes* getEncoded() override;
	$bytes* getEncoded0();
	virtual ::sun::security::x509::Extension* getExtension(::sun::security::util::ObjectIdentifier* oid);
	virtual $bytes* getExtensionValue($String* oid) override;
	virtual ::java::util::Map* getExtensions();
	virtual ::java::util::Set* getNonCriticalExtensionOIDs() override;
	virtual ::java::lang::Integer* getReasonCode();
	virtual ::java::util::Date* getRevocationDate() override;
	virtual ::java::security::cert::CRLReason* getRevocationReason() override;
	static ::java::security::cert::CRLReason* getRevocationReason(::java::security::cert::X509CRLEntry* crlEntry);
	virtual ::java::math::BigInteger* getSerialNumber() override;
	virtual bool hasExtensions() override;
	virtual bool hasUnsupportedCriticalExtension() override;
	void parse(::sun::security::util::DerValue* derVal);
	virtual void setCertificateIssuer(::javax::security::auth::x500::X500Principal* crlIssuer, ::javax::security::auth::x500::X500Principal* certIssuer);
	static ::sun::security::x509::X509CRLEntryImpl* toImpl(::java::security::cert::X509CRLEntry* entry);
	virtual $String* toString() override;
	::sun::security::x509::SerialNumber* serialNumber = nullptr;
	::java::util::Date* revocationDate = nullptr;
	::sun::security::x509::CRLExtensions* extensions = nullptr;
	$bytes* revokedCert = nullptr;
	::javax::security::auth::x500::X500Principal* certIssuer = nullptr;
	static const bool isExplicit = false;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_X509CRLEntryImpl_h_