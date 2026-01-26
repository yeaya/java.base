#include <sun/security/util/Length.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _Length_MethodInfo_[] = {
	{"length", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Length, length, int32_t)},
	{}
};

$ClassInfo _Length_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.security.util.Length",
	nullptr,
	nullptr,
	nullptr,
	_Length_MethodInfo_
};

$Object* allocate$Length($Class* clazz) {
	return $of($alloc(Length));
}

$Class* Length::load$($String* name, bool initialize) {
	$loadClass(Length, name, initialize, &_Length_ClassInfo_, allocate$Length);
	return class$;
}

$Class* Length::class$ = nullptr;

		} // util
	} // security
} // sun