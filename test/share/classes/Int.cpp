#include <Int.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Int_MethodInfo_[] = {
	{"main", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Int_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"Int",
	nullptr,
	nullptr,
	nullptr,
	_Int_MethodInfo_
};

$Object* allocate$Int($Class* clazz) {
	return $of($alloc(Int));
}

$Class* Int::load$($String* name, bool initialize) {
	$loadClass(Int, name, initialize, &_Int_ClassInfo_, allocate$Int);
	return class$;
}

$Class* Int::class$ = nullptr;