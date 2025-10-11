#ifndef _sun_security_x509_RDN_h_
#define _sun_security_x509_RDN_h_
//$ class sun.security.x509.RDN
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("RDN")
#undef RDN

namespace java {
	namespace util {
		class List;
		class Map;
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
			class AVA;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export RDN : public ::java::lang::Object {
	$class(RDN, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RDN();
	void init$($String* name);
	void init$($String* name, ::java::util::Map* keywordMap);
	void init$($String* name, $String* format);
	void init$($String* name, $String* format, ::java::util::Map* keywordMap);
	void init$(::sun::security::util::DerValue* rdn);
	void init$(int32_t i);
	void init$(::sun::security::x509::AVA* ava);
	void init$($Array<::sun::security::x509::AVA>* avas);
	virtual ::java::util::List* avas();
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* obj) override;
	virtual ::sun::security::util::DerValue* findAttribute(::sun::security::util::ObjectIdentifier* oid);
	virtual int32_t hashCode() override;
	virtual int32_t size();
	virtual $String* toRFC1779String();
	virtual $String* toRFC1779String(::java::util::Map* oidMap);
	virtual $String* toRFC2253String();
	virtual $String* toRFC2253String(::java::util::Map* oidMap);
	virtual $String* toRFC2253String(bool canonical);
	$String* toRFC2253StringInternal(bool canonical, ::java::util::Map* oidMap);
	virtual $String* toString() override;
	$Array<::sun::security::x509::AVA>* assertion = nullptr;
	$volatile(::java::util::List*) avaList = nullptr;
	$volatile($String*) canonicalString = nullptr;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("RDN")

#endif // _sun_security_x509_RDN_h_