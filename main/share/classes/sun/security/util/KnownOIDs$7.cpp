#include <sun/security/util/KnownOIDs$7.h>

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

$MethodInfo _KnownOIDs$7_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(KnownOIDs$7::*)($String*,int32_t,$String*,$String*,$StringArray*)>(&KnownOIDs$7::init$))},
	{"registerNames", "()Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _KnownOIDs$7_EnclosingMethodInfo_ = {
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr
};

$InnerClassInfo _KnownOIDs$7_InnerClassesInfo_[] = {
	{"sun.security.util.KnownOIDs$7", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _KnownOIDs$7_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.util.KnownOIDs$7",
	"sun.security.util.KnownOIDs",
	nullptr,
	nullptr,
	_KnownOIDs$7_MethodInfo_,
	nullptr,
	&_KnownOIDs$7_EnclosingMethodInfo_,
	_KnownOIDs$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.KnownOIDs"
};

$Object* allocate$KnownOIDs$7($Class* clazz) {
	return $of($alloc(KnownOIDs$7));
}

void KnownOIDs$7::init$($String* $enum$name, int32_t $enum$ordinal, $String* oid, $String* stdName, $StringArray* aliases) {
	$KnownOIDs::init$($enum$name, $enum$ordinal, oid, stdName, aliases);
}

bool KnownOIDs$7::registerNames() {
	return false;
}

KnownOIDs$7::KnownOIDs$7() {
}

$Class* KnownOIDs$7::load$($String* name, bool initialize) {
	$loadClass(KnownOIDs$7, name, initialize, &_KnownOIDs$7_ClassInfo_, allocate$KnownOIDs$7);
	return class$;
}

$Class* KnownOIDs$7::class$ = nullptr;

		} // util
	} // security
} // sun