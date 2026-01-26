#include <com/sun/crypto/provider/JceKeyStore$PrivateKeyEntry.h>

#include <com/sun/crypto/provider/JceKeyStore.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Date.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _JceKeyStore$PrivateKeyEntry_FieldInfo_[] = {
	{"date", "Ljava/util/Date;", nullptr, 0, $field(JceKeyStore$PrivateKeyEntry, date)},
	{"protectedKey", "[B", nullptr, 0, $field(JceKeyStore$PrivateKeyEntry, protectedKey)},
	{"chain", "[Ljava/security/cert/Certificate;", nullptr, 0, $field(JceKeyStore$PrivateKeyEntry, chain)},
	{}
};

$MethodInfo _JceKeyStore$PrivateKeyEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(JceKeyStore$PrivateKeyEntry, init$, void)},
	{}
};

$InnerClassInfo _JceKeyStore$PrivateKeyEntry_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.JceKeyStore$PrivateKeyEntry", "com.sun.crypto.provider.JceKeyStore", "PrivateKeyEntry", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _JceKeyStore$PrivateKeyEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.JceKeyStore$PrivateKeyEntry",
	"java.lang.Object",
	nullptr,
	_JceKeyStore$PrivateKeyEntry_FieldInfo_,
	_JceKeyStore$PrivateKeyEntry_MethodInfo_,
	nullptr,
	nullptr,
	_JceKeyStore$PrivateKeyEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.JceKeyStore"
};

$Object* allocate$JceKeyStore$PrivateKeyEntry($Class* clazz) {
	return $of($alloc(JceKeyStore$PrivateKeyEntry));
}

void JceKeyStore$PrivateKeyEntry::init$() {
}

JceKeyStore$PrivateKeyEntry::JceKeyStore$PrivateKeyEntry() {
}

$Class* JceKeyStore$PrivateKeyEntry::load$($String* name, bool initialize) {
	$loadClass(JceKeyStore$PrivateKeyEntry, name, initialize, &_JceKeyStore$PrivateKeyEntry_ClassInfo_, allocate$JceKeyStore$PrivateKeyEntry);
	return class$;
}

$Class* JceKeyStore$PrivateKeyEntry::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com