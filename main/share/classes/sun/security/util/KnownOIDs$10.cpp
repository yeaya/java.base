#include <sun/security/util/KnownOIDs$10.h>

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

$MethodInfo _KnownOIDs$10_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(KnownOIDs$10::*)($String*,int32_t,$String*,$String*,$StringArray*)>(&KnownOIDs$10::init$))},
	{"registerNames", "()Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _KnownOIDs$10_EnclosingMethodInfo_ = {
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr
};

$InnerClassInfo _KnownOIDs$10_InnerClassesInfo_[] = {
	{"sun.security.util.KnownOIDs$10", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _KnownOIDs$10_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.util.KnownOIDs$10",
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr,
	_KnownOIDs$10_MethodInfo_,
	nullptr,
	&_KnownOIDs$10_EnclosingMethodInfo_,
	_KnownOIDs$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.KnownOIDs"
};

$Object* allocate$KnownOIDs$10($Class* clazz) {
	return $of($alloc(KnownOIDs$10));
}

void KnownOIDs$10::init$($String* $enum$name, int32_t $enum$ordinal, $String* oid, $String* stdName, $StringArray* aliases) {
	$KnownOIDs::init$($enum$name, $enum$ordinal, oid, stdName, aliases);
}

bool KnownOIDs$10::registerNames() {
	return false;
}

KnownOIDs$10::KnownOIDs$10() {
}

$Class* KnownOIDs$10::load$($String* name, bool initialize) {
	$loadClass(KnownOIDs$10, name, initialize, &_KnownOIDs$10_ClassInfo_, allocate$KnownOIDs$10);
	return class$;
}

$Class* KnownOIDs$10::class$ = nullptr;

		} // util
	} // security
} // sun