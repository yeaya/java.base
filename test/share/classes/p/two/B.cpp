#include <p/two/B.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef B

using $ClassInfo = ::java::lang::ClassInfo;

namespace p {
	namespace two {

$ClassInfo _B_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"p.two.B"
};

$Object* allocate$B($Class* clazz) {
	return $of($alloc(B));
}

$Class* B::load$($String* name, bool initialize) {
	$loadClass(B, name, initialize, &_B_ClassInfo_, allocate$B);
	return class$;
}

$Class* B::class$ = nullptr;

	} // two
} // p