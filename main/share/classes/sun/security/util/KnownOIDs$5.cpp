#include <sun/security/util/KnownOIDs$5.h>

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

$MethodInfo _KnownOIDs$5_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(KnownOIDs$5::*)($String*,int32_t,$String*,$String*,$StringArray*)>(&KnownOIDs$5::init$))},
	{"registerNames", "()Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _KnownOIDs$5_EnclosingMethodInfo_ = {
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr
};

$InnerClassInfo _KnownOIDs$5_InnerClassesInfo_[] = {
	{"sun.security.util.KnownOIDs$5", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _KnownOIDs$5_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.util.KnownOIDs$5",
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr,
	_KnownOIDs$5_MethodInfo_,
	nullptr,
	&_KnownOIDs$5_EnclosingMethodInfo_,
	_KnownOIDs$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.KnownOIDs"
};

$Object* allocate$KnownOIDs$5($Class* clazz) {
	return $of($alloc(KnownOIDs$5));
}

void KnownOIDs$5::init$($String* $enum$name, int32_t $enum$ordinal, $String* oid, $String* stdName, $StringArray* aliases) {
	$KnownOIDs::init$($enum$name, $enum$ordinal, oid, stdName, aliases);
}

bool KnownOIDs$5::registerNames() {
	return false;
}

KnownOIDs$5::KnownOIDs$5() {
}

$Class* KnownOIDs$5::load$($String* name, bool initialize) {
	$loadClass(KnownOIDs$5, name, initialize, &_KnownOIDs$5_ClassInfo_, allocate$KnownOIDs$5);
	return class$;
}

$Class* KnownOIDs$5::class$ = nullptr;

		} // util
	} // security
} // sun