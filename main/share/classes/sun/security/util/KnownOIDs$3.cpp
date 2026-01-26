#include <sun/security/util/KnownOIDs$3.h>

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

$MethodInfo _KnownOIDs$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE | $TRANSIENT, $method(KnownOIDs$3, init$, void, $String*, int32_t, $String*, $String*, $StringArray*)},
	{"registerNames", "()Z", nullptr, 0, $virtualMethod(KnownOIDs$3, registerNames, bool)},
	{}
};

$EnclosingMethodInfo _KnownOIDs$3_EnclosingMethodInfo_ = {
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr
};

$InnerClassInfo _KnownOIDs$3_InnerClassesInfo_[] = {
	{"sun.security.util.KnownOIDs$3", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _KnownOIDs$3_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.util.KnownOIDs$3",
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr,
	_KnownOIDs$3_MethodInfo_,
	nullptr,
	&_KnownOIDs$3_EnclosingMethodInfo_,
	_KnownOIDs$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.KnownOIDs"
};

$Object* allocate$KnownOIDs$3($Class* clazz) {
	return $of($alloc(KnownOIDs$3));
}

void KnownOIDs$3::init$($String* $enum$name, int32_t $enum$ordinal, $String* oid, $String* stdName, $StringArray* aliases) {
	$KnownOIDs::init$($enum$name, $enum$ordinal, oid, stdName, aliases);
}

bool KnownOIDs$3::registerNames() {
	return false;
}

KnownOIDs$3::KnownOIDs$3() {
}

$Class* KnownOIDs$3::load$($String* name, bool initialize) {
	$loadClass(KnownOIDs$3, name, initialize, &_KnownOIDs$3_ClassInfo_, allocate$KnownOIDs$3);
	return class$;
}

$Class* KnownOIDs$3::class$ = nullptr;

		} // util
	} // security
} // sun