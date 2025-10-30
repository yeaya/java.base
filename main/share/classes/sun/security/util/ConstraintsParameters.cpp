#include <sun/security/util/ConstraintsParameters.h>

#include <java/util/Date.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $Set = ::java::util::Set;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _ConstraintsParameters_MethodInfo_[] = {
	{"anchorIsJdkCA", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"extendedExceptionMsg", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDate", "()Ljava/util/Date;", nullptr, $PUBLIC | $ABSTRACT},
	{"getKeys", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/security/Key;>;", $PUBLIC | $ABSTRACT},
	{"getVariant", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ConstraintsParameters_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.util.ConstraintsParameters",
	nullptr,
	nullptr,
	nullptr,
	_ConstraintsParameters_MethodInfo_
};

$Object* allocate$ConstraintsParameters($Class* clazz) {
	return $of($alloc(ConstraintsParameters));
}

$Class* ConstraintsParameters::load$($String* name, bool initialize) {
	$loadClass(ConstraintsParameters, name, initialize, &_ConstraintsParameters_ClassInfo_, allocate$ConstraintsParameters);
	return class$;
}

$Class* ConstraintsParameters::class$ = nullptr;

		} // util
	} // security
} // sun