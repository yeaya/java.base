#include <java/lang/invoke/ConstantGroup$1.h>
#include <java/lang/invoke/ConstantGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $ConstantGroup = ::java::lang::invoke::ConstantGroup;

namespace java {
	namespace lang {
		namespace invoke {

bool ConstantGroup$1::$assertionsDisabled = false;

void ConstantGroup$1::clinit$($Class* clazz) {
	$load($ConstantGroup);
	ConstantGroup$1::$assertionsDisabled = !$ConstantGroup::class$->desiredAssertionStatus();
}

ConstantGroup$1::ConstantGroup$1() {
}

$Class* ConstantGroup$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ConstantGroup$1, $assertionsDisabled)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.invoke.ConstantGroup",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.ConstantGroup$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"java.lang.invoke.ConstantGroup$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.ConstantGroup"
	};
	$loadClass(ConstantGroup$1, name, initialize, &classInfo$$, ConstantGroup$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ConstantGroup$1);
	});
	return class$;
}

$Class* ConstantGroup$1::class$ = nullptr;

		} // invoke
	} // lang
} // java