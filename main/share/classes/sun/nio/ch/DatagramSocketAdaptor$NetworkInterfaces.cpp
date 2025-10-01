#include <sun/nio/ch/DatagramSocketAdaptor$NetworkInterfaces.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/NetworkInterface.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <sun/nio/ch/DatagramSocketAdaptor.h>
#include <jcpp.h>

#undef GET_DEFAULT
#undef CONSTRUCTOR
#undef TYPE

using $InetAddressArray = $Array<::java::net::InetAddress>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $InetAddress = ::java::net::InetAddress;
using $NetworkInterface = ::java::net::NetworkInterface;
using $AccessController = ::java::security::AccessController;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $DatagramSocketAdaptor = ::sun::nio::ch::DatagramSocketAdaptor;

namespace sun {
	namespace nio {
		namespace ch {

class DatagramSocketAdaptor$NetworkInterfaces$$Lambda$lambda$static$0 : public $PrivilegedExceptionAction {
	$class(DatagramSocketAdaptor$NetworkInterfaces$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(DatagramSocketAdaptor$NetworkInterfaces::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DatagramSocketAdaptor$NetworkInterfaces$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DatagramSocketAdaptor$NetworkInterfaces$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DatagramSocketAdaptor$NetworkInterfaces$$Lambda$lambda$static$0::*)()>(&DatagramSocketAdaptor$NetworkInterfaces$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DatagramSocketAdaptor$NetworkInterfaces$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.nio.ch.DatagramSocketAdaptor$NetworkInterfaces$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	nullptr,
	methodInfos
};
$Class* DatagramSocketAdaptor$NetworkInterfaces$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(DatagramSocketAdaptor$NetworkInterfaces$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DatagramSocketAdaptor$NetworkInterfaces$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _DatagramSocketAdaptor$NetworkInterfaces_FieldInfo_[] = {
	{"GET_DEFAULT", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(DatagramSocketAdaptor$NetworkInterfaces, GET_DEFAULT)},
	{"CONSTRUCTOR", "Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC | $FINAL, $staticField(DatagramSocketAdaptor$NetworkInterfaces, CONSTRUCTOR)},
	{}
};

$MethodInfo _DatagramSocketAdaptor$NetworkInterfaces_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DatagramSocketAdaptor$NetworkInterfaces::*)()>(&DatagramSocketAdaptor$NetworkInterfaces::init$))},
	{"getDefault", "()Ljava/net/NetworkInterface;", nullptr, $STATIC, $method(static_cast<$NetworkInterface*(*)()>(&DatagramSocketAdaptor$NetworkInterfaces::getDefault))},
	{"lambda$static$0", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MethodHandles$Lookup*(*)()>(&DatagramSocketAdaptor$NetworkInterfaces::lambda$static$0)), "java.lang.Exception"},
	{"newNetworkInterface", "(Ljava/lang/String;I[Ljava/net/InetAddress;)Ljava/net/NetworkInterface;", nullptr, $STATIC, $method(static_cast<$NetworkInterface*(*)($String*,int32_t,$InetAddressArray*)>(&DatagramSocketAdaptor$NetworkInterfaces::newNetworkInterface))},
	{}
};

$InnerClassInfo _DatagramSocketAdaptor$NetworkInterfaces_InnerClassesInfo_[] = {
	{"sun.nio.ch.DatagramSocketAdaptor$NetworkInterfaces", "sun.nio.ch.DatagramSocketAdaptor", "NetworkInterfaces", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DatagramSocketAdaptor$NetworkInterfaces_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.DatagramSocketAdaptor$NetworkInterfaces",
	"java.lang.Object",
	nullptr,
	_DatagramSocketAdaptor$NetworkInterfaces_FieldInfo_,
	_DatagramSocketAdaptor$NetworkInterfaces_MethodInfo_,
	nullptr,
	nullptr,
	_DatagramSocketAdaptor$NetworkInterfaces_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.DatagramSocketAdaptor"
};

$Object* allocate$DatagramSocketAdaptor$NetworkInterfaces($Class* clazz) {
	return $of($alloc(DatagramSocketAdaptor$NetworkInterfaces));
}

$MethodHandle* DatagramSocketAdaptor$NetworkInterfaces::GET_DEFAULT = nullptr;
$MethodHandle* DatagramSocketAdaptor$NetworkInterfaces::CONSTRUCTOR = nullptr;

void DatagramSocketAdaptor$NetworkInterfaces::init$() {
}

$NetworkInterface* DatagramSocketAdaptor$NetworkInterfaces::getDefault() {
	$init(DatagramSocketAdaptor$NetworkInterfaces);
	try {
		return $cast($NetworkInterface, $nc(DatagramSocketAdaptor$NetworkInterfaces::GET_DEFAULT)->invokeExact($$new($ObjectArray, 0)));
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		$throwNew($InternalError, e);
	}
	$shouldNotReachHere();
}

$NetworkInterface* DatagramSocketAdaptor$NetworkInterfaces::newNetworkInterface($String* name, int32_t index, $InetAddressArray* addrs) {
	$init(DatagramSocketAdaptor$NetworkInterfaces);
	try {
		return $cast($NetworkInterface, $nc(DatagramSocketAdaptor$NetworkInterfaces::CONSTRUCTOR)->invoke($$new($ObjectArray, {$of(name), $$of(index), $of(addrs)})));
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		$throwNew($InternalError, e);
	}
	$shouldNotReachHere();
}

$MethodHandles$Lookup* DatagramSocketAdaptor$NetworkInterfaces::lambda$static$0() {
	$init(DatagramSocketAdaptor$NetworkInterfaces);
	$beforeCallerSensitive();
	$load($NetworkInterface);
	return $MethodHandles::privateLookupIn($NetworkInterface::class$, $($MethodHandles::lookup()));
}

void clinit$DatagramSocketAdaptor$NetworkInterfaces($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$var($PrivilegedExceptionAction, pa, static_cast<$PrivilegedExceptionAction*>($new(DatagramSocketAdaptor$NetworkInterfaces$$Lambda$lambda$static$0)));
			$var($MethodHandles$Lookup, l, $cast($MethodHandles$Lookup, $AccessController::doPrivileged(pa)));
			$load($NetworkInterface);
			$var($MethodType, methodType, $MethodType::methodType($NetworkInterface::class$));
			$assignStatic(DatagramSocketAdaptor$NetworkInterfaces::GET_DEFAULT, $nc(l)->findStatic($NetworkInterface::class$, "getDefault"_s, methodType));
			$init($Void);
			$load($String);
				$init($Integer);
				$load($InetAddressArray);
			$assign(methodType, $MethodType::methodType($Void::TYPE, $String::class$, $$new($ClassArray, {
				$Integer::TYPE,
				$getClass($InetAddressArray)
			})));
			$assignStatic(DatagramSocketAdaptor$NetworkInterfaces::CONSTRUCTOR, l->findConstructor($NetworkInterface::class$, methodType));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$throwNew($ExceptionInInitializerError, static_cast<$Throwable*>(e));
		}
	}
}

DatagramSocketAdaptor$NetworkInterfaces::DatagramSocketAdaptor$NetworkInterfaces() {
}

$Class* DatagramSocketAdaptor$NetworkInterfaces::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DatagramSocketAdaptor$NetworkInterfaces$$Lambda$lambda$static$0::classInfo$.name)) {
			return DatagramSocketAdaptor$NetworkInterfaces$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(DatagramSocketAdaptor$NetworkInterfaces, name, initialize, &_DatagramSocketAdaptor$NetworkInterfaces_ClassInfo_, clinit$DatagramSocketAdaptor$NetworkInterfaces, allocate$DatagramSocketAdaptor$NetworkInterfaces);
	return class$;
}

$Class* DatagramSocketAdaptor$NetworkInterfaces::class$ = nullptr;

		} // ch
	} // nio
} // sun