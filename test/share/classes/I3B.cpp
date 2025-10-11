#include <I3B.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef I3B

using $ClassInfo = ::java::lang::ClassInfo;

$ClassInfo _I3B_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"I3B"
};

$Object* allocate$I3B($Class* clazz) {
	return $of($alloc(I3B));
}

$Class* I3B::load$($String* name, bool initialize) {
	$loadClass(I3B, name, initialize, &_I3B_ClassInfo_, allocate$I3B);
	return class$;
}

$Class* I3B::class$ = nullptr;