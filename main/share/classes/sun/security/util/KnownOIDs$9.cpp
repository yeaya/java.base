#include <sun/security/util/KnownOIDs$9.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _KnownOIDs$9_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(KnownOIDs$9::*)($String*,int32_t,$String*,$String*,$StringArray*)>(&KnownOIDs$9::init$))},
	{"registerNames", "()Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _KnownOIDs$9_EnclosingMethodInfo_ = {
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr
};

$InnerClassInfo _KnownOIDs$9_InnerClassesInfo_[] = {
	{"sun.security.util.KnownOIDs$9", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _KnownOIDs$9_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.util.KnownOIDs$9",
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr,
	_KnownOIDs$9_MethodInfo_,
	nullptr,
	&_KnownOIDs$9_EnclosingMethodInfo_,
	_KnownOIDs$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.KnownOIDs"
};

$Object* allocate$KnownOIDs$9($Class* clazz) {
	return $of($alloc(KnownOIDs$9));
}

void KnownOIDs$9::init$($String* $enum$name, int32_t $enum$ordinal, $String* oid, $String* stdName, $StringArray* aliases) {
	$KnownOIDs::init$($enum$name, $enum$ordinal, oid, stdName, aliases);
}

bool KnownOIDs$9::registerNames() {
	return false;
}

KnownOIDs$9::KnownOIDs$9() {
}

$Class* KnownOIDs$9::load$($String* name, bool initialize) {
	$loadClass(KnownOIDs$9, name, initialize, &_KnownOIDs$9_ClassInfo_, allocate$KnownOIDs$9);
	return class$;
}

$Class* KnownOIDs$9::class$ = nullptr;

		} // util
	} // security
} // sun