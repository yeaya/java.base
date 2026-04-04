#include <sun/security/provider/certpath/PKIX$CertStoreTypeException.h>
#include <java/security/cert/CertStoreException.h>
#include <sun/security/provider/certpath/PKIX.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertStoreException = ::java::security::cert::CertStoreException;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

void PKIX$CertStoreTypeException::init$($String* type, $CertStoreException* cse) {
	$useLocalObjectStack();
	$var($String, var$0, $nc(cse)->getMessage());
	$CertStoreException::init$(var$0, $(cse->getCause()));
	$set(this, type, type);
}

$String* PKIX$CertStoreTypeException::getType() {
	return this->type;
}

PKIX$CertStoreTypeException::PKIX$CertStoreTypeException() {
}

PKIX$CertStoreTypeException::PKIX$CertStoreTypeException(const PKIX$CertStoreTypeException& e) : $CertStoreException(e) {
}

void PKIX$CertStoreTypeException::throw$() {
	throw *this;
}

$Class* PKIX$CertStoreTypeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PKIX$CertStoreTypeException, serialVersionUID)},
		{"type", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PKIX$CertStoreTypeException, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/security/cert/CertStoreException;)V", nullptr, 0, $method(PKIX$CertStoreTypeException, init$, void, $String*, $CertStoreException*)},
		{"getType", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(PKIX$CertStoreTypeException, getType, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.PKIX$CertStoreTypeException", "sun.security.provider.certpath.PKIX", "CertStoreTypeException", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.certpath.PKIX$CertStoreTypeException",
		"java.security.cert.CertStoreException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.PKIX"
	};
	$loadClass(PKIX$CertStoreTypeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PKIX$CertStoreTypeException);
	});
	return class$;
}

$Class* PKIX$CertStoreTypeException::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun