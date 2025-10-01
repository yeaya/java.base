#include <MissingClass2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MissingClass2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MissingClass2::*)()>(&MissingClass2::init$))},
	{}
};

$ClassInfo _MissingClass2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MissingClass2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MissingClass2_MethodInfo_
};

$Object* allocate$MissingClass2($Class* clazz) {
	return $of($alloc(MissingClass2));
}

void MissingClass2::init$() {
}

MissingClass2::MissingClass2() {
}

$Class* MissingClass2::load$($String* name, bool initialize) {
	$loadClass(MissingClass2, name, initialize, &_MissingClass2_ClassInfo_, allocate$MissingClass2);
	return class$;
}

$Class* MissingClass2::class$ = nullptr;