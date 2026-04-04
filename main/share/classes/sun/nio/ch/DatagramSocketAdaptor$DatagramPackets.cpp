#include <sun/nio/ch/DatagramSocketAdaptor$DatagramPackets.h>
#include <java/io/Serializable.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/net/DatagramPacket.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <sun/nio/ch/DatagramSocketAdaptor.h>
#include <jcpp.h>

#undef BUF_LENGTH
#undef LENGTH
#undef TYPE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $DatagramPacket = ::java::net::DatagramPacket;
using $AccessController = ::java::security::AccessController;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;

namespace sun {
	namespace nio {
		namespace ch {

class DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0 : public $PrivilegedExceptionAction {
	$class(DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return DatagramSocketAdaptor$DatagramPackets::lambda$static$0();
	}
};
$Class* DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.nio.ch.DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0::class$ = nullptr;

$VarHandle* DatagramSocketAdaptor$DatagramPackets::LENGTH = nullptr;
$VarHandle* DatagramSocketAdaptor$DatagramPackets::BUF_LENGTH = nullptr;

void DatagramSocketAdaptor$DatagramPackets::init$() {
}

void DatagramSocketAdaptor$DatagramPackets::setLength($DatagramPacket* p, int32_t value) {
	$init(DatagramSocketAdaptor$DatagramPackets);
	$synchronized(p) {
		$nc(DatagramSocketAdaptor$DatagramPackets::LENGTH)->set($$new($ObjectArray, {p, $$of(value)}));
	}
}

int32_t DatagramSocketAdaptor$DatagramPackets::getBufLength($DatagramPacket* p) {
	$init(DatagramSocketAdaptor$DatagramPackets);
	$synchronized(p) {
		return $intValue($nc(DatagramSocketAdaptor$DatagramPackets::BUF_LENGTH)->get($$new($ObjectArray, {p})));
	}
}

$MethodHandles$Lookup* DatagramSocketAdaptor$DatagramPackets::lambda$static$0() {
	$init(DatagramSocketAdaptor$DatagramPackets);
	$beforeCallerSensitive();
	$load($DatagramPacket);
	return $MethodHandles::privateLookupIn($DatagramPacket::class$, $($MethodHandles::lookup()));
}

void DatagramSocketAdaptor$DatagramPackets::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		try {
			$var($PrivilegedExceptionAction, pa, $new(DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0));
			$var($MethodHandles$Lookup, l, $cast($MethodHandles$Lookup, $AccessController::doPrivileged(pa)));
			$load($DatagramPacket);
			$assignStatic(DatagramSocketAdaptor$DatagramPackets::LENGTH, $nc(l)->findVarHandle($DatagramPacket::class$, "length"_s, $Integer::TYPE));
			$assignStatic(DatagramSocketAdaptor$DatagramPackets::BUF_LENGTH, l->findVarHandle($DatagramPacket::class$, "bufLength"_s, $Integer::TYPE));
		} catch ($Exception& e) {
			$throwNew($ExceptionInInitializerError, e);
		}
	}
}

DatagramSocketAdaptor$DatagramPackets::DatagramSocketAdaptor$DatagramPackets() {
}

$Class* DatagramSocketAdaptor$DatagramPackets::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.nio.ch.DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0")) {
			return DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"LENGTH", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DatagramSocketAdaptor$DatagramPackets, LENGTH)},
		{"BUF_LENGTH", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DatagramSocketAdaptor$DatagramPackets, BUF_LENGTH)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DatagramSocketAdaptor$DatagramPackets, init$, void)},
		{"getBufLength", "(Ljava/net/DatagramPacket;)I", nullptr, $STATIC, $staticMethod(DatagramSocketAdaptor$DatagramPackets, getBufLength, int32_t, $DatagramPacket*)},
		{"lambda$static$0", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DatagramSocketAdaptor$DatagramPackets, lambda$static$0, $MethodHandles$Lookup*), "java.lang.Exception"},
		{"setLength", "(Ljava/net/DatagramPacket;I)V", nullptr, $STATIC, $staticMethod(DatagramSocketAdaptor$DatagramPackets, setLength, void, $DatagramPacket*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.DatagramSocketAdaptor$DatagramPackets", "sun.nio.ch.DatagramSocketAdaptor", "DatagramPackets", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.DatagramSocketAdaptor$DatagramPackets",
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
	$loadClass(DatagramSocketAdaptor$DatagramPackets, name, initialize, &classInfo$$, DatagramSocketAdaptor$DatagramPackets::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DatagramSocketAdaptor$DatagramPackets);
	});
	return class$;
}

$Class* DatagramSocketAdaptor$DatagramPackets::class$ = nullptr;

		} // ch
	} // nio
} // sun