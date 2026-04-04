#include <ProxyClashTest$ClashWithRunnable.h>
#include <ProxyClashTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

int32_t ProxyClashTest$ClashWithRunnable::run() {
	return 123;
}

void ProxyClashTest$ClashWithRunnable::foo() {
}

$Class* ProxyClashTest$ClashWithRunnable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"foo", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(ProxyClashTest$ClashWithRunnable, foo, void)},
		{"run", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(ProxyClashTest$ClashWithRunnable, run, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ProxyClashTest$ClashWithRunnable", "ProxyClashTest", "ClashWithRunnable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"ProxyClashTest$ClashWithRunnable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ProxyClashTest"
	};
	$loadClass(ProxyClashTest$ClashWithRunnable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProxyClashTest$ClashWithRunnable);
	});
	return class$;
}

$Class* ProxyClashTest$ClashWithRunnable::class$ = nullptr;