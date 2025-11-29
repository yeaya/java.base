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

$FieldInfo _RevocationChecker$RevocationProperties_FieldInfo_[] = {
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

$MethodInfo _RevocationChecker$RevocationProperties_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(RevocationChecker$RevocationProperties::*)()>(&RevocationChecker$RevocationProperties::init$))},
	{}
};

$InnerClassInfo _RevocationChecker$RevocationProperties_InnerClassesInfo_[] = {
	{"sun.security.provider.certpath.RevocationChecker$RevocationProperties", "sun.security.provider.certpath.RevocationChecker", "RevocationProperties", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _RevocationChecker$RevocationProperties_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.certpath.RevocationChecker$RevocationProperties",
	"java.lang.Object",
	nullptr,
	_RevocationChecker$RevocationProperties_FieldInfo_,
	_RevocationChecker$RevocationProperties_MethodInfo_,
	nullptr,
	nullptr,
	_RevocationChecker$RevocationProperties_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.certpath.RevocationChecker"
};

$Object* allocate$RevocationChecker$RevocationProperties($Class* clazz) {
	return $of($alloc(RevocationChecker$RevocationProperties));
}

void RevocationChecker$RevocationProperties::init$() {
}

RevocationChecker$RevocationProperties::RevocationChecker$RevocationProperties() {
}

$Class* RevocationChecker$RevocationProperties::load$($String* name, bool initialize) {
	$loadClass(RevocationChecker$RevocationProperties, name, initialize, &_RevocationChecker$RevocationProperties_ClassInfo_, allocate$RevocationChecker$RevocationProperties);
	return class$;
}

$Class* RevocationChecker$RevocationProperties::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun