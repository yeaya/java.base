#include <sun/security/provider/certpath/RevocationChecker$RevocationProperties.h>
#include <sun/security/provider/certpath/RevocationChecker.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

void RevocationChecker$RevocationProperties::init$() {
}

RevocationChecker$RevocationProperties::RevocationChecker$RevocationProperties() {
}

$Class* RevocationChecker$RevocationProperties::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"onlyEE", "Z", nullptr, 0, $field(RevocationChecker$RevocationProperties, onlyEE)},
		{"ocspEnabled", "Z", nullptr, 0, $field(RevocationChecker$RevocationProperties, ocspEnabled)},
		{"crlDPEnabled", "Z", nullptr, 0, $field(RevocationChecker$RevocationProperties, crlDPEnabled)},
		{"ocspUrl", "Ljava/lang/String;", nullptr, 0, $field(RevocationChecker$RevocationProperties, ocspUrl)},
		{"ocspSubject", "Ljava/lang/String;", nullptr, 0, $field(RevocationChecker$RevocationProperties, ocspSubject)},
		{"ocspIssuer", "Ljava/lang/String;", nullptr, 0, $field(RevocationChecker$RevocationProperties, ocspIssuer)},
		{"ocspSerial", "Ljava/lang/String;", nullptr, 0, $field(RevocationChecker$RevocationProperties, ocspSerial)},
		{"ocspNonce", "Z", nullptr, 0, $field(RevocationChecker$RevocationProperties, ocspNonce)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(RevocationChecker$RevocationProperties, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.certpath.RevocationChecker$RevocationProperties", "sun.security.provider.certpath.RevocationChecker", "RevocationProperties", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.certpath.RevocationChecker$RevocationProperties",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.certpath.RevocationChecker"
	};
	$loadClass(RevocationChecker$RevocationProperties, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RevocationChecker$RevocationProperties);
	});
	return class$;
}

$Class* RevocationChecker$RevocationProperties::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun