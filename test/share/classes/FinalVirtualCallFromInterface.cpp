#include <FinalVirtualCallFromInterface.h>
#include <FinalVirtualCallFromInterface$FinalUser.h>
#include <jcpp.h>

using $FinalVirtualCallFromInterface$FinalUser = ::FinalVirtualCallFromInterface$FinalUser;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FinalVirtualCallFromInterface::init$() {
}

void FinalVirtualCallFromInterface::main($StringArray* args) {
	$FinalVirtualCallFromInterface$FinalUser::test();
}

FinalVirtualCallFromInterface::FinalVirtualCallFromInterface() {
}

$Class* FinalVirtualCallFromInterface::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FinalVirtualCallFromInterface, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FinalVirtualCallFromInterface, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FinalVirtualCallFromInterface$FinalUser", "FinalVirtualCallFromInterface", "FinalUser", $STATIC | $INTERFACE | $ABSTRACT},
		{"FinalVirtualCallFromInterface$Final", "FinalVirtualCallFromInterface", "Final", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"FinalVirtualCallFromInterface",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"FinalVirtualCallFromInterface$FinalUser,FinalVirtualCallFromInterface$Final"
	};
	$loadClass(FinalVirtualCallFromInterface, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalVirtualCallFromInterface);
	});
	return class$;
}

$Class* FinalVirtualCallFromInterface::class$ = nullptr;