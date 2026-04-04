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

void KeychainStore$KeyEntry::init$() {
}

KeychainStore$KeyEntry::KeychainStore$KeyEntry() {
}

$Class* KeychainStore$KeyEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"date", "Ljava/util/Date;", nullptr, 0, $field(KeychainStore$KeyEntry, date)},
		{"protectedPrivKey", "[B", nullptr, 0, $field(KeychainStore$KeyEntry, protectedPrivKey)},
		{"password", "[C", nullptr, 0, $field(KeychainStore$KeyEntry, password)},
		{"keyRef", "J", nullptr, 0, $field(KeychainStore$KeyEntry, keyRef)},
		{"chain", "[Ljava/security/cert/Certificate;", nullptr, 0, $field(KeychainStore$KeyEntry, chain)},
		{"chainRefs", "[J", nullptr, 0, $field(KeychainStore$KeyEntry, chainRefs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(KeychainStore$KeyEntry, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.security.KeychainStore$KeyEntry", "apple.security.KeychainStore", "KeyEntry", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"apple.security.KeychainStore$KeyEntry",
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
		"apple.security.KeychainStore"
	};
	$loadClass(KeychainStore$KeyEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeychainStore$KeyEntry);
	});
	return class$;
}

$Class* KeychainStore$KeyEntry::class$ = nullptr;

	} // security
} // apple