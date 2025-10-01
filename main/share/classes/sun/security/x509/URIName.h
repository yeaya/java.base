#ifndef _sun_security_x509_URIName_h_
#define _sun_security_x509_URIName_h_
//$ class sun.security.x509.URIName
//$ extends sun.security.x509.GeneralNameInterface

#include <sun/security/x509/GeneralNameInterface.h>

namespace java {
	namespace net {
		class URI;
	}
}
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
			class DNSName;
			class IPAddressName;
		}
	}
}

namespace sun {
	namespace security {
		namespace x509 {

class $export URIName : public ::sun::security::x509::GeneralNameInterface {
	$class(URIName, $NO_CLASS_INIT, ::sun::security::x509::GeneralNameInterface)
public:
	URIName();
	void init$(::sun::security::util::DerValue* derValue);
	void init$($String* name);
	void init$(::java::net::URI* uri, $String* host, ::sun::security::x509::DNSName* hostDNS);
	virtual int32_t constrains(::sun::security::x509::GeneralNameInterface* inputName) override;
	virtual void encode(::sun::security::util::DerOutputStream* out) override;
	virtual bool equals(Object$* obj) override;
	virtual $String* getHost();
	virtual $Object* getHostObject();
	virtual $String* getName();
	virtual $String* getScheme();
	virtual int32_t getType() override;
	virtual ::java::net::URI* getURI();
	virtual int32_t hashCode() override;
	static ::sun::security::x509::URIName* nameConstraint(::sun::security::util::DerValue* value);
	virtual int32_t subtreeDepth() override;
	virtual $String* toString() override;
	::java::net::URI* uri = nullptr;
	$String* host = nullptr;
	::sun::security::x509::DNSName* hostDNS = nullptr;
	::sun::security::x509::IPAddressName* hostIP = nullptr;
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_URIName_h_