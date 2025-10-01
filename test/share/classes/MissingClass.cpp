#include <MissingClass.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MissingClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MissingClass::*)()>(&MissingClass::init$))},
	{}
};

$ClassInfo _MissingClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MissingClass",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MissingClass_MethodInfo_
};

$Object* allocate$MissingClass($Class* clazz) {
	return $of($alloc(MissingClass));
}

void MissingClass::init$() {
}

MissingClass::MissingClass() {
}

$Class* MissingClass::load$($String* name, bool initialize) {
	$loadClass(MissingClass, name, initialize, &_MissingClass_ClassInfo_, allocate$MissingClass);
	return class$;
}

$Class* MissingClass::class$ = nullptr;