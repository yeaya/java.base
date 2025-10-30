#include <sun/security/pkcs12/PKCS12KeyStore$1.h>

#include <java/security/Security.h>
#include <sun/security/pkcs12/PKCS12KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;
using $PKCS12KeyStore = ::sun::security::pkcs12::PKCS12KeyStore;

namespace sun {
	namespace security {
		namespace pkcs12 {

$MethodInfo _PKCS12KeyStore$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PKCS12KeyStore$1::*)()>(&PKCS12KeyStore$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PKCS12KeyStore$1_EnclosingMethodInfo_ = {
	"sun.security.pkcs12.PKCS12KeyStore",
	"defaultKeyProtectionAlgorithm",
	"()Ljava/lang/String;"
};

$InnerClassInfo _PKCS12KeyStore$1_InnerClassesInfo_[] = {
	{"sun.security.pkcs12.PKCS12KeyStore$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PKCS12KeyStore$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.pkcs12.PKCS12KeyStore$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_PKCS12KeyStore$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_PKCS12KeyStore$1_EnclosingMethodInfo_,
	_PKCS12KeyStore$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.pkcs12.PKCS12KeyStore"
};

$Object* allocate$PKCS12KeyStore$1($Class* clazz) {
	return $of($alloc(PKCS12KeyStore$1));
}

void PKCS12KeyStore$1::init$() {
}

$Object* PKCS12KeyStore$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($String, result, nullptr);
	$var($String, name1, "keystore.pkcs12.keyProtectionAlgorithm"_s);
	$var($String, name2, "keystore.PKCS12.keyProtectionAlgorithm"_s);
	$assign(result, $System::getProperty(name1));
	if (result != nullptr) {
		return $of(result);
	}
	$assign(result, $System::getProperty(name2));
	if (result != nullptr) {
		return $of(result);
	}
	$assign(result, $Security::getProperty(name1));
	if (result != nullptr) {
		return $of(result);
	}
	return $of($Security::getProperty(name2));
}

PKCS12KeyStore$1::PKCS12KeyStore$1() {
}

$Class* PKCS12KeyStore$1::load$($String* name, bool initialize) {
	$loadClass(PKCS12KeyStore$1, name, initialize, &_PKCS12KeyStore$1_ClassInfo_, allocate$PKCS12KeyStore$1);
	return class$;
}

$Class* PKCS12KeyStore$1::class$ = nullptr;

		} // pkcs12
	} // security
} // sun