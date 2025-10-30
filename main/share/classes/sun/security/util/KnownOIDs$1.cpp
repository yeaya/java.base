#include <sun/security/util/KnownOIDs$1.h>

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

$MethodInfo _KnownOIDs$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(KnownOIDs$1::*)($String*,int32_t,$String*,$String*,$StringArray*)>(&KnownOIDs$1::init$))},
	{"registerNames", "()Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _KnownOIDs$1_EnclosingMethodInfo_ = {
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr
};

$InnerClassInfo _KnownOIDs$1_InnerClassesInfo_[] = {
	{"sun.security.util.KnownOIDs$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _KnownOIDs$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.util.KnownOIDs$1",
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr,
	_KnownOIDs$1_MethodInfo_,
	nullptr,
	&_KnownOIDs$1_EnclosingMethodInfo_,
	_KnownOIDs$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.KnownOIDs"
};

$Object* allocate$KnownOIDs$1($Class* clazz) {
	return $of($alloc(KnownOIDs$1));
}

void KnownOIDs$1::init$($String* $enum$name, int32_t $enum$ordinal, $String* oid, $String* stdName, $StringArray* aliases) {
	$KnownOIDs::init$($enum$name, $enum$ordinal, oid, stdName, aliases);
}

bool KnownOIDs$1::registerNames() {
	return false;
}

KnownOIDs$1::KnownOIDs$1() {
}

$Class* KnownOIDs$1::load$($String* name, bool initialize) {
	$loadClass(KnownOIDs$1, name, initialize, &_KnownOIDs$1_ClassInfo_, allocate$KnownOIDs$1);
	return class$;
}

$Class* KnownOIDs$1::class$ = nullptr;

		} // util
	} // security
} // sun