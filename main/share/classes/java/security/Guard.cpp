#include <java/security/Guard.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {

$MethodInfo _Guard_MethodInfo_[] = {
	{"checkGuard", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.SecurityException"},
	{}
};

$ClassInfo _Guard_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.Guard",
	nullptr,
	nullptr,
	nullptr,
	_Guard_MethodInfo_
};

$Object* allocate$Guard($Class* clazz) {
	return $of($alloc(Guard));
}

$Class* Guard::load$($String* name, bool initialize) {
	$loadClass(Guard, name, initialize, &_Guard_ClassInfo_, allocate$Guard);
	return class$;
}

$Class* Guard::class$ = nullptr;

	} // security
} // java