#include <Boxing$Test.h>

#include <Boxing.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Boxing$Test_MethodInfo_[] = {
	{"m", "(BCDFIJSZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Boxing$Test_InnerClassesInfo_[] = {
	{"Boxing$Test", "Boxing", "Test", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Boxing$Test_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"Boxing$Test",
	nullptr,
	nullptr,
	nullptr,
	_Boxing$Test_MethodInfo_,
	nullptr,
	nullptr,
	_Boxing$Test_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Boxing"
};

$Object* allocate$Boxing$Test($Class* clazz) {
	return $of($alloc(Boxing$Test));
}

$Class* Boxing$Test::load$($String* name, bool initialize) {
	$loadClass(Boxing$Test, name, initialize, &_Boxing$Test_ClassInfo_, allocate$Boxing$Test);
	return class$;
}

$Class* Boxing$Test::class$ = nullptr;