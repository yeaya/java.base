#include <sun/nio/ch/DatagramSocketAdaptor$DatagramPackets.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $DatagramPacket = ::java::net::DatagramPacket;
using $AccessController = ::java::security::AccessController;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $DatagramSocketAdaptor = ::sun::nio::ch::DatagramSocketAdaptor;

namespace sun {
	namespace nio {
		namespace ch {

class DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0 : public $PrivilegedExceptionAction {
	$class(DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(DatagramSocketAdaptor$DatagramPackets::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0::*)()>(&DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.nio.ch.DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	nullptr,
	methodInfos
};
$Class* DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _DatagramSocketAdaptor$DatagramPackets_FieldInfo_[] = {
	{"LENGTH", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DatagramSocketAdaptor$DatagramPackets, LENGTH)},
	{"BUF_LENGTH", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DatagramSocketAdaptor$DatagramPackets, BUF_LENGTH)},
	{}
};

$MethodInfo _DatagramSocketAdaptor$DatagramPackets_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DatagramSocketAdaptor$DatagramPackets::*)()>(&DatagramSocketAdaptor$DatagramPackets::init$))},
	{"getBufLength", "(Ljava/net/DatagramPacket;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($DatagramPacket*)>(&DatagramSocketAdaptor$DatagramPackets::getBufLength))},
	{"lambda$static$0", "()Ljava/lang/invoke/MethodHandles$Lookup;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MethodHandles$Lookup*(*)()>(&DatagramSocketAdaptor$DatagramPackets::lambda$static$0)), "java.lang.Exception"},
	{"setLength", "(Ljava/net/DatagramPacket;I)V", nullptr, $STATIC, $method(static_cast<void(*)($DatagramPacket*,int32_t)>(&DatagramSocketAdaptor$DatagramPackets::setLength))},
	{}
};

$InnerClassInfo _DatagramSocketAdaptor$DatagramPackets_InnerClassesInfo_[] = {
	{"sun.nio.ch.DatagramSocketAdaptor$DatagramPackets", "sun.nio.ch.DatagramSocketAdaptor", "DatagramPackets", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DatagramSocketAdaptor$DatagramPackets_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.DatagramSocketAdaptor$DatagramPackets",
	"java.lang.Object",
	nullptr,
	_DatagramSocketAdaptor$DatagramPackets_FieldInfo_,
	_DatagramSocketAdaptor$DatagramPackets_MethodInfo_,
	nullptr,
	nullptr,
	_DatagramSocketAdaptor$DatagramPackets_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.DatagramSocketAdaptor"
};

$Object* allocate$DatagramSocketAdaptor$DatagramPackets($Class* clazz) {
	return $of($alloc(DatagramSocketAdaptor$DatagramPackets));
}

$VarHandle* DatagramSocketAdaptor$DatagramPackets::LENGTH = nullptr;
$VarHandle* DatagramSocketAdaptor$DatagramPackets::BUF_LENGTH = nullptr;

void DatagramSocketAdaptor$DatagramPackets::init$() {
}

void DatagramSocketAdaptor$DatagramPackets::setLength($DatagramPacket* p, int32_t value) {
	$init(DatagramSocketAdaptor$DatagramPackets);
	$synchronized(p) {
		$nc(DatagramSocketAdaptor$DatagramPackets::LENGTH)->set($$new($ObjectArray, {$of(p), $$of(value)}));
	}
}

int32_t DatagramSocketAdaptor$DatagramPackets::getBufLength($DatagramPacket* p) {
	$init(DatagramSocketAdaptor$DatagramPackets);
	$synchronized(p) {
		return $intValue($nc(DatagramSocketAdaptor$DatagramPackets::BUF_LENGTH)->get($$new($ObjectArray, {$of(p)})));
	}
}

$MethodHandles$Lookup* DatagramSocketAdaptor$DatagramPackets::lambda$static$0() {
	$init(DatagramSocketAdaptor$DatagramPackets);
	$beforeCallerSensitive();
	$load($DatagramPacket);
	return $MethodHandles::privateLookupIn($DatagramPacket::class$, $($MethodHandles::lookup()));
}

void clinit$DatagramSocketAdaptor$DatagramPackets($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		try {
			$var($PrivilegedExceptionAction, pa, static_cast<$PrivilegedExceptionAction*>($new(DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0)));
			$var($MethodHandles$Lookup, l, $cast($MethodHandles$Lookup, $AccessController::doPrivileged(pa)));
			$load($DatagramPacket);
			$init($Integer);
			$assignStatic(DatagramSocketAdaptor$DatagramPackets::LENGTH, $nc(l)->findVarHandle($DatagramPacket::class$, "length"_s, $Integer::TYPE));
			$assignStatic(DatagramSocketAdaptor$DatagramPackets::BUF_LENGTH, l->findVarHandle($DatagramPacket::class$, "bufLength"_s, $Integer::TYPE));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$throwNew($ExceptionInInitializerError, static_cast<$Throwable*>(e));
		}
	}
}

DatagramSocketAdaptor$DatagramPackets::DatagramSocketAdaptor$DatagramPackets() {
}

$Class* DatagramSocketAdaptor$DatagramPackets::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0::classInfo$.name)) {
			return DatagramSocketAdaptor$DatagramPackets$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(DatagramSocketAdaptor$DatagramPackets, name, initialize, &_DatagramSocketAdaptor$DatagramPackets_ClassInfo_, clinit$DatagramSocketAdaptor$DatagramPackets, allocate$DatagramSocketAdaptor$DatagramPackets);
	return class$;
}

$Class* DatagramSocketAdaptor$DatagramPackets::class$ = nullptr;

		} // ch
	} // nio
} // sun