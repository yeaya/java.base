#ifndef _sun_security_pkcs_PKCS9Attributes_h_
#define _sun_security_pkcs_PKCS9Attributes_h_
//$ class sun.security.pkcs.PKCS9Attributes
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace sun {
	namespace security {
		namespace pkcs {
			class PKCS9Attribute;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerEncoder;
			class DerInputStream;
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace pkcs {

class $export PKCS9Attributes : public ::java::lang::Object {
	$class(PKCS9Attributes, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PKCS9Attributes();
	void init$($Array<::sun::security::util::ObjectIdentifier>* permittedAttributes, ::sun::security::util::DerInputStream* in);
	void init$(::sun::security::util::DerInputStream* in);
	void init$(::sun::security::util::DerInputStream* in, bool ignoreUnsupportedAttributes);
	void init$($Array<::sun::security::pkcs::PKCS9Attribute>* attribs);
	static $Array<::sun::security::util::DerEncoder>* castToDerEncoder($ObjectArray* objs);
	$bytes* decode(::sun::security::util::DerInputStream* in);
	virtual void encode(int8_t tag, ::java::io::OutputStream* out);
	$bytes* generateDerEncoding();
	virtual ::sun::security::pkcs::PKCS9Attribute* getAttribute(::sun::security::util::ObjectIdentifier* oid);
	virtual ::sun::security::pkcs::PKCS9Attribute* getAttribute($String* name);
	virtual $Object* getAttributeValue(::sun::security::util::ObjectIdentifier* oid);
	virtual $Object* getAttributeValue($String* name);
	virtual $Array<::sun::security::pkcs::PKCS9Attribute>* getAttributes();
	virtual $bytes* getDerEncoding();
	virtual $String* toString() override;
	::java::util::Hashtable* attributes = nullptr;
	::java::util::Hashtable* permittedAttributes = nullptr;
	$bytes* derEncoding = nullptr;
	bool ignoreUnsupportedAttributes = false;
};

		} // pkcs
	} // security
} // sun

#endif // _sun_security_pkcs_PKCS9Attributes_h_