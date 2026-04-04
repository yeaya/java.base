#include <javax/crypto/CryptoPolicyParser$GrantEntry.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/crypto/CryptoPolicyParser$CryptoPermissionEntry.h>
#include <javax/crypto/CryptoPolicyParser.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $CryptoPolicyParser$CryptoPermissionEntry = ::javax::crypto::CryptoPolicyParser$CryptoPermissionEntry;

namespace javax {
	namespace crypto {

void CryptoPolicyParser$GrantEntry::init$() {
	$set(this, permissionEntries, $new($Vector));
}

void CryptoPolicyParser$GrantEntry::add($CryptoPolicyParser$CryptoPermissionEntry* pe) {
	$nc(this->permissionEntries)->addElement(pe);
}

bool CryptoPolicyParser$GrantEntry::remove($CryptoPolicyParser$CryptoPermissionEntry* pe) {
	return $nc(this->permissionEntries)->removeElement(pe);
}

bool CryptoPolicyParser$GrantEntry::contains($CryptoPolicyParser$CryptoPermissionEntry* pe) {
	return $nc(this->permissionEntries)->contains(pe);
}

$Enumeration* CryptoPolicyParser$GrantEntry::permissionElements() {
	return $nc(this->permissionEntries)->elements();
}

CryptoPolicyParser$GrantEntry::CryptoPolicyParser$GrantEntry() {
}

$Class* CryptoPolicyParser$GrantEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"permissionEntries", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/crypto/CryptoPolicyParser$CryptoPermissionEntry;>;", $PRIVATE, $field(CryptoPolicyParser$GrantEntry, permissionEntries)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CryptoPolicyParser$GrantEntry, init$, void)},
		{"add", "(Ljavax/crypto/CryptoPolicyParser$CryptoPermissionEntry;)V", nullptr, 0, $virtualMethod(CryptoPolicyParser$GrantEntry, add, void, $CryptoPolicyParser$CryptoPermissionEntry*)},
		{"contains", "(Ljavax/crypto/CryptoPolicyParser$CryptoPermissionEntry;)Z", nullptr, 0, $virtualMethod(CryptoPolicyParser$GrantEntry, contains, bool, $CryptoPolicyParser$CryptoPermissionEntry*)},
		{"permissionElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/crypto/CryptoPolicyParser$CryptoPermissionEntry;>;", 0, $virtualMethod(CryptoPolicyParser$GrantEntry, permissionElements, $Enumeration*)},
		{"remove", "(Ljavax/crypto/CryptoPolicyParser$CryptoPermissionEntry;)Z", nullptr, 0, $virtualMethod(CryptoPolicyParser$GrantEntry, remove, bool, $CryptoPolicyParser$CryptoPermissionEntry*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.crypto.CryptoPolicyParser$GrantEntry", "javax.crypto.CryptoPolicyParser", "GrantEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.crypto.CryptoPolicyParser$GrantEntry",
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
		"javax.crypto.CryptoPolicyParser"
	};
	$loadClass(CryptoPolicyParser$GrantEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CryptoPolicyParser$GrantEntry);
	});
	return class$;
}

$Class* CryptoPolicyParser$GrantEntry::class$ = nullptr;

	} // crypto
} // javax