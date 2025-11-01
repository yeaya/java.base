#ifndef _sun_security_x509_X500Name_h_
#define _sun_security_x509_X500Name_h_
//$ class sun.security.x509.X500Name
//$ extends sun.security.x509.GeneralNameInterface
//$ implements java.security.Principal

#include <java/lang/Array.h>
#include <java/security/Principal.h>
#include <sun/security/x509/GeneralNameInterface.h>

#pragma push_macro("DNQUALIFIER_OID")
#undef DNQUALIFIER_OID
#pragma push_macro("DOMAIN_COMPONENT_OID")
#undef DOMAIN_COMPONENT_OID
#pragma push_macro("GENERATIONQUALIFIER_OID")
#undef GENERATIONQUALIFIER_OID
#pragma push_macro("GIVENNAME_OID")
#undef GIVENNAME_OID
#pragma push_macro("INITIALS_OID")
#undef INITIALS_OID
#pragma push_macro("SERIALNUMBER_OID")
#undef SERIALNUMBER_OID
#pragma push_macro("SURNAME_OID")
#undef SURNAME_OID

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Field;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
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
			class DerInputStream;
			class DerOutputStream;
			class DerValue;
			class ObjectIdentifier;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class RDN;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export X500Name : public ::sun::security::x509::GeneralNameInterface, public ::java::security::Principal {
	$class(X500Name, 0, ::sun::security::x509::GeneralNameInterface, ::java::security::Principal)
public:
	X500Name();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* dname);
	void init$($String* dname, ::java::util::Map* keywordMap);
	void init$($String* dname, $String* format);
	void init$($String* commonName, $String* organizationUnit, $String* organizationName, $String* country);
	void init$($String* commonName, $String* organizationUnit, $String* organizationName, $String* localityName, $String* stateName, $String* country);
	void init$($Array<::sun::security::x509::RDN>* rdnArray);
	void init$(::sun::security::util::DerValue* value);
	void init$(::sun::security::util::DerInputStream* in);
	void init$($bytes* name);
	virtual ::java::util::List* allAvas();
	static ::sun::security::x509::X500Name* asX500Name(::javax::security::auth::x500::X500Principal* p);
	virtual ::javax::security::auth::x500::X500Principal* asX500Principal();
	virtual int32_t avaSize();
	virtual ::sun::security::x509::X500Name* commonAncestor(::sun::security::x509::X500Name* other);
	virtual int32_t constrains(::sun::security::x509::GeneralNameInterface* inputName) override;
	static int32_t countQuotes($String* string, int32_t from, int32_t to);
	virtual void emit(::sun::security::util::DerOutputStream* out);
	virtual void encode(::sun::security::util::DerOutputStream* out) override;
	virtual bool equals(Object$* obj) override;
	static bool escaped(int32_t rdnEnd, int32_t searchOffset, $String* dnString);
	::sun::security::util::DerValue* findAttribute(::sun::security::util::ObjectIdentifier* attribute);
	virtual ::sun::security::util::DerValue* findMostSpecificAttribute(::sun::security::util::ObjectIdentifier* attribute);
	void generateDN();
	$String* generateRFC1779DN(::java::util::Map* oidMap);
	$String* generateRFC2253DN(::java::util::Map* oidMap);
	virtual $String* getCommonName();
	virtual $String* getCountry();
	virtual $String* getDNQualifier();
	virtual $String* getDomain();
	virtual $bytes* getEncoded();
	virtual $bytes* getEncodedInternal();
	virtual $String* getGeneration();
	virtual $String* getGivenName();
	virtual $String* getIP();
	virtual $String* getInitials();
	virtual $String* getLocality();
	virtual $String* getName() override;
	virtual $String* getOrganization();
	virtual $String* getOrganizationalUnit();
	virtual $String* getRFC1779Name();
	virtual $String* getRFC1779Name(::java::util::Map* oidMap);
	virtual $String* getRFC2253CanonicalName();
	virtual $String* getRFC2253Name();
	virtual $String* getRFC2253Name(::java::util::Map* oidMap);
	virtual $String* getState();
	$String* getString(::sun::security::util::DerValue* attribute);
	virtual $String* getSurname();
	virtual int32_t getType() override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty();
	bool isWithinSubtree(::sun::security::x509::X500Name* other);
	void parseDER(::sun::security::util::DerInputStream* in);
	void parseDN($String* input, ::java::util::Map* keywordMap);
	void parseRFC2253DN($String* dnString);
	virtual ::java::util::List* rdns();
	virtual int32_t size();
	virtual int32_t subtreeDepth() override;
	virtual $String* toString() override;
	$String* dn = nullptr;
	$String* rfc1779Dn = nullptr;
	$String* rfc2253Dn = nullptr;
	$String* canonicalDn = nullptr;
	$Array<::sun::security::x509::RDN>* names = nullptr;
	::javax::security::auth::x500::X500Principal* x500Principal = nullptr;
	$bytes* encoded = nullptr;
	$volatile(::java::util::List*) rdnList = nullptr;
	$volatile(::java::util::List*) allAvaList = nullptr;
	static ::sun::security::util::ObjectIdentifier* commonName_oid;
	static ::sun::security::util::ObjectIdentifier* SURNAME_OID;
	static ::sun::security::util::ObjectIdentifier* SERIALNUMBER_OID;
	static ::sun::security::util::ObjectIdentifier* countryName_oid;
	static ::sun::security::util::ObjectIdentifier* localityName_oid;
	static ::sun::security::util::ObjectIdentifier* stateName_oid;
	static ::sun::security::util::ObjectIdentifier* streetAddress_oid;
	static ::sun::security::util::ObjectIdentifier* orgName_oid;
	static ::sun::security::util::ObjectIdentifier* orgUnitName_oid;
	static ::sun::security::util::ObjectIdentifier* title_oid;
	static ::sun::security::util::ObjectIdentifier* GIVENNAME_OID;
	static ::sun::security::util::ObjectIdentifier* INITIALS_OID;
	static ::sun::security::util::ObjectIdentifier* GENERATIONQUALIFIER_OID;
	static ::sun::security::util::ObjectIdentifier* DNQUALIFIER_OID;
	static ::sun::security::util::ObjectIdentifier* ipAddress_oid;
	static ::sun::security::util::ObjectIdentifier* DOMAIN_COMPONENT_OID;
	static ::sun::security::util::ObjectIdentifier* userid_oid;
	static ::java::lang::reflect::Constructor* principalConstructor;
	static ::java::lang::reflect::Field* principalField;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("DNQUALIFIER_OID")
#pragma pop_macro("DOMAIN_COMPONENT_OID")
#pragma pop_macro("GENERATIONQUALIFIER_OID")
#pragma pop_macro("GIVENNAME_OID")
#pragma pop_macro("INITIALS_OID")
#pragma pop_macro("SERIALNUMBER_OID")
#pragma pop_macro("SURNAME_OID")

#endif // _sun_security_x509_X500Name_h_