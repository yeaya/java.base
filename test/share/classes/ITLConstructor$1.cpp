#include <ITLConstructor$1.h>
#include <java/lang/InheritableThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InheritableThreadLocal = ::java::lang::InheritableThreadLocal;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

void ITLConstructor$1::init$() {
	$InheritableThreadLocal::init$();
}

$Object* ITLConstructor$1::initialValue() {
	return $of($Integer::valueOf(0));
}

$Integer* ITLConstructor$1::childValue($Integer* parentValue) {
	return $Integer::valueOf($nc(parentValue)->intValue() + 1);
}

$Object* ITLConstructor$1::childValue(Object$* parentValue) {
	return $of(this->childValue($cast($Integer, parentValue)));
}

ITLConstructor$1::ITLConstructor$1() {
}

$Class* ITLConstructor$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ITLConstructor$1, init$, void)},
		{"childValue", "(Ljava/lang/Integer;)Ljava/lang/Integer;", nullptr, $PROTECTED, $virtualMethod(ITLConstructor$1, childValue, $Integer*, $Integer*)},
		{"childValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(ITLConstructor$1, childValue, $Object*, Object$*)},
		{"initialValue", "()Ljava/lang/Integer;", nullptr, $PROTECTED, $virtualMethod(ITLConstructor$1, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ITLConstructor",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ITLConstructor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ITLConstructor$1",
		"java.lang.InheritableThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/InheritableThreadLocal<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ITLConstructor"
	};
	$loadClass(ITLConstructor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ITLConstructor$1);
	});
	return class$;
}

$Class* ITLConstructor$1::class$ = nullptr;