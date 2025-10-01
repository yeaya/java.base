#ifndef _sun_security_pkcs10_PKCS10Attributes_h_
#define _sun_security_pkcs10_PKCS10Attributes_h_
//$ class sun.security.pkcs10.PKCS10Attributes
//$ extends sun.security.util.DerEncoder

#include <java/lang/Array.h>
#include <sun/security/util/DerEncoder.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Enumeration;
		class Hashtable;
	}
}
namespace sun {
	namespace security {
		namespace pkcs10 {
			class PKCS10Attribute;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DerInputStream;
		}
	}
}

namespace sun {
	namespace security {
		namespace pkcs10 {

class PKCS10Attributes : public ::sun::security::util::DerEncoder {
	$class(PKCS10Attributes, $NO_CLASS_INIT, ::sun::security::util::DerEncoder)
public:
	PKCS10Attributes();
	void init$();
	void init$($Array<::sun::security::pkcs10::PKCS10Attribute>* attrs);
	void init$(::sun::security::util::DerInputStream* in);
	virtual void deleteAttribute($String* name);
	virtual void derEncode(::java::io::OutputStream* out) override;
	virtual void encode(::java::io::OutputStream* out);
	virtual bool equals(Object$* other) override;
	virtual $Object* getAttribute($String* name);
	virtual ::java::util::Collection* getAttributes();
	virtual ::java::util::Enumeration* getElements();
	virtual int32_t hashCode() override;
	virtual void setAttribute($String* name, Object$* obj);
	virtual $String* toString() override;
	::java::util::Hashtable* map = nullptr;
};

		} // pkcs10
	} // security
} // sun

#endif // _sun_security_pkcs10_PKCS10Attributes_h_