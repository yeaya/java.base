#include <com/sun/crypto/provider/JceKeyStore$SecretKeyEntry.h>
#include <com/sun/crypto/provider/JceKeyStore.h>
#include <java/util/Date.h>
#include <javax/crypto/SealedObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void JceKeyStore$SecretKeyEntry::init$() {
}

JceKeyStore$SecretKeyEntry::JceKeyStore$SecretKeyEntry() {
}

$Class* JceKeyStore$SecretKeyEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"date", "Ljava/util/Date;", nullptr, 0, $field(JceKeyStore$SecretKeyEntry, date)},
		{"sealedKey", "Ljavax/crypto/SealedObject;", nullptr, 0, $field(JceKeyStore$SecretKeyEntry, sealedKey)},
		{"maxLength", "I", nullptr, 0, $field(JceKeyStore$SecretKeyEntry, maxLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JceKeyStore$SecretKeyEntry, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.JceKeyStore$SecretKeyEntry", "com.sun.crypto.provider.JceKeyStore", "SecretKeyEntry", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.JceKeyStore$SecretKeyEntry",
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
		"com.sun.crypto.provider.JceKeyStore"
	};
	$loadClass(JceKeyStore$SecretKeyEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JceKeyStore$SecretKeyEntry);
	});
	return class$;
}

$Class* JceKeyStore$SecretKeyEntry::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com