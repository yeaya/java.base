#include <ITLRemoveTest$1.h>
#include <java/lang/InheritableThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InheritableThreadLocal = ::java::lang::InheritableThreadLocal;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

void ITLRemoveTest$1::init$() {
	$InheritableThreadLocal::init$();
}

$Object* ITLRemoveTest$1::initialValue() {
	return $of($Integer::valueOf((int32_t)0x80000000));
}

$Integer* ITLRemoveTest$1::childValue($Integer* parentValue) {
	return $Integer::valueOf(($nc(parentValue)->intValue() + 1));
}

$Object* ITLRemoveTest$1::childValue(Object$* parentValue) {
	return $of(this->childValue($cast($Integer, parentValue)));
}

ITLRemoveTest$1::ITLRemoveTest$1() {
}

$Class* ITLRemoveTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ITLRemoveTest$1, init$, void)},
		{"childValue", "(Ljava/lang/Integer;)Ljava/lang/Integer;", nullptr, $PROTECTED, $virtualMethod(ITLRemoveTest$1, childValue, $Integer*, $Integer*)},
		{"childValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(ITLRemoveTest$1, childValue, $Object*, Object$*)},
		{"initialValue", "()Ljava/lang/Integer;", nullptr, $PROTECTED, $virtualMethod(ITLRemoveTest$1, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ITLRemoveTest",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ITLRemoveTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ITLRemoveTest$1",
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
		"ITLRemoveTest"
	};
	$loadClass(ITLRemoveTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ITLRemoveTest$1);
	});
	return class$;
}

$Class* ITLRemoveTest$1::class$ = nullptr;