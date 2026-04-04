#include <sun/security/util/KnownOIDs$4.h>
#include <sun/security/util/KnownOIDs.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KnownOIDs = ::sun::security::util::KnownOIDs;

namespace sun {
	namespace security {
		namespace util {

void KnownOIDs$4::init$($String* $enum$name, int32_t $enum$ordinal, $String* oid, $String* stdName, $StringArray* aliases) {
	$KnownOIDs::init$($enum$name, $enum$ordinal, oid, stdName, aliases);
}

bool KnownOIDs$4::registerNames() {
	return false;
}

KnownOIDs$4::KnownOIDs$4() {
}

$Class* KnownOIDs$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE | $TRANSIENT, $method(KnownOIDs$4, init$, void, $String*, int32_t, $String*, $String*, $StringArray*)},
		{"registerNames", "()Z", nullptr, 0, $virtualMethod(KnownOIDs$4, registerNames, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.util.KnownOIDs",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.KnownOIDs$4", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"sun.security.util.KnownOIDs$4",
		"sun.security.util.KnownOIDs",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.util.KnownOIDs"
	};
	$loadClass(KnownOIDs$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(KnownOIDs$4));
	});
	return class$;
}

$Class* KnownOIDs$4::class$ = nullptr;

		} // util
	} // security
} // sun