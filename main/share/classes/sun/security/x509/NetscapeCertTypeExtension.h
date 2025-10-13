#ifndef _sun_security_x509_NetscapeCertTypeExtension_h_
#define _sun_security_x509_NetscapeCertTypeExtension_h_
//$ class sun.security.x509.NetscapeCertTypeExtension
//$ extends sun.security.x509.Extension
//$ implements sun.security.x509.CertAttrSet

#include <java/lang/Array.h>
#include <sun/security/x509/CertAttrSet.h>
#include <sun/security/x509/Extension.h>

#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("NAME")
#undef NAME
#pragma push_macro("OBJECT_SIGNING")
#undef OBJECT_SIGNING
#pragma push_macro("OBJECT_SIGNING_CA")
#undef OBJECT_SIGNING_CA
#pragma push_macro("SSL_CA")
#undef SSL_CA
#pragma push_macro("SSL_CLIENT")
#undef SSL_CLIENT
#pragma push_macro("SSL_SERVER")
#undef SSL_SERVER
#pragma push_macro("S_MIME")
#undef S_MIME
#pragma push_macro("S_MIME_CA")
#undef S_MIME_CA

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Vector;
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
			class NetscapeCertTypeExtension$MapEntry;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export NetscapeCertTypeExtension : public ::sun::security::x509::Extension, public ::sun::security::x509::CertAttrSet {
	$class(NetscapeCertTypeExtension, 0, ::sun::security::x509::Extension, ::sun::security::x509::CertAttrSet)
public:
	NetscapeCertTypeExtension();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::sun::security::x509::Extension::encode;
	virtual $Object* clone() override;
	virtual bool equals(Object$* other) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($bytes* bitString);
	void init$($booleans* bitString);
	void init$(::java::lang::Boolean* critical, Object$* value);
	void init$();
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	void encodeThis();
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $booleans* getKeyUsageMappedBits();
	virtual $String* getName() override;
	static int32_t getPosition($String* name);
	bool isSet(int32_t position);
	void set(int32_t position, bool val);
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	static $String* IDENT;
	static $String* NAME;
	static $String* SSL_CLIENT;
	static $String* SSL_SERVER;
	static $String* S_MIME;
	static $String* OBJECT_SIGNING;
	static $String* SSL_CA;
	static $String* S_MIME_CA;
	static $String* OBJECT_SIGNING_CA;
	static ::sun::security::util::ObjectIdentifier* NetscapeCertType_Id;
	$booleans* bitString = nullptr;
	static $Array<::sun::security::x509::NetscapeCertTypeExtension$MapEntry>* mMapData;
	static ::java::util::Vector* mAttributeNames;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("IDENT")
#pragma pop_macro("NAME")
#pragma pop_macro("OBJECT_SIGNING")
#pragma pop_macro("OBJECT_SIGNING_CA")
#pragma pop_macro("SSL_CA")
#pragma pop_macro("SSL_CLIENT")
#pragma pop_macro("SSL_SERVER")
#pragma pop_macro("S_MIME")
#pragma pop_macro("S_MIME_CA")

#endif // _sun_security_x509_NetscapeCertTypeExtension_h_