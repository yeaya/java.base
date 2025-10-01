#ifndef _java_security_SecureClassLoader$CodeSourceKey_h_
#define _java_security_SecureClassLoader$CodeSourceKey_h_
//$ class java.security.SecureClassLoader$CodeSourceKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class CodeSource;
	}
}

namespace java {
	namespace security {

class SecureClassLoader$CodeSourceKey : public ::java::lang::Object {
	$class(SecureClassLoader$CodeSourceKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SecureClassLoader$CodeSourceKey();
	void init$(::java::security::CodeSource* cs);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	::java::security::CodeSource* cs = nullptr;
};

	} // security
} // java

#endif // _java_security_SecureClassLoader$CodeSourceKey_h_