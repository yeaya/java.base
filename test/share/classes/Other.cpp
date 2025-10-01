#include <Other.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

$ClassInfo _Other_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"Other"
};

$Object* allocate$Other($Class* clazz) {
	return $of($alloc(Other));
}

$Class* Other::load$($String* name, bool initialize) {
	$loadClass(Other, name, initialize, &_Other_ClassInfo_, allocate$Other);
	return class$;
}

$Class* Other::class$ = nullptr;