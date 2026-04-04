#include <com/sun/crypto/provider/PBKDF2KeyImpl$1.h>
#include <com/sun/crypto/provider/PBKDF2KeyImpl.h>
#include <java/security/Key.h>
#include <java/security/MessageDigest.h>
#include <java/util/Arrays.h>
#include <java/util/Locale.h>
#include <javax/crypto/Mac.h>
#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;
using $Mac = ::javax::crypto::Mac;
using $SecretKey = ::javax::crypto::SecretKey;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void PBKDF2KeyImpl$1::init$($Mac* val$prf, $bytes* val$password) {
	$set(this, val$prf, val$prf);
	$set(this, val$password, val$password);
}

$String* PBKDF2KeyImpl$1::getAlgorithm() {
	return $nc(this->val$prf)->getAlgorithm();
}

$String* PBKDF2KeyImpl$1::getFormat() {
	return "RAW"_s;
}

$bytes* PBKDF2KeyImpl$1::getEncoded() {
	return $cast($bytes, $nc(this->val$password)->clone());
}

int32_t PBKDF2KeyImpl$1::hashCode() {
	$useLocalObjectStack();
	int32_t var$0 = $Arrays::hashCode(this->val$password) * 41;
	$init($Locale);
	return var$0 + $($$nc($nc(this->val$prf)->getAlgorithm())->toLowerCase($Locale::ENGLISH))->hashCode();
}

bool PBKDF2KeyImpl$1::equals(Object$* obj) {
	$useLocalObjectStack();
	if ($equals(this, obj)) {
		return true;
	}
	if ($of(this)->getClass() != $nc($of(obj))->getClass()) {
		return false;
	}
	$var($SecretKey, sk, $cast($SecretKey, obj));
	bool var$0 = $$nc($nc(this->val$prf)->getAlgorithm())->equalsIgnoreCase($(sk->getAlgorithm()));
	return var$0 && $MessageDigest::isEqual(this->val$password, $(sk->getEncoded()));
}

PBKDF2KeyImpl$1::PBKDF2KeyImpl$1() {
}

$Class* PBKDF2KeyImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$password", "[B", nullptr, $FINAL | $SYNTHETIC, $field(PBKDF2KeyImpl$1, val$password)},
		{"val$prf", "Ljavax/crypto/Mac;", nullptr, $FINAL | $SYNTHETIC, $field(PBKDF2KeyImpl$1, val$prf)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PBKDF2KeyImpl$1, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/crypto/Mac;[B)V", "()V", 0, $method(PBKDF2KeyImpl$1, init$, void, $Mac*, $bytes*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PBKDF2KeyImpl$1, equals, bool, Object$*)},
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PBKDF2KeyImpl$1, getAlgorithm, $String*)},
		{"getEncoded", "()[B", nullptr, $PUBLIC, $virtualMethod(PBKDF2KeyImpl$1, getEncoded, $bytes*)},
		{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PBKDF2KeyImpl$1, getFormat, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(PBKDF2KeyImpl$1, hashCode, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.crypto.provider.PBKDF2KeyImpl",
		"deriveKey",
		"(Ljavax/crypto/Mac;[B[BII)[B"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.PBKDF2KeyImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.crypto.provider.PBKDF2KeyImpl$1",
		"java.lang.Object",
		"javax.crypto.SecretKey",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.PBKDF2KeyImpl"
	};
	$loadClass(PBKDF2KeyImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PBKDF2KeyImpl$1));
	});
	return class$;
}

$Class* PBKDF2KeyImpl$1::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com