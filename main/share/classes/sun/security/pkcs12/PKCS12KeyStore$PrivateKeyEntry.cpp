#include <sun/security/pkcs12/PKCS12KeyStore$PrivateKeyEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/Certificate.h>
#include <sun/security/pkcs12/PKCS12KeyStore$KeyEntry.h>
#include <sun/security/pkcs12/PKCS12KeyStore.h>
#include <jcpp.h>

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Certificate = ::java::security::cert::Certificate;
using $PKCS12KeyStore = ::sun::security::pkcs12::PKCS12KeyStore;
using $PKCS12KeyStore$KeyEntry = ::sun::security::pkcs12::PKCS12KeyStore$KeyEntry;

namespace sun {
	namespace security {
		namespace pkcs12 {

$FieldInfo _PKCS12KeyStore$PrivateKeyEntry_FieldInfo_[] = {
	{"protectedPrivKey", "[B", nullptr, 0, $field(PKCS12KeyStore$PrivateKeyEntry, protectedPrivKey)},
	{"chain", "[Ljava/security/cert/Certificate;", nullptr, 0, $field(PKCS12KeyStore$PrivateKeyEntry, chain)},
	{}
};

$MethodInfo _PKCS12KeyStore$PrivateKeyEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PKCS12KeyStore$PrivateKeyEntry::*)()>(&PKCS12KeyStore$PrivateKeyEntry::init$))},
	{}
};

$InnerClassInfo _PKCS12KeyStore$PrivateKeyEntry_InnerClassesInfo_[] = {
	{"sun.security.pkcs12.PKCS12KeyStore$PrivateKeyEntry", "sun.security.pkcs12.PKCS12KeyStore", "PrivateKeyEntry", $PRIVATE | $STATIC},
	{"sun.security.pkcs12.PKCS12KeyStore$KeyEntry", "sun.security.pkcs12.PKCS12KeyStore", "KeyEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PKCS12KeyStore$PrivateKeyEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.pkcs12.PKCS12KeyStore$PrivateKeyEntry",
	"sun.security.pkcs12.PKCS12KeyStore$KeyEntry",
	nullptr,
	_PKCS12KeyStore$PrivateKeyEntry_FieldInfo_,
	_PKCS12KeyStore$PrivateKeyEntry_MethodInfo_,
	nullptr,
	nullptr,
	_PKCS12KeyStore$PrivateKeyEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.pkcs12.PKCS12KeyStore"
};

$Object* allocate$PKCS12KeyStore$PrivateKeyEntry($Class* clazz) {
	return $of($alloc(PKCS12KeyStore$PrivateKeyEntry));
}

void PKCS12KeyStore$PrivateKeyEntry::init$() {
	$PKCS12KeyStore$KeyEntry::init$();
}

PKCS12KeyStore$PrivateKeyEntry::PKCS12KeyStore$PrivateKeyEntry() {
}

$Class* PKCS12KeyStore$PrivateKeyEntry::load$($String* name, bool initialize) {
	$loadClass(PKCS12KeyStore$PrivateKeyEntry, name, initialize, &_PKCS12KeyStore$PrivateKeyEntry_ClassInfo_, allocate$PKCS12KeyStore$PrivateKeyEntry);
	return class$;
}

$Class* PKCS12KeyStore$PrivateKeyEntry::class$ = nullptr;

		} // pkcs12
	} // security
} // sun