#ifndef _com_sun_security_ntlm_NTLM$Writer_h_
#define _com_sun_security_ntlm_NTLM$Writer_h_
//$ class com.sun.security.ntlm.NTLM$Writer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {

class NTLM$Writer : public ::java::lang::Object {
	$class(NTLM$Writer, 0, ::java::lang::Object)
public:
	NTLM$Writer();
	void init$(int32_t type, int32_t len);
	virtual $bytes* getBytes();
	virtual void writeBytes(int32_t offset, $bytes* data);
	virtual void writeInt(int32_t offset, int32_t number);
	virtual void writeSecurityBuffer(int32_t offset, $bytes* data);
	virtual void writeSecurityBuffer(int32_t offset, $String* str, bool unicode);
	virtual void writeShort(int32_t offset, int32_t number);
	static bool $assertionsDisabled;
	$bytes* internal = nullptr;
	int32_t current = 0;
};

			} // ntlm
		} // security
	} // sun
} // com

#endif // _com_sun_security_ntlm_NTLM$Writer_h_