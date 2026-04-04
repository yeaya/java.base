#include <InitialValue$MyLocal.h>
#include <InitialValue.h>
#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $InitialValue = ::InitialValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

void InitialValue$MyLocal::init$($InitialValue* this$0) {
	$set(this, this$0, this$0);
	$ThreadLocal::init$();
}

$Object* InitialValue$MyLocal::initialValue() {
	$init($InitialValue);
	$assignStatic($InitialValue::other, $new($ThreadLocal));
	$InitialValue::other->set("Other"_s);
	return $of("Initial"_s);
}

InitialValue$MyLocal::InitialValue$MyLocal() {
}

$Class* InitialValue$MyLocal::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LInitialValue;", nullptr, $FINAL | $SYNTHETIC, $field(InitialValue$MyLocal, this$0)},
		{"val", "Ljava/lang/String;", nullptr, 0, $field(InitialValue$MyLocal, val)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LInitialValue;)V", nullptr, $PUBLIC, $method(InitialValue$MyLocal, init$, void, $InitialValue*)},
		{"initialValue", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(InitialValue$MyLocal, initialValue, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"InitialValue$MyLocal", "InitialValue", "MyLocal", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"InitialValue$MyLocal",
		"java.lang.ThreadLocal",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/ThreadLocal<Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"InitialValue"
	};
	$loadClass(InitialValue$MyLocal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InitialValue$MyLocal);
	});
	return class$;
}

$Class* InitialValue$MyLocal::class$ = nullptr;