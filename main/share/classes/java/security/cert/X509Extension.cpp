#include <java/security/cert/X509Extension.h>

#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _X509Extension_MethodInfo_[] = {
	{"getCriticalExtensionOIDs", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"getExtensionValue", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getNonCriticalExtensionOIDs", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"hasUnsupportedCriticalExtension", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _X509Extension_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.cert.X509Extension",
	nullptr,
	nullptr,
	nullptr,
	_X509Extension_MethodInfo_
};

$Object* allocate$X509Extension($Class* clazz) {
	return $of($alloc(X509Extension));
}

$Class* X509Extension::load$($String* name, bool initialize) {
	$loadClass(X509Extension, name, initialize, &_X509Extension_ClassInfo_, allocate$X509Extension);
	return class$;
}

$Class* X509Extension::class$ = nullptr;

		} // cert
	} // security
} // java