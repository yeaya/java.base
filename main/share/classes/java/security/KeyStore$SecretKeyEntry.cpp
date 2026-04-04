#include <java/security/KeyStore$SecretKeyEntry.h>
#include <java/security/KeyStore$Entry$Attribute.h>
#include <java/security/KeyStore.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $SecretKey = ::javax::crypto::SecretKey;

namespace java {
	namespace security {

void KeyStore$SecretKeyEntry::init$($SecretKey* secretKey) {
	if (secretKey == nullptr) {
		$throwNew($NullPointerException, "invalid null input"_s);
	}
	$set(this, sKey, secretKey);
	$set(this, attributes, $Collections::emptySet());
}

void KeyStore$SecretKeyEntry::init$($SecretKey* secretKey, $Set* attributes) {
	if (secretKey == nullptr || attributes == nullptr) {
		$throwNew($NullPointerException, "invalid null input"_s);
	}
	$set(this, sKey, secretKey);
	$set(this, attributes, $Collections::unmodifiableSet($$new($HashSet, attributes)));
}

$SecretKey* KeyStore$SecretKeyEntry::getSecretKey() {
	return this->sKey;
}

$Set* KeyStore$SecretKeyEntry::getAttributes() {
	return this->attributes;
}

$String* KeyStore$SecretKeyEntry::toString() {
	return $str({"Secret key entry with algorithm "_s, $($nc(this->sKey)->getAlgorithm())});
}

KeyStore$SecretKeyEntry::KeyStore$SecretKeyEntry() {
}

$Class* KeyStore$SecretKeyEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sKey", "Ljavax/crypto/SecretKey;", nullptr, $PRIVATE | $FINAL, $field(KeyStore$SecretKeyEntry, sKey)},
		{"attributes", "Ljava/util/Set;", "Ljava/util/Set<Ljava/security/KeyStore$Entry$Attribute;>;", $PRIVATE | $FINAL, $field(KeyStore$SecretKeyEntry, attributes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/crypto/SecretKey;)V", nullptr, $PUBLIC, $method(KeyStore$SecretKeyEntry, init$, void, $SecretKey*)},
		{"<init>", "(Ljavax/crypto/SecretKey;Ljava/util/Set;)V", "(Ljavax/crypto/SecretKey;Ljava/util/Set<Ljava/security/KeyStore$Entry$Attribute;>;)V", $PUBLIC, $method(KeyStore$SecretKeyEntry, init$, void, $SecretKey*, $Set*)},
		{"getAttributes", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/security/KeyStore$Entry$Attribute;>;", $PUBLIC, $virtualMethod(KeyStore$SecretKeyEntry, getAttributes, $Set*)},
		{"getSecretKey", "()Ljavax/crypto/SecretKey;", nullptr, $PUBLIC, $method(KeyStore$SecretKeyEntry, getSecretKey, $SecretKey*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KeyStore$SecretKeyEntry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.KeyStore$SecretKeyEntry", "java.security.KeyStore", "SecretKeyEntry", $PUBLIC | $STATIC | $FINAL},
		{"java.security.KeyStore$Entry", "java.security.KeyStore", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.security.KeyStore$SecretKeyEntry",
		"java.lang.Object",
		"java.security.KeyStore$Entry",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.KeyStore"
	};
	$loadClass(KeyStore$SecretKeyEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyStore$SecretKeyEntry);
	});
	return class$;
}

$Class* KeyStore$SecretKeyEntry::class$ = nullptr;

	} // security
} // java