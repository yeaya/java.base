#include <FinalVirtualCallFromInterface$FinalUser.h>
#include <FinalVirtualCallFromInterface$Final.h>
#include <FinalVirtualCallFromInterface.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef TYPE

using $FinalVirtualCallFromInterface$Final = ::FinalVirtualCallFromInterface$Final;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodType = ::java::lang::invoke::MethodType;

void FinalVirtualCallFromInterface$FinalUser::test() {
	$useLocalObjectStack();
	$load(FinalVirtualCallFromInterface$FinalUser);
	$beforeCallerSensitive();
	$var($MethodType, mt, $MethodType::methodType($Void::TYPE));
	$load($FinalVirtualCallFromInterface$Final);
	$var($MethodHandle, mh, $$nc($MethodHandles::lookup())->findVirtual($FinalVirtualCallFromInterface$Final::class$, "fm"_s, mt));
	$var($FinalVirtualCallFromInterface$Final, f, $new($FinalVirtualCallFromInterface$Final));
	$nc(mh)->invokeExact($$new($ObjectArray, {f}));
	mh->invoke($$new($ObjectArray, {f}));
}

$Class* FinalVirtualCallFromInterface$FinalUser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"test", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(FinalVirtualCallFromInterface$FinalUser, test, void), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FinalVirtualCallFromInterface$FinalUser", "FinalVirtualCallFromInterface", "FinalUser", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"FinalVirtualCallFromInterface$FinalUser",
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
		"FinalVirtualCallFromInterface"
	};
	$loadClass(FinalVirtualCallFromInterface$FinalUser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalVirtualCallFromInterface$FinalUser);
	});
	return class$;
}

$Class* FinalVirtualCallFromInterface$FinalUser::class$ = nullptr;