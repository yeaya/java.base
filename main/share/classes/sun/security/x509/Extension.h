#ifndef _sun_security_x509_Extension_h_
#define _sun_security_x509_Extension_h_
//$ class sun.security.x509.Extension
//$ extends java.security.cert.Extension

#include <java/lang/Array.h>
#include <java/security/cert/Extension.h>

namespace java {
	namespace io {
		class OutputStream;
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

class $export Extension : public ::java::security::cert::Extension {
	$class(Extension, $NO_CLASS_INIT, ::java::security::cert::Extension)
public:
	Extension();
	void init$();
	void init$(::sun::security::util::DerValue* derVal);
	void init$(::sun::security::util::ObjectIdentifier* extensionId, bool critical, $bytes* extensionValue);
	void init$(::sun::security::x509::Extension* ext);
	virtual void encode(::java::io::OutputStream* out) override;
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* other) override;
	virtual ::sun::security::util::ObjectIdentifier* getExtensionId();
	virtual $bytes* getExtensionValue();
	virtual $String* getId() override;
	virtual $bytes* getValue() override;
	virtual int32_t hashCode() override;
	virtual bool isCritical() override;
	static ::sun::security::x509::Extension* newExtension(::sun::security::util::ObjectIdentifier* extensionId, bool critical, $bytes* rawExtensionValue);
	virtual $String* toString() override;
	::sun::security::util::ObjectIdentifier* extensionId = nullptr;
	bool critical = false;
	$bytes* extensionValue = nullptr;
	static const int32_t hashMagic = 31;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_Extension_h_