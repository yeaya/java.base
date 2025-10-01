#ifndef _java_security_SecureRandom$StrongPatternHolder_h_
#define _java_security_SecureRandom$StrongPatternHolder_h_
//$ class java.security.SecureRandom$StrongPatternHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

namespace java {
	namespace security {

class SecureRandom$StrongPatternHolder : public ::java::lang::Object {
	$class(SecureRandom$StrongPatternHolder, 0, ::java::lang::Object)
public:
	SecureRandom$StrongPatternHolder();
	void init$();
	static ::java::util::regex::Pattern* pattern;
};

	} // security
} // java

#endif // _java_security_SecureRandom$StrongPatternHolder_h_