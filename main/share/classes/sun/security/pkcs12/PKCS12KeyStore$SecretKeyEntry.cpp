#include <sun/security/pkcs12/PKCS12KeyStore$SecretKeyEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/pkcs12/PKCS12KeyStore$KeyEntry.h>
#include <sun/security/pkcs12/PKCS12KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PKCS12KeyStore = ::sun::security::pkcs12::PKCS12KeyStore;
using $PKCS12KeyStore$KeyEntry = ::sun::security::pkcs12::PKCS12KeyStore$KeyEntry;

namespace sun {
	namespace security {
		namespace pkcs12 {

$FieldInfo _PKCS12KeyStore$SecretKeyEntry_FieldInfo_[] = {
	{"protectedSecretKey", "[B", nullptr, 0, $field(PKCS12KeyStore$SecretKeyEntry, protectedSecretKey)},
	{}
};

$MethodInfo _PKCS12KeyStore$SecretKeyEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PKCS12KeyStore$SecretKeyEntry::*)()>(&PKCS12KeyStore$SecretKeyEntry::init$))},
	{}
};

$InnerClassInfo _PKCS12KeyStore$SecretKeyEntry_InnerClassesInfo_[] = {
	{"sun.security.pkcs12.PKCS12KeyStore$SecretKeyEntry", "sun.security.pkcs12.PKCS12KeyStore", "SecretKeyEntry", $PRIVATE | $STATIC},
	{"sun.security.pkcs12.PKCS12KeyStore$KeyEntry", "sun.security.pkcs12.PKCS12KeyStore", "KeyEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PKCS12KeyStore$SecretKeyEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.pkcs12.PKCS12KeyStore$SecretKeyEntry",
	"sun.security.pkcs12.PKCS12KeyStore$KeyEntry",
	nullptr,
	_PKCS12KeyStore$SecretKeyEntry_FieldInfo_,
	_PKCS12KeyStore$SecretKeyEntry_MethodInfo_,
	nullptr,
	nullptr,
	_PKCS12KeyStore$SecretKeyEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.pkcs12.PKCS12KeyStore"
};

$Object* allocate$PKCS12KeyStore$SecretKeyEntry($Class* clazz) {
	return $of($alloc(PKCS12KeyStore$SecretKeyEntry));
}

void PKCS12KeyStore$SecretKeyEntry::init$() {
	$PKCS12KeyStore$KeyEntry::init$();
}

PKCS12KeyStore$SecretKeyEntry::PKCS12KeyStore$SecretKeyEntry() {
}

$Class* PKCS12KeyStore$SecretKeyEntry::load$($String* name, bool initialize) {
	$loadClass(PKCS12KeyStore$SecretKeyEntry, name, initialize, &_PKCS12KeyStore$SecretKeyEntry_ClassInfo_, allocate$PKCS12KeyStore$SecretKeyEntry);
	return class$;
}

$Class* PKCS12KeyStore$SecretKeyEntry::class$ = nullptr;

		} // pkcs12
	} // security
} // sun