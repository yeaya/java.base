#include <TestedInterface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$String* TestedInterface::s = nullptr;

void TestedInterface::clinit$($Class* clazz) {
	$assignStatic(TestedInterface::s, $System::getProperty("Test"_s));
}

$Class* TestedInterface::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"s", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TestedInterface, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"bar", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestedInterface, bar, void)},
		{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TestedInterface, foo, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"TestedInterface",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestedInterface, name, initialize, &classInfo$$, TestedInterface::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestedInterface);
	});
	return class$;
}

$Class* TestedInterface::class$ = nullptr;