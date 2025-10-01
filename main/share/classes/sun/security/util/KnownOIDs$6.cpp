#include <sun/security/util/KnownOIDs$6.h>

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

$MethodInfo _KnownOIDs$6_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(KnownOIDs$6::*)($String*,int32_t,$String*,$String*,$StringArray*)>(&KnownOIDs$6::init$))},
	{"registerNames", "()Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _KnownOIDs$6_EnclosingMethodInfo_ = {
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr
};

$InnerClassInfo _KnownOIDs$6_InnerClassesInfo_[] = {
	{"sun.security.util.KnownOIDs$6", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _KnownOIDs$6_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.util.KnownOIDs$6",
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr,
	_KnownOIDs$6_MethodInfo_,
	nullptr,
	&_KnownOIDs$6_EnclosingMethodInfo_,
	_KnownOIDs$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.KnownOIDs"
};

$Object* allocate$KnownOIDs$6($Class* clazz) {
	return $of($alloc(KnownOIDs$6));
}

void KnownOIDs$6::init$($String* $enum$name, int32_t $enum$ordinal, $String* oid, $String* stdName, $StringArray* aliases) {
	$KnownOIDs::init$($enum$name, $enum$ordinal, oid, stdName, aliases);
}

bool KnownOIDs$6::registerNames() {
	return false;
}

KnownOIDs$6::KnownOIDs$6() {
}

$Class* KnownOIDs$6::load$($String* name, bool initialize) {
	$loadClass(KnownOIDs$6, name, initialize, &_KnownOIDs$6_ClassInfo_, allocate$KnownOIDs$6);
	return class$;
}

$Class* KnownOIDs$6::class$ = nullptr;

		} // util
	} // security
} // sun