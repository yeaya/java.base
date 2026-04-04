#include <sun/security/pkcs12/PKCS12KeyStore$Entry.h>
#include <java/util/Date.h>
#include <java/util/Set.h>
#include <sun/security/pkcs12/PKCS12KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace pkcs12 {

void PKCS12KeyStore$Entry::init$() {
}

PKCS12KeyStore$Entry::PKCS12KeyStore$Entry() {
}

$Class* PKCS12KeyStore$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"date", "Ljava/util/Date;", nullptr, 0, $field(PKCS12KeyStore$Entry, date)},
		{"alias", "Ljava/lang/String;", nullptr, 0, $field(PKCS12KeyStore$Entry, alias)},
		{"keyId", "[B", nullptr, 0, $field(PKCS12KeyStore$Entry, keyId)},
		{"attributes", "Ljava/util/Set;", "Ljava/util/Set<Ljava/security/KeyStore$Entry$Attribute;>;", 0, $field(PKCS12KeyStore$Entry, attributes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PKCS12KeyStore$Entry, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.pkcs12.PKCS12KeyStore$Entry", "sun.security.pkcs12.PKCS12KeyStore", "Entry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.pkcs12.PKCS12KeyStore$Entry",
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
		"sun.security.pkcs12.PKCS12KeyStore"
	};
	$loadClass(PKCS12KeyStore$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PKCS12KeyStore$Entry);
	});
	return class$;
}

$Class* PKCS12KeyStore$Entry::class$ = nullptr;

		} // pkcs12
	} // security
} // sun