#include <FinalVirtualCallFromInterface$FinalUser.h>

#include <FinalVirtualCallFromInterface$Final.h>
#include <FinalVirtualCallFromInterface.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef TYPE

using $FinalVirtualCallFromInterface = ::FinalVirtualCallFromInterface;
using $FinalVirtualCallFromInterface$Final = ::FinalVirtualCallFromInterface$Final;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

$MethodInfo _FinalVirtualCallFromInterface$FinalUser_MethodInfo_[] = {
	{"test", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&FinalVirtualCallFromInterface$FinalUser::test)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _FinalVirtualCallFromInterface$FinalUser_InnerClassesInfo_[] = {
	{"FinalVirtualCallFromInterface$FinalUser", "FinalVirtualCallFromInterface", "FinalUser", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FinalVirtualCallFromInterface$FinalUser_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"FinalVirtualCallFromInterface$FinalUser",
	nullptr,
	nullptr,
	nullptr,
	_FinalVirtualCallFromInterface$FinalUser_MethodInfo_,
	nullptr,
	nullptr,
	_FinalVirtualCallFromInterface$FinalUser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FinalVirtualCallFromInterface"
};

$Object* allocate$FinalVirtualCallFromInterface$FinalUser($Class* clazz) {
	return $of($alloc(FinalVirtualCallFromInterface$FinalUser));
}

void FinalVirtualCallFromInterface$FinalUser::test() {
	$load(FinalVirtualCallFromInterface$FinalUser);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($Void);
	$var($MethodType, mt, $MethodType::methodType($Void::TYPE));
	$load($FinalVirtualCallFromInterface$Final);
	$var($MethodHandle, mh, $nc($($MethodHandles::lookup()))->findVirtual($FinalVirtualCallFromInterface$Final::class$, "fm"_s, mt));
	$var($FinalVirtualCallFromInterface$Final, f, $new($FinalVirtualCallFromInterface$Final));
	$nc(mh)->invokeExact($$new($ObjectArray, {$of(f)}));
	mh->invoke($$new($ObjectArray, {$of(f)}));
}

$Class* FinalVirtualCallFromInterface$FinalUser::load$($String* name, bool initialize) {
	$loadClass(FinalVirtualCallFromInterface$FinalUser, name, initialize, &_FinalVirtualCallFromInterface$FinalUser_ClassInfo_, allocate$FinalVirtualCallFromInterface$FinalUser);
	return class$;
}

$Class* FinalVirtualCallFromInterface$FinalUser::class$ = nullptr;