#include <PrivateInterfaceCall$I3.h>

#include <PrivateInterfaceCall$I2.h>
#include <PrivateInterfaceCall.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef TYPE

using $PrivateInterfaceCall = ::PrivateInterfaceCall;
using $PrivateInterfaceCall$I2 = ::PrivateInterfaceCall$I2;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;

$MethodInfo _PrivateInterfaceCall$I3_MethodInfo_[] = {
	{"init", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&PrivateInterfaceCall$I3::init)), "java.lang.Throwable"},
	{"invokeInterfaceMH", "(LPrivateInterfaceCall$I2;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($PrivateInterfaceCall$I2*)>(&PrivateInterfaceCall$I3::invokeInterfaceMH)), "java.lang.Throwable"},
	{}
};

$InnerClassInfo _PrivateInterfaceCall$I3_InnerClassesInfo_[] = {
	{"PrivateInterfaceCall$I3", "PrivateInterfaceCall", "I3", $STATIC | $INTERFACE | $ABSTRACT},
	{"PrivateInterfaceCall$I2", "PrivateInterfaceCall", "I2", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PrivateInterfaceCall$I3_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"PrivateInterfaceCall$I3",
	nullptr,
	"PrivateInterfaceCall$I2",
	nullptr,
	_PrivateInterfaceCall$I3_MethodInfo_,
	nullptr,
	nullptr,
	_PrivateInterfaceCall$I3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PrivateInterfaceCall"
};

$Object* allocate$PrivateInterfaceCall$I3($Class* clazz) {
	return $of($alloc(PrivateInterfaceCall$I3));
}

void PrivateInterfaceCall$I3::invokeInterfaceMH($PrivateInterfaceCall$I2* i) {
	$init(PrivateInterfaceCall$I3);
	$init($PrivateInterfaceCall);
	$nc($PrivateInterfaceCall::mh_I2_priv_m_from_I3)->invokeExact($$new($ObjectArray, {$of(i)}));
}

void PrivateInterfaceCall$I3::init() {
	$init(PrivateInterfaceCall$I3);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($Void);
	$var($MethodType, mt, $MethodType::methodType($Void::TYPE));
	$init($PrivateInterfaceCall);
	$load($PrivateInterfaceCall$I2);
	$assignStatic($PrivateInterfaceCall::mh_I2_priv_m_from_I3, $nc($($MethodHandles::lookup()))->findVirtual($PrivateInterfaceCall$I2::class$, "priv_m"_s, mt));
}

$Class* PrivateInterfaceCall$I3::load$($String* name, bool initialize) {
	$loadClass(PrivateInterfaceCall$I3, name, initialize, &_PrivateInterfaceCall$I3_ClassInfo_, allocate$PrivateInterfaceCall$I3);
	return class$;
}

$Class* PrivateInterfaceCall$I3::class$ = nullptr;