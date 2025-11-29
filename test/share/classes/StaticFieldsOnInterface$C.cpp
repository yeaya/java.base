#include <StaticFieldsOnInterface$C.h>

#include <StaticFieldsOnInterface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _StaticFieldsOnInterface$C_InnerClassesInfo_[] = {
	{"StaticFieldsOnInterface$C", "StaticFieldsOnInterface", "C", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"StaticFieldsOnInterface$A", "StaticFieldsOnInterface", "A", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StaticFieldsOnInterface$C_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"StaticFieldsOnInterface$C",
	nullptr,
	"StaticFieldsOnInterface$A",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_StaticFieldsOnInterface$C_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StaticFieldsOnInterface"
};

$Object* allocate$StaticFieldsOnInterface$C($Class* clazz) {
	return $of($alloc(StaticFieldsOnInterface$C));
}

$Class* StaticFieldsOnInterface$C::load$($String* name, bool initialize) {
	$loadClass(StaticFieldsOnInterface$C, name, initialize, &_StaticFieldsOnInterface$C_ClassInfo_, allocate$StaticFieldsOnInterface$C);
	return class$;
}

$Class* StaticFieldsOnInterface$C::class$ = nullptr;