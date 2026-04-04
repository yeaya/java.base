#include <sun/security/util/KnownOIDs$8.h>
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

void KnownOIDs$8::init$($String* $enum$name, int32_t $enum$ordinal, $String* oid, $String* stdName, $StringArray* aliases) {
	$KnownOIDs::init$($enum$name, $enum$ordinal, oid, stdName, aliases);
}

bool KnownOIDs$8::registerNames() {
	return false;
}

KnownOIDs$8::KnownOIDs$8() {
}

$Class* KnownOIDs$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE | $TRANSIENT, $method(KnownOIDs$8, init$, void, $String*, int32_t, $String*, $String*, $StringArray*)},
		{"registerNames", "()Z", nullptr, 0, $virtualMethod(KnownOIDs$8, registerNames, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.util.KnownOIDs",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.util.KnownOIDs$8", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"sun.security.util.KnownOIDs$8",
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
	$loadClass(KnownOIDs$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(KnownOIDs$8));
	});
	return class$;
}

$Class* KnownOIDs$8::class$ = nullptr;

		} // util
	} // security
} // sun