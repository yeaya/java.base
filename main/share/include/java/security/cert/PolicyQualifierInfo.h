#ifndef _java_security_cert_PolicyQualifierInfo_h_
#define _java_security_cert_PolicyQualifierInfo_h_
//$ class java.security.cert.PolicyQualifierInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		namespace cert {

class $import PolicyQualifierInfo : public ::java::lang::Object {
	$class(PolicyQualifierInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PolicyQualifierInfo();
	void init$($bytes* encoded);
	$bytes* getEncoded();
	$bytes* getPolicyQualifier();
	$String* getPolicyQualifierId();
	virtual $String* toString() override;
	$bytes* mEncoded = nullptr;
	$String* mId = nullptr;
	$bytes* mData = nullptr;
	$String* pqiString = nullptr;
};

		} // cert
	} // security
} // java

#endif // _java_security_cert_PolicyQualifierInfo_h_