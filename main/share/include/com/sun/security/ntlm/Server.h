#ifndef _com_sun_security_ntlm_Server_h_
#define _com_sun_security_ntlm_Server_h_
//$ class com.sun.security.ntlm.Server
//$ extends com.sun.security.ntlm.NTLM

#include <com/sun/security/ntlm/NTLM.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {

class $import Server : public ::com::sun::security::ntlm::NTLM {
	$class(Server, $NO_CLASS_INIT, ::com::sun::security::ntlm::NTLM)
public:
	Server();
	void init$($String* version, $String* domain);
	virtual void debug($bytes* bytes) override;
	virtual void debug($String* format, $ObjectArray* args) override;
	virtual $chars* getPassword($String* domain, $String* username) {return nullptr;}
	virtual $bytes* type2($bytes* type1, $bytes* nonce);
	virtual $StringArray* verify($bytes* type3, $bytes* nonce);
	$String* domain = nullptr;
	bool allVersion = false;
};

			} // ntlm
		} // security
	} // sun
} // com

#endif // _com_sun_security_ntlm_Server_h_