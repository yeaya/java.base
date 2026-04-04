#include <NonPublicProxyClass$NonPublicInterface.h>
#include <NonPublicProxyClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* NonPublicProxyClass$NonPublicInterface::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"bar", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NonPublicProxyClass$NonPublicInterface, bar, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NonPublicProxyClass$NonPublicInterface", "NonPublicProxyClass", "NonPublicInterface", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"NonPublicProxyClass$NonPublicInterface",
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
		"NonPublicProxyClass"
	};
	$loadClass(NonPublicProxyClass$NonPublicInterface, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonPublicProxyClass$NonPublicInterface);
	});
	return class$;
}

$Class* NonPublicProxyClass$NonPublicInterface::class$ = nullptr;