#ifndef _sun_security_x509_CertificateExtensions_h_
#define _sun_security_x509_CertificateExtensions_h_
//$ class sun.security.x509.CertificateExtensions
//$ extends sun.security.x509.CertAttrSet

#include <java/lang/Array.h>
#include <sun/security/x509/CertAttrSet.h>

#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("PARAMS")
#undef PARAMS
#pragma push_macro("NAME")
#undef NAME

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Enumeration;
		class Map;
	}
}
namespace sun {
	namespace security {
		namespace util {
			class Debug;
			class DerInputStream;
			class ObjectIdentifier;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class Extension;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export CertificateExtensions : public ::sun::security::x509::CertAttrSet {
	$class(CertificateExtensions, 0, ::sun::security::x509::CertAttrSet)
public:
	CertificateExtensions();
	void init$();
	void init$(::sun::security::util::DerInputStream* in);
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	virtual void encode(::java::io::OutputStream* out, bool isCertReq);
	virtual bool equals(Object$* other) override;
	virtual $Object* get($String* name) override;
	virtual ::java::util::Collection* getAllExtensions();
	virtual ::java::util::Enumeration* getElements() override;
	virtual ::sun::security::x509::Extension* getExtension($String* name);
	virtual $String* getName() override;
	virtual $String* getNameByOid(::sun::security::util::ObjectIdentifier* oid);
	virtual ::java::util::Map* getUnparseableExtensions();
	virtual bool hasUnsupportedCriticalExtension();
	virtual int32_t hashCode() override;
	void init(::sun::security::util::DerInputStream* in);
	void parseExtension(::sun::security::x509::Extension* ext);
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	static $String* IDENT;
	static $String* NAME;
	static ::sun::security::util::Debug* debug;
	::java::util::Map* map = nullptr;
	bool unsupportedCritExt = false;
	::java::util::Map* unparseableExtensions = nullptr;
	static $ClassArray* PARAMS;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("IDENT")
#pragma pop_macro("PARAMS")
#pragma pop_macro("NAME")

#endif // _sun_security_x509_CertificateExtensions_h_