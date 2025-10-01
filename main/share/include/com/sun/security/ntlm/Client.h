#ifndef _com_sun_security_ntlm_Client_h_
#define _com_sun_security_ntlm_Client_h_
//$ class com.sun.security.ntlm.Client
//$ extends com.sun.security.ntlm.NTLM

#include <com/sun/security/ntlm/NTLM.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {

class $import Client : public ::com::sun::security::ntlm::NTLM {
	$class(Client, $NO_CLASS_INIT, ::com::sun::security::ntlm::NTLM)
public:
	Client();
	void init$($String* version, $String* hostname, $String* username, $String* domain, $chars* password);
	virtual void debug($bytes* bytes) override;
	virtual void debug($String* format, $ObjectArray* args) override;
	void dispose();
	$String* getDomain();
	$bytes* type1();
	$bytes* type3($bytes* type2, $bytes* nonce);
	$String* hostname = nullptr;
	$String* username = nullptr;
	$String* domain = nullptr;
	$bytes* pw1 = nullptr;
	$bytes* pw2 = nullptr;
};

			} // ntlm
		} // security
	} // sun
} // com

#endif // _com_sun_security_ntlm_Client_h_