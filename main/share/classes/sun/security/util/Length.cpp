#include <sun/security/util/Length.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace util {

$MethodInfo _Length_MethodInfo_[] = {
	{"length", "()I", nullptr, $PUBLIC | $ABSTRACT},
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