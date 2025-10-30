#include <sun/nio/ch/DatagramSocketAdaptor$DatagramSockets.h>

#include <java/io/Serializable.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/net/DatagramSocket.h>
#include <java/net/SocketAddress.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <sun/nio/ch/DatagramSocketAdaptor.h>
#include <jcpp.h>

#undef NO_DELEGATE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $DatagramSocket = ::java::net::DatagramSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $AccessController = ::java::security::AccessController;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $DatagramSocketAdaptor = ::sun::nio::ch::DatagramSocketAdaptor;

namespace sun {
	namespace nio {
		namespace ch {

class DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0 : public $PrivilegedExceptionAction {
	$class(DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(DatagramSocketAdaptor$DatagramSockets::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0::*)()>(&DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.nio.ch.DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	nullptr,
	methodInfos
};
$Class* DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _DatagramSocketAdaptor$DatagramSockets_FieldInfo_[] = {
	{"NO_DELEGATE", "Ljava/net/SocketAddress;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DatagramSocketAdaptor$DatagramSockets, NO_DELEGATE)},
	{}
};

$MethodInfo _DatagramSocketAdaptor$DatagramSockets_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DatagramSocketAdaptor$DatagramSockets::*)()>(&DatagramSocketAdaptor$DatagramSockets::init$))},
	{"lambda$static$0", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MethodHandles$Lookup*(*)()>(&DatagramSocketAdaptor$DatagramSockets::lambda$static$0)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _DatagramSocketAdaptor$DatagramSockets_InnerClassesInfo_[] = {
	{"sun.nio.ch.DatagramSocketAdaptor$DatagramSockets", "sun.nio.ch.DatagramSocketAdaptor", "DatagramSockets", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DatagramSocketAdaptor$DatagramSockets_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.DatagramSocketAdaptor$DatagramSockets",
	"java.lang.Object",
	nullptr,
	_DatagramSocketAdaptor$DatagramSockets_FieldInfo_,
	_DatagramSocketAdaptor$DatagramSockets_MethodInfo_,
	nullptr,
	nullptr,
	_DatagramSocketAdaptor$DatagramSockets_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.DatagramSocketAdaptor"
};

$Object* allocate$DatagramSocketAdaptor$DatagramSockets($Class* clazz) {
	return $of($alloc(DatagramSocketAdaptor$DatagramSockets));
}

$SocketAddress* DatagramSocketAdaptor$DatagramSockets::NO_DELEGATE = nullptr;

void DatagramSocketAdaptor$DatagramSockets::init$() {
}

$MethodHandles$Lookup* DatagramSocketAdaptor$DatagramSockets::lambda$static$0() {
	$init(DatagramSocketAdaptor$DatagramSockets);
	$beforeCallerSensitive();
	$load($DatagramSocket);
	return $MethodHandles::privateLookupIn($DatagramSocket::class$, $($MethodHandles::lookup()));
}

void clinit$DatagramSocketAdaptor$DatagramSockets($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		try {
			$var($PrivilegedExceptionAction, pa, static_cast<$PrivilegedExceptionAction*>($new(DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0)));
			$var($MethodHandles$Lookup, l, $cast($MethodHandles$Lookup, $AccessController::doPrivileged(pa)));
			$load($DatagramSocket);
			$load($SocketAddress);
			$assignStatic(DatagramSocketAdaptor$DatagramSockets::NO_DELEGATE, $cast($SocketAddress, $nc($($nc(l)->findStaticVarHandle($DatagramSocket::class$, "NO_DELEGATE"_s, $SocketAddress::class$)))->get($$new($ObjectArray, 0))));
		} catch ($Exception& e) {
			$throwNew($ExceptionInInitializerError, static_cast<$Throwable*>(e));
		}
	}
}

DatagramSocketAdaptor$DatagramSockets::DatagramSocketAdaptor$DatagramSockets() {
}

$Class* DatagramSocketAdaptor$DatagramSockets::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0::classInfo$.name)) {
			return DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(DatagramSocketAdaptor$DatagramSockets, name, initialize, &_DatagramSocketAdaptor$DatagramSockets_ClassInfo_, clinit$DatagramSocketAdaptor$DatagramSockets, allocate$DatagramSocketAdaptor$DatagramSockets);
	return class$;
}

$Class* DatagramSocketAdaptor$DatagramSockets::class$ = nullptr;

		} // ch
	} // nio
} // sun