#include <Other.h>

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