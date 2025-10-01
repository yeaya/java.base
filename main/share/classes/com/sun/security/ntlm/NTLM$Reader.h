#ifndef _com_sun_security_ntlm_NTLM$Reader_h_
#define _com_sun_security_ntlm_NTLM$Reader_h_
//$ class com.sun.security.ntlm.NTLM$Reader
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {

class NTLM$Reader : public ::java::lang::Object {
	$class(NTLM$Reader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NTLM$Reader();
	void init$($bytes* data);
	virtual $bytes* readBytes(int32_t offset, int32_t len);
	virtual int32_t readInt(int32_t offset);
	virtual $bytes* readSecurityBuffer(int32_t offset);
	virtual $String* readSecurityBuffer(int32_t offset, bool unicode);
	virtual int32_t readShort(int32_t offset);
	$bytes* internal = nullptr;
};

			} // ntlm
		} // security
	} // sun
} // com

#endif // _com_sun_security_ntlm_NTLM$Reader_h_