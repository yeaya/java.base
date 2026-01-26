#include <apple/security/KeychainStore$KeyEntry.h>

#include <apple/security/KeychainStore.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Date.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace security {

$FieldInfo _KeychainStore$KeyEntry_FieldInfo_[] = {
	{"date", "Ljava/util/Date;", nullptr, 0, $field(KeychainStore$KeyEntry, date)},
	{"protectedPrivKey", "[B", nullptr, 0, $field(KeychainStore$KeyEntry, protectedPrivKey)},
	{"password", "[C", nullptr, 0, $field(KeychainStore$KeyEntry, password)},
	{"keyRef", "J", nullptr, 0, $field(KeychainStore$KeyEntry, keyRef)},
	{"chain", "[Ljava/security/cert/Certificate;", nullptr, 0, $field(KeychainStore$KeyEntry, chain)},
	{"chainRefs", "[J", nullptr, 0, $field(KeychainStore$KeyEntry, chainRefs)},
	{}
};

$MethodInfo _KeychainStore$KeyEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(KeychainStore$KeyEntry, init$, void)},
	{}
};

$InnerClassInfo _KeychainStore$KeyEntry_InnerClassesInfo_[] = {
	{"apple.security.KeychainStore$KeyEntry", "apple.security.KeychainStore", "KeyEntry", $STATIC},
	{}
};

$ClassInfo _KeychainStore$KeyEntry_ClassInfo_ = {
	$ACC_SUPER,
	"apple.security.KeychainStore$KeyEntry",
	"java.lang.Object",
	nullptr,
	_KeychainStore$KeyEntry_FieldInfo_,
	_KeychainStore$KeyEntry_MethodInfo_,
	nullptr,
	nullptr,
	_KeychainStore$KeyEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.security.KeychainStore"
};

$Object* allocate$KeychainStore$KeyEntry($Class* clazz) {
	return $of($alloc(KeychainStore$KeyEntry));
}

void KeychainStore$KeyEntry::init$() {
}

KeychainStore$KeyEntry::KeychainStore$KeyEntry() {
}

$Class* KeychainStore$KeyEntry::load$($String* name, bool initialize) {
	$loadClass(KeychainStore$KeyEntry, name, initialize, &_KeychainStore$KeyEntry_ClassInfo_, allocate$KeychainStore$KeyEntry);
	return class$;
}

$Class* KeychainStore$KeyEntry::class$ = nullptr;

	} // security
} // apple