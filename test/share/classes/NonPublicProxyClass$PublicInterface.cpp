#include <NonPublicProxyClass$PublicInterface.h>
#include <NonPublicProxyClass.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Class* NonPublicProxyClass$PublicInterface::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"foo", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NonPublicProxyClass$PublicInterface, foo, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NonPublicProxyClass$PublicInterface", "NonPublicProxyClass", "PublicInterface", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"NonPublicProxyClass$PublicInterface",
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
	$loadClass(NonPublicProxyClass$PublicInterface, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonPublicProxyClass$PublicInterface);
	});
	return class$;
}

$Class* NonPublicProxyClass$PublicInterface::class$ = nullptr;