#include <com/sun/crypto/provider/JceKeyStore$SecretKeyEntry.h>

#include <com/sun/crypto/provider/JceKeyStore.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Date.h>
#include <javax/crypto/SealedObject.h>
#include <jcpp.h>

using $JceKeyStore = ::com::sun::crypto::provider::JceKeyStore;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $SealedObject = ::javax::crypto::SealedObject;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _JceKeyStore$SecretKeyEntry_FieldInfo_[] = {
	{"date", "Ljava/util/Date;", nullptr, 0, $field(JceKeyStore$SecretKeyEntry, date)},
	{"sealedKey", "Ljavax/crypto/SealedObject;", nullptr, 0, $field(JceKeyStore$SecretKeyEntry, sealedKey)},
	{"maxLength", "I", nullptr, 0, $field(JceKeyStore$SecretKeyEntry, maxLength)},
	{}
};

$MethodInfo _JceKeyStore$SecretKeyEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JceKeyStore$SecretKeyEntry::*)()>(&JceKeyStore$SecretKeyEntry::init$))},
	{}
};

$InnerClassInfo _JceKeyStore$SecretKeyEntry_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.JceKeyStore$SecretKeyEntry", "com.sun.crypto.provider.JceKeyStore", "SecretKeyEntry", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _JceKeyStore$SecretKeyEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.JceKeyStore$SecretKeyEntry",
	"java.lang.Object",
	nullptr,
	_JceKeyStore$SecretKeyEntry_FieldInfo_,
	_JceKeyStore$SecretKeyEntry_MethodInfo_,
	nullptr,
	nullptr,
	_JceKeyStore$SecretKeyEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.JceKeyStore"
};

$Object* allocate$JceKeyStore$SecretKeyEntry($Class* clazz) {
	return $of($alloc(JceKeyStore$SecretKeyEntry));
}

void JceKeyStore$SecretKeyEntry::init$() {
}

JceKeyStore$SecretKeyEntry::JceKeyStore$SecretKeyEntry() {
}

$Class* JceKeyStore$SecretKeyEntry::load$($String* name, bool initialize) {
	$loadClass(JceKeyStore$SecretKeyEntry, name, initialize, &_JceKeyStore$SecretKeyEntry_ClassInfo_, allocate$JceKeyStore$SecretKeyEntry);
	return class$;
}

$Class* JceKeyStore$SecretKeyEntry::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com