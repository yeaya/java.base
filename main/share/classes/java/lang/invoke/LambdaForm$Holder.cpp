#include <java/lang/invoke/LambdaForm$Holder.h>
#include <java/lang/invoke/LambdaForm.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LambdaForm = ::java::lang::invoke::LambdaForm;

namespace java {
	namespace lang {
		namespace invoke {

void LambdaForm$Holder::init$($LambdaForm* this$0) {
	$set(this, this$0, this$0);
}

LambdaForm$Holder::LambdaForm$Holder() {
}

$Class* LambdaForm$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/invoke/LambdaForm;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaForm$Holder, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/invoke/LambdaForm;)V", nullptr, 0, $method(LambdaForm$Holder, init$, void, $LambdaForm*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.LambdaForm$Holder", "java.lang.invoke.LambdaForm", "Holder", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.LambdaForm$Holder",
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
		"java.lang.invoke.LambdaForm"
	};
	$loadClass(LambdaForm$Holder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LambdaForm$Holder);
	});
	return class$;
}

$Class* LambdaForm$Holder::class$ = nullptr;

		} // invoke
	} // lang
} // java