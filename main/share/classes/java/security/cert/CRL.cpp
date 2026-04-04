#include <java/security/cert/CRL.h>
#include <java/security/cert/Certificate.h>
#include <jcpp.h>

#undef CRL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Certificate = ::java::security::cert::Certificate;

namespace java {
	namespace security {
		namespace cert {

$String* CRL::toString() {
	 return this->$Object::toString();
}

void CRL::init$($String* type) {
	$set(this, type, type);
}

$String* CRL::getType() {
	return this->type;
}

CRL::CRL() {
}

$Class* CRL::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CRL, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(CRL, init$, void, $String*)},
		{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(CRL, getType, $String*)},
		{"isRevoked", "(Ljava/security/cert/Certificate;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CRL, isRevoked, bool, $Certificate*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.security.cert.CRL",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CRL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CRL);
	});
	return class$;
}

$Class* CRL::class$ = nullptr;

		} // cert
	} // security
} // java