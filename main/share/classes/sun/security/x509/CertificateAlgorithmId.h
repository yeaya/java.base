#ifndef _sun_security_x509_CertificateAlgorithmId_h_
#define _sun_security_x509_CertificateAlgorithmId_h_
//$ class sun.security.x509.CertificateAlgorithmId
//$ extends sun.security.x509.CertAttrSet

#include <sun/security/x509/CertAttrSet.h>

#pragma push_macro("IDENT")
#undef IDENT
#pragma push_macro("ALGORITHM")
#undef ALGORITHM
#pragma push_macro("NAME")
#undef NAME

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
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
		namespace x509 {
			class AlgorithmId;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export CertificateAlgorithmId : public ::sun::security::x509::CertAttrSet {
	$class(CertificateAlgorithmId, 0, ::sun::security::x509::CertAttrSet)
public:
	CertificateAlgorithmId();
	void init$(::sun::security::x509::AlgorithmId* algId);
	void init$(::sun::security::util::DerInputStream* in);
	void init$(::java::io::InputStream* in);
	virtual void delete$($String* name) override;
	virtual void encode(::java::io::OutputStream* out) override;
	virtual $Object* get($String* name) override;
	virtual ::java::util::Enumeration* getElements() override;
	virtual $String* getName() override;
	virtual void set($String* name, Object$* obj) override;
	virtual $String* toString() override;
	::sun::security::x509::AlgorithmId* algId = nullptr;
	static $String* IDENT;
	static $String* NAME;
	static $String* ALGORITHM;
};

		} // x509
	} // security
} // sun

#pragma pop_macro("IDENT")
#pragma pop_macro("ALGORITHM")
#pragma pop_macro("NAME")

#endif // _sun_security_x509_CertificateAlgorithmId_h_