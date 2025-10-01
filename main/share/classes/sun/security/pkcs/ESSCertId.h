#ifndef _sun_security_pkcs_ESSCertId_h_
#define _sun_security_pkcs_ESSCertId_h_
//$ class sun.security.pkcs.ESSCertId
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace security {
		namespace util {
			class DerValue;
			class HexDumpEncoder;
		}
	}
}
namespace sun {
	namespace security {
		namespace x509 {
			class GeneralNames;
			class SerialNumber;
		}
	}
}

namespace sun {
	namespace security {
		namespace pkcs {

class ESSCertId : public ::java::lang::Object {
	$class(ESSCertId, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ESSCertId();
	void init$(::sun::security::util::DerValue* certId);
	virtual $String* toString() override;
	static $volatile(::sun::security::util::HexDumpEncoder*) hexDumper;
	$bytes* certHash = nullptr;
	::sun::security::x509::GeneralNames* issuer = nullptr;
	::sun::security::x509::SerialNumber* serialNumber = nullptr;
};

		} // pkcs
	} // security
} // sun

#endif // _sun_security_pkcs_ESSCertId_h_