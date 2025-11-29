#include <StaticFieldsOnInterface$X.h>

#include <StaticFieldsOnInterface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _StaticFieldsOnInterface$X_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StaticFieldsOnInterface$X::*)()>(&StaticFieldsOnInterface$X::init$))},
	{}
};

$InnerClassInfo _StaticFieldsOnInterface$X_InnerClassesInfo_[] = {
	{"StaticFieldsOnInterface$X", "StaticFieldsOnInterface", "X", $STATIC},
	{"StaticFieldsOnInterface$A", "StaticFieldsOnInterface", "A", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StaticFieldsOnInterface$X_ClassInfo_ = {
	$ACC_SUPER,
	"StaticFieldsOnInterface$X",
	"java.lang.Object",
	"StaticFieldsOnInterface$A",
	nullptr,
	_StaticFieldsOnInterface$X_MethodInfo_,
	nullptr,
	nullptr,
	_StaticFieldsOnInterface$X_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StaticFieldsOnInterface"
};

$Object* allocate$StaticFieldsOnInterface$X($Class* clazz) {
	return $of($alloc(StaticFieldsOnInterface$X));
}

void StaticFieldsOnInterface$X::init$() {
}

StaticFieldsOnInterface$X::StaticFieldsOnInterface$X() {
}

$Class* StaticFieldsOnInterface$X::load$($String* name, bool initialize) {
	$loadClass(StaticFieldsOnInterface$X, name, initialize, &_StaticFieldsOnInterface$X_ClassInfo_, allocate$StaticFieldsOnInterface$X);
	return class$;
}

$Class* StaticFieldsOnInterface$X::class$ = nullptr;