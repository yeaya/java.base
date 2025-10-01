#ifndef _sun_security_pkcs10_PKCS10Attribute_h_
#define _sun_security_pkcs10_PKCS10Attribute_h_
//$ class sun.security.pkcs10.PKCS10Attribute
//$ extends sun.security.util.DerEncoder

#include <sun/security/util/DerEncoder.h>

namespace java {
	namespace io {
		class OutputStream;
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
			class DerValue;
			class ObjectIdentifier;
		}
	}
}

namespace sun {
	namespace security {
		namespace pkcs10 {

class PKCS10Attribute : public ::sun::security::util::DerEncoder {
	$class(PKCS10Attribute, $NO_CLASS_INIT, ::sun::security::util::DerEncoder)
public:
	PKCS10Attribute();
	void init$(::sun::security::util::DerValue* derVal);
	void init$(::sun::security::util::ObjectIdentifier* attributeId, Object$* attributeValue);
	void init$(::sun::security::pkcs::PKCS9Attribute* attr);
	virtual void derEncode(::java::io::OutputStream* out) override;
	virtual ::sun::security::util::ObjectIdentifier* getAttributeId();
	virtual $Object* getAttributeValue();
	virtual $String* toString() override;
	::sun::security::util::ObjectIdentifier* attributeId = nullptr;
	$Object* attributeValue = nullptr;
};

		} // pkcs10
	} // security
} // sun

#endif // _sun_security_pkcs10_PKCS10Attribute_h_