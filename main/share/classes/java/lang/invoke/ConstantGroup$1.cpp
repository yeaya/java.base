#include <java/lang/invoke/ConstantGroup$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/ConstantGroup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $ConstantGroup = ::java::lang::invoke::ConstantGroup;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _ConstantGroup$1_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ConstantGroup$1, $assertionsDisabled)},
	{}
};

$EnclosingMethodInfo _ConstantGroup$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.ConstantGroup",
	nullptr,
	nullptr
};

$InnerClassInfo _ConstantGroup$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.ConstantGroup$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ConstantGroup$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.lang.invoke.ConstantGroup$1",
	"java.lang.Object",
	nullptr,
	_ConstantGroup$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ConstantGroup$1_EnclosingMethodInfo_,
	_ConstantGroup$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.ConstantGroup"
};

$Object* allocate$ConstantGroup$1($Class* clazz) {
	return $of($alloc(ConstantGroup$1));
}

bool ConstantGroup$1::$assertionsDisabled = false;

void clinit$ConstantGroup$1($Class* class$) {
	$load($ConstantGroup);
	ConstantGroup$1::$assertionsDisabled = !$ConstantGroup::class$->desiredAssertionStatus();
}

ConstantGroup$1::ConstantGroup$1() {
}

$Class* ConstantGroup$1::load$($String* name, bool initialize) {
	$loadClass(ConstantGroup$1, name, initialize, &_ConstantGroup$1_ClassInfo_, clinit$ConstantGroup$1, allocate$ConstantGroup$1);
	return class$;
}

$Class* ConstantGroup$1::class$ = nullptr;

		} // invoke
	} // lang
} // java