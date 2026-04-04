#include <java/lang/invoke/Invokers$Holder.h>
#include <java/lang/invoke/Invokers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Invokers = ::java::lang::invoke::Invokers;

namespace java {
	namespace lang {
		namespace invoke {

void Invokers$Holder::init$($Invokers* this$0) {
	$set(this, this$0, this$0);
}

Invokers$Holder::Invokers$Holder() {
}

$Class* Invokers$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/invoke/Invokers;", nullptr, $FINAL | $SYNTHETIC, $field(Invokers$Holder, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/Invokers;)V", nullptr, 0, $method(Invokers$Holder, init$, void, $Invokers*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.Invokers$Holder", "java.lang.invoke.Invokers", "Holder", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.Invokers$Holder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.Invokers"
	};
	$loadClass(Invokers$Holder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Invokers$Holder);
	});
	return class$;
}

$Class* Invokers$Holder::class$ = nullptr;

		} // invoke
	} // lang
} // java