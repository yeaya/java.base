#include <sun/security/util/ObjectIdentifier$HugeOidNotSupportedByOldJDK.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

ObjectIdentifier$HugeOidNotSupportedByOldJDK* ObjectIdentifier$HugeOidNotSupportedByOldJDK::theOne = nullptr;

void ObjectIdentifier$HugeOidNotSupportedByOldJDK::init$() {
}

void ObjectIdentifier$HugeOidNotSupportedByOldJDK::clinit$($Class* clazz) {
	$assignStatic(ObjectIdentifier$HugeOidNotSupportedByOldJDK::theOne, $new(ObjectIdentifier$HugeOidNotSupportedByOldJDK));
}

ObjectIdentifier$HugeOidNotSupportedByOldJDK::ObjectIdentifier$HugeOidNotSupportedByOldJDK() {
}

$Class* ObjectIdentifier$HugeOidNotSupportedByOldJDK::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ObjectIdentifier$HugeOidNotSupportedByOldJDK, serialVersionUID)},
		{"theOne", "Lsun/security/util/ObjectIdentifier$HugeOidNotSupportedByOldJDK;", nullptr, $STATIC, $staticField(ObjectIdentifier$HugeOidNotSupportedByOldJDK, theOne)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ObjectIdentifier$HugeOidNotSupportedByOldJDK, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.ObjectIdentifier$HugeOidNotSupportedByOldJDK", "sun.security.util.ObjectIdentifier", "HugeOidNotSupportedByOldJDK", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.util.ObjectIdentifier$HugeOidNotSupportedByOldJDK",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.ObjectIdentifier"
	};
	$loadClass(ObjectIdentifier$HugeOidNotSupportedByOldJDK, name, initialize, &classInfo$$, ObjectIdentifier$HugeOidNotSupportedByOldJDK::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectIdentifier$HugeOidNotSupportedByOldJDK);
	});
	return class$;
}

$Class* ObjectIdentifier$HugeOidNotSupportedByOldJDK::class$ = nullptr;

		} // util
	} // security
} // sun