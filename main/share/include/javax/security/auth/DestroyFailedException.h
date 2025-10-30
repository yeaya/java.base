#ifndef _javax_security_auth_DestroyFailedException_h_
#define _javax_security_auth_DestroyFailedException_h_
//$ class javax.security.auth.DestroyFailedException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace security {
		namespace auth {

class $import DestroyFailedException : public ::java::lang::Exception {
	$class(DestroyFailedException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	DestroyFailedException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x93E3D14013AADD16;
	DestroyFailedException(const DestroyFailedException& e);
	virtual void throw$() override;
	inline DestroyFailedException* operator ->() {
		return (DestroyFailedException*)throwing$;
	}
};

		} // auth
	} // security
} // javax

#endif // _javax_security_auth_DestroyFailedException_h_