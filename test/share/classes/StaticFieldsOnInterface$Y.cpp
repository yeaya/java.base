#include <StaticFieldsOnInterface$Y.h>

#include <StaticFieldsOnInterface$X.h>
#include <StaticFieldsOnInterface.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $StaticFieldsOnInterface = ::StaticFieldsOnInterface;
using $StaticFieldsOnInterface$X = ::StaticFieldsOnInterface$X;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StaticFieldsOnInterface$Y_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StaticFieldsOnInterface$Y::*)()>(&StaticFieldsOnInterface$Y::init$))},
	{}
};

$InnerClassInfo _StaticFieldsOnInterface$Y_InnerClassesInfo_[] = {
	{"StaticFieldsOnInterface$Y", "StaticFieldsOnInterface", "Y", $STATIC},
	{"StaticFieldsOnInterface$X", "StaticFieldsOnInterface", "X", $STATIC},
	{}
};

$ClassInfo _StaticFieldsOnInterface$Y_ClassInfo_ = {
	$ACC_SUPER,
	"StaticFieldsOnInterface$Y",
	"StaticFieldsOnInterface$X",
	nullptr,
	nullptr,
	_StaticFieldsOnInterface$Y_MethodInfo_,
	nullptr,
	nullptr,
	_StaticFieldsOnInterface$Y_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StaticFieldsOnInterface"
};

$Object* allocate$StaticFieldsOnInterface$Y($Class* clazz) {
	return $of($alloc(StaticFieldsOnInterface$Y));
}

void StaticFieldsOnInterface$Y::init$() {
	$StaticFieldsOnInterface$X::init$();
}

StaticFieldsOnInterface$Y::StaticFieldsOnInterface$Y() {
}

$Class* StaticFieldsOnInterface$Y::load$($String* name, bool initialize) {
	$loadClass(StaticFieldsOnInterface$Y, name, initialize, &_StaticFieldsOnInterface$Y_ClassInfo_, allocate$StaticFieldsOnInterface$Y);
	return class$;
}

$Class* StaticFieldsOnInterface$Y::class$ = nullptr;