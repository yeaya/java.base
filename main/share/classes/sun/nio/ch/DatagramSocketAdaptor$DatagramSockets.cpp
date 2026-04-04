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
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $DatagramSocket = ::java::net::DatagramSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $AccessController = ::java::security::AccessController;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;

namespace sun {
	namespace nio {
		namespace ch {

class DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0 : public $PrivilegedExceptionAction {
	$class(DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return DatagramSocketAdaptor$DatagramSockets::lambda$static$0();
	}
};
$Class* DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.nio.ch.DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0::class$ = nullptr;

$SocketAddress* DatagramSocketAdaptor$DatagramSockets::NO_DELEGATE = nullptr;

void DatagramSocketAdaptor$DatagramSockets::init$() {
}

$MethodHandles$Lookup* DatagramSocketAdaptor$DatagramSockets::lambda$static$0() {
	$init(DatagramSocketAdaptor$DatagramSockets);
	$beforeCallerSensitive();
	$load($DatagramSocket);
	return $MethodHandles::privateLookupIn($DatagramSocket::class$, $($MethodHandles::lookup()));
}

void DatagramSocketAdaptor$DatagramSockets::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		try {
			$var($PrivilegedExceptionAction, pa, $new(DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0));
			$var($MethodHandles$Lookup, l, $cast($MethodHandles$Lookup, $AccessController::doPrivileged(pa)));
			$load($DatagramSocket);
			$load($SocketAddress);
			$assignStatic(DatagramSocketAdaptor$DatagramSockets::NO_DELEGATE, $cast($SocketAddress, $$nc($nc(l)->findStaticVarHandle($DatagramSocket::class$, "NO_DELEGATE"_s, $SocketAddress::class$))->get($$new($ObjectArray, 0))));
		} catch ($Exception& e) {
			$throwNew($ExceptionInInitializerError, e);
		}
	}
}

DatagramSocketAdaptor$DatagramSockets::DatagramSocketAdaptor$DatagramSockets() {
}

$Class* DatagramSocketAdaptor$DatagramSockets::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.nio.ch.DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0")) {
			return DatagramSocketAdaptor$DatagramSockets$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"NO_DELEGATE", "Ljava/net/SocketAddress;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DatagramSocketAdaptor$DatagramSockets, NO_DELEGATE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DatagramSocketAdaptor$DatagramSockets, init$, void)},
		{"lambda$static$0", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DatagramSocketAdaptor$DatagramSockets, lambda$static$0, $MethodHandles$Lookup*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.DatagramSocketAdaptor$DatagramSockets", "sun.nio.ch.DatagramSocketAdaptor", "DatagramSockets", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.DatagramSocketAdaptor$DatagramSockets",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.DatagramSocketAdaptor"
	};
	$loadClass(DatagramSocketAdaptor$DatagramSockets, name, initialize, &classInfo$$, DatagramSocketAdaptor$DatagramSockets::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DatagramSocketAdaptor$DatagramSockets);
	});
	return class$;
}

$Class* DatagramSocketAdaptor$DatagramSockets::class$ = nullptr;

		} // ch
	} // nio
} // sun