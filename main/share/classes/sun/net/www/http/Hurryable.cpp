#include <sun/net/www/http/Hurryable.h>

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
	namespace net {
		namespace www {
			namespace http {

$MethodInfo _Hurryable_MethodInfo_[] = {
	{"hurry", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Hurryable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.net.www.http.Hurryable",
	nullptr,
	nullptr,
	nullptr,
	_Hurryable_MethodInfo_
};

$Object* allocate$Hurryable($Class* clazz) {
	return $of($alloc(Hurryable));
}

$Class* Hurryable::load$($String* name, bool initialize) {
	$loadClass(Hurryable, name, initialize, &_Hurryable_ClassInfo_, allocate$Hurryable);
	return class$;
}

$Class* Hurryable::class$ = nullptr;

			} // http
		} // www
	} // net
} // sun