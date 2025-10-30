#ifndef _sun_security_x509_CertException_h_
#define _sun_security_x509_CertException_h_
//$ class sun.security.x509.CertException
//$ extends java.lang.SecurityException

#include <java/lang/SecurityException.h>

namespace sun {
	namespace security {
		namespace x509 {

class $import CertException : public ::java::lang::SecurityException {
	$class(CertException, $NO_CLASS_INIT, ::java::lang::SecurityException)
public:
	CertException();
	void init$(int32_t code, $String* moredata);
	void init$(int32_t code);
	virtual $String* getMessage() override;
	virtual $String* getMoreData();
	virtual int32_t getVerfCode();
	virtual $String* getVerfDescription();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x602F1F8C76DB42BE;
	static const int32_t verf_INVALID_SIG = 1;
	static const int32_t verf_INVALID_REVOKED = 2;
	static const int32_t verf_INVALID_NOTBEFORE = 3;
	static const int32_t verf_INVALID_EXPIRED = 4;
	static const int32_t verf_CA_UNTRUSTED = 5;
	static const int32_t verf_CHAIN_LENGTH = 6;
	static const int32_t verf_PARSE_ERROR = 7;
	static const int32_t err_CONSTRUCTION = 8;
	static const int32_t err_INVALID_PUBLIC_KEY = 9;
	static const int32_t err_INVALID_VERSION = 10;
	static const int32_t err_INVALID_FORMAT = 11;
	static const int32_t err_ENCODING = 12;
	int32_t verfCode = 0;
	$String* moreData = nullptr;
	CertException(const CertException& e);
	virtual void throw$() override;
	inline CertException* operator ->() {
		return (CertException*)throwing$;
	}
};

		} // x509
	} // security
} // sun

#endif // _sun_security_x509_CertException_h_