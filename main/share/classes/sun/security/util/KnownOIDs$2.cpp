#include <sun/security/util/KnownOIDs$2.h>

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

$MethodInfo _KnownOIDs$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(KnownOIDs$2::*)($String*,int32_t,$String*,$String*,$StringArray*)>(&KnownOIDs$2::init$))},
	{"registerNames", "()Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _KnownOIDs$2_EnclosingMethodInfo_ = {
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr
};

$InnerClassInfo _KnownOIDs$2_InnerClassesInfo_[] = {
	{"sun.security.util.KnownOIDs$2", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _KnownOIDs$2_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.util.KnownOIDs$2",
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr,
	_KnownOIDs$2_MethodInfo_,
	nullptr,
	&_KnownOIDs$2_EnclosingMethodInfo_,
	_KnownOIDs$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.KnownOIDs"
};

$Object* allocate$KnownOIDs$2($Class* clazz) {
	return $of($alloc(KnownOIDs$2));
}

void KnownOIDs$2::init$($String* $enum$name, int32_t $enum$ordinal, $String* oid, $String* stdName, $StringArray* aliases) {
	$KnownOIDs::init$($enum$name, $enum$ordinal, oid, stdName, aliases);
}

bool KnownOIDs$2::registerNames() {
	return false;
}

KnownOIDs$2::KnownOIDs$2() {
}

$Class* KnownOIDs$2::load$($String* name, bool initialize) {
	$loadClass(KnownOIDs$2, name, initialize, &_KnownOIDs$2_ClassInfo_, allocate$KnownOIDs$2);
	return class$;
}

$Class* KnownOIDs$2::class$ = nullptr;

		} // util
	} // security
} // sun