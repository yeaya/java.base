#include <sun/security/provider/JavaKeyStore$KeyEntry.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Date.h>
#include <sun/security/provider/JavaKeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {

void JavaKeyStore$KeyEntry::init$() {
}

JavaKeyStore$KeyEntry::JavaKeyStore$KeyEntry() {
}

$Class* JavaKeyStore$KeyEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"date", "Ljava/util/Date;", nullptr, 0, $field(JavaKeyStore$KeyEntry, date)},
		{"protectedPrivKey", "[B", nullptr, 0, $field(JavaKeyStore$KeyEntry, protectedPrivKey)},
		{"chain", "[Ljava/security/cert/Certificate;", nullptr, 0, $field(JavaKeyStore$KeyEntry, chain)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JavaKeyStore$KeyEntry, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.JavaKeyStore$KeyEntry", "sun.security.provider.JavaKeyStore", "KeyEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.JavaKeyStore$KeyEntry",
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
		"sun.security.provider.JavaKeyStore"
	};
	$loadClass(JavaKeyStore$KeyEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaKeyStore$KeyEntry);
	});
	return class$;
}

$Class* JavaKeyStore$KeyEntry::class$ = nullptr;

		} // provider
	} // security
} // sun