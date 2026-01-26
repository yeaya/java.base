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

$FieldInfo _CryptoPolicyParser$GrantEntry_FieldInfo_[] = {
	{"permissionEntries", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/crypto/CryptoPolicyParser$CryptoPermissionEntry;>;", $PRIVATE, $field(CryptoPolicyParser$GrantEntry, permissionEntries)},
	{}
};

$MethodInfo _CryptoPolicyParser$GrantEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(CryptoPolicyParser$GrantEntry, init$, void)},
	{"add", "(Ljavax/crypto/CryptoPolicyParser$CryptoPermissionEntry;)V", nullptr, 0, $virtualMethod(CryptoPolicyParser$GrantEntry, add, void, $CryptoPolicyParser$CryptoPermissionEntry*)},
	{"contains", "(Ljavax/crypto/CryptoPolicyParser$CryptoPermissionEntry;)Z", nullptr, 0, $virtualMethod(CryptoPolicyParser$GrantEntry, contains, bool, $CryptoPolicyParser$CryptoPermissionEntry*)},
	{"permissionElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/crypto/CryptoPolicyParser$CryptoPermissionEntry;>;", 0, $virtualMethod(CryptoPolicyParser$GrantEntry, permissionElements, $Enumeration*)},
	{"remove", "(Ljavax/crypto/CryptoPolicyParser$CryptoPermissionEntry;)Z", nullptr, 0, $virtualMethod(CryptoPolicyParser$GrantEntry, remove, bool, $CryptoPolicyParser$CryptoPermissionEntry*)},
	{}
};

$InnerClassInfo _CryptoPolicyParser$GrantEntry_InnerClassesInfo_[] = {
	{"javax.crypto.CryptoPolicyParser$GrantEntry", "javax.crypto.CryptoPolicyParser", "GrantEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CryptoPolicyParser$GrantEntry_ClassInfo_ = {
	$ACC_SUPER,
	"javax.crypto.CryptoPolicyParser$GrantEntry",
	"java.lang.Object",
	nullptr,
	_CryptoPolicyParser$GrantEntry_FieldInfo_,
	_CryptoPolicyParser$GrantEntry_MethodInfo_,
	nullptr,
	nullptr,
	_CryptoPolicyParser$GrantEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.crypto.CryptoPolicyParser"
};

$Object* allocate$CryptoPolicyParser$GrantEntry($Class* clazz) {
	return $of($alloc(CryptoPolicyParser$GrantEntry));
}

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
	$loadClass(CryptoPolicyParser$GrantEntry, name, initialize, &_CryptoPolicyParser$GrantEntry_ClassInfo_, allocate$CryptoPolicyParser$GrantEntry);
	return class$;
}

$Class* CryptoPolicyParser$GrantEntry::class$ = nullptr;

	} // crypto
} // javax