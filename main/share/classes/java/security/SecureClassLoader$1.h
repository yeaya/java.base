#ifndef _java_security_SecureClassLoader$1_h_
#define _java_security_SecureClassLoader$1_h_
//$ class java.security.SecureClassLoader$1
//$ extends java.util.function.Function

#include <java/util/function/Function.h>

namespace java {
	namespace security {
		class CodeSource;
		class ProtectionDomain;
		class SecureClassLoader;
		class SecureClassLoader$CodeSourceKey;
	}
}

namespace java {
	namespace security {

class SecureClassLoader$1 : public ::java::util::function::Function {
	$class(SecureClassLoader$1, $NO_CLASS_INIT, ::java::util::function::Function)
public:
	SecureClassLoader$1();
	void init$(::java::security::SecureClassLoader* this$0, ::java::security::CodeSource* val$cs);
	virtual ::java::security::ProtectionDomain* apply(::java::security::SecureClassLoader$CodeSourceKey* key);
	virtual $Object* apply(Object$* key) override;
	::java::security::SecureClassLoader* this$0 = nullptr;
	::java::security::CodeSource* val$cs = nullptr;
};

	} // security
} // java

#endif // _java_security_SecureClassLoader$1_h_