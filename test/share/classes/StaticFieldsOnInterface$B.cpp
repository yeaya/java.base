#include <StaticFieldsOnInterface$B.h>

#include <StaticFieldsOnInterface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$InnerClassInfo _StaticFieldsOnInterface$B_InnerClassesInfo_[] = {
	{"StaticFieldsOnInterface$B", "StaticFieldsOnInterface", "B", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"StaticFieldsOnInterface$A", "StaticFieldsOnInterface", "A", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StaticFieldsOnInterface$B_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"StaticFieldsOnInterface$B",
	nullptr,
	"StaticFieldsOnInterface$A",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_StaticFieldsOnInterface$B_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StaticFieldsOnInterface"
};

$Object* allocate$StaticFieldsOnInterface$B($Class* clazz) {
	return $of($alloc(StaticFieldsOnInterface$B));
}

$Class* StaticFieldsOnInterface$B::load$($String* name, bool initialize) {
	$loadClass(StaticFieldsOnInterface$B, name, initialize, &_StaticFieldsOnInterface$B_ClassInfo_, allocate$StaticFieldsOnInterface$B);
	return class$;
}

$Class* StaticFieldsOnInterface$B::class$ = nullptr;