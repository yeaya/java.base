#ifndef _sun_security_x509_GeneralName_h_
#define _sun_security_x509_GeneralName_h_
//$ class sun.security.x509.GeneralName
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
			class GeneralNameInterface;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $import GeneralName : public ::java::lang::Object {
	$class(GeneralName, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GeneralName();
	void init$(::sun::security::x509::GeneralNameInterface* name);
	void init$(::sun::security::util::DerValue* encName);
	void init$(::sun::security::util::DerValue* encName, bool nameConstraint);
	virtual void encode(::sun::security::util::DerOutputStream* out);
	virtual bool equals(Object$* other) override;
	virtual ::sun::security::x509::GeneralNameInterface* getName();
	virtual int32_t getType();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	::sun::security::x509::GeneralNameInterface* name = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_GeneralName_h_