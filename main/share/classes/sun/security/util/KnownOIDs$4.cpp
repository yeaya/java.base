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

$MethodInfo _KnownOIDs$4_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE | $TRANSIENT, $method(KnownOIDs$4, init$, void, $String*, int32_t, $String*, $String*, $StringArray*)},
	{"registerNames", "()Z", nullptr, 0, $virtualMethod(KnownOIDs$4, registerNames, bool)},
	{}
};

$EnclosingMethodInfo _KnownOIDs$4_EnclosingMethodInfo_ = {
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr
};

$InnerClassInfo _KnownOIDs$4_InnerClassesInfo_[] = {
	{"sun.security.util.KnownOIDs$4", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _KnownOIDs$4_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.util.KnownOIDs$4",
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr,
	_KnownOIDs$4_MethodInfo_,
	nullptr,
	&_KnownOIDs$4_EnclosingMethodInfo_,
	_KnownOIDs$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.KnownOIDs"
};

$Object* allocate$KnownOIDs$4($Class* clazz) {
	return $of($alloc(KnownOIDs$4));
}

void KnownOIDs$4::init$($String* $enum$name, int32_t $enum$ordinal, $String* oid, $String* stdName, $StringArray* aliases) {
	$KnownOIDs::init$($enum$name, $enum$ordinal, oid, stdName, aliases);
}

bool KnownOIDs$4::registerNames() {
	return false;
}

KnownOIDs$4::KnownOIDs$4() {
}

$Class* KnownOIDs$4::load$($String* name, bool initialize) {
	$loadClass(KnownOIDs$4, name, initialize, &_KnownOIDs$4_ClassInfo_, allocate$KnownOIDs$4);
	return class$;
}

$Class* KnownOIDs$4::class$ = nullptr;

		} // util
	} // security
} // sun