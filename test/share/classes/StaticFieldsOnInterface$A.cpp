#include <StaticFieldsOnInterface$A.h>

#include <StaticFieldsOnInterface.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CONSTANT

using $StaticFieldsOnInterface = ::StaticFieldsOnInterface;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

$FieldInfo _StaticFieldsOnInterface$A_FieldInfo_[] = {
	{"CONSTANT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StaticFieldsOnInterface$A, CONSTANT)},
	{}
};

$InnerClassInfo _StaticFieldsOnInterface$A_InnerClassesInfo_[] = {
	{"StaticFieldsOnInterface$A", "StaticFieldsOnInterface", "A", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StaticFieldsOnInterface$A_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"StaticFieldsOnInterface$A",
	nullptr,
	nullptr,
	_StaticFieldsOnInterface$A_FieldInfo_,
	nullptr,
	nullptr,
	nullptr,
	_StaticFieldsOnInterface$A_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StaticFieldsOnInterface"
};

$Object* allocate$StaticFieldsOnInterface$A($Class* clazz) {
	return $of($alloc(StaticFieldsOnInterface$A));
}

$Class* StaticFieldsOnInterface$A::load$($String* name, bool initialize) {
	$loadClass(StaticFieldsOnInterface$A, name, initialize, &_StaticFieldsOnInterface$A_ClassInfo_, allocate$StaticFieldsOnInterface$A);
	return class$;
}

$Class* StaticFieldsOnInterface$A::class$ = nullptr;