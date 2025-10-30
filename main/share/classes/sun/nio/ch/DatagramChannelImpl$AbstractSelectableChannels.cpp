#include <sun/nio/ch/DatagramChannelImpl$AbstractSelectableChannels.h>

#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/function/Consumer.h>
#include <sun/nio/ch/DatagramChannelImpl.h>
#include <jcpp.h>

#undef FOREACH

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Method = ::java::lang::reflect::Method;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $AccessController = ::java::security::AccessController;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Consumer = ::java::util::function::Consumer;
using $DatagramChannelImpl = ::sun::nio::ch::DatagramChannelImpl;

namespace sun {
	namespace nio {
		namespace ch {

class DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0 : public $PrivilegedExceptionAction {
	$class(DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(DatagramChannelImpl$AbstractSelectableChannels::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0::*)()>(&DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.nio.ch.DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	nullptr,
	methodInfos
};
$Class* DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _DatagramChannelImpl$AbstractSelectableChannels_FieldInfo_[] = {
	{"FOREACH", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DatagramChannelImpl$AbstractSelectableChannels, FOREACH)},
	{}
};

$MethodInfo _DatagramChannelImpl$AbstractSelectableChannels_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DatagramChannelImpl$AbstractSelectableChannels::*)()>(&DatagramChannelImpl$AbstractSelectableChannels::init$))},
	{"forEach", "(Ljava/nio/channels/spi/AbstractSelectableChannel;Ljava/util/function/Consumer;)V", "(Ljava/nio/channels/spi/AbstractSelectableChannel;Ljava/util/function/Consumer<Lsun/nio/ch/SelectionKeyImpl;>;)V", $STATIC, $method(static_cast<void(*)($AbstractSelectableChannel*,$Consumer*)>(&DatagramChannelImpl$AbstractSelectableChannels::forEach))},
	{"lambda$static$0", "()Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Method*(*)()>(&DatagramChannelImpl$AbstractSelectableChannels::lambda$static$0)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _DatagramChannelImpl$AbstractSelectableChannels_InnerClassesInfo_[] = {
	{"sun.nio.ch.DatagramChannelImpl$AbstractSelectableChannels", "sun.nio.ch.DatagramChannelImpl", "AbstractSelectableChannels", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DatagramChannelImpl$AbstractSelectableChannels_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.DatagramChannelImpl$AbstractSelectableChannels",
	"java.lang.Object",
	nullptr,
	_DatagramChannelImpl$AbstractSelectableChannels_FieldInfo_,
	_DatagramChannelImpl$AbstractSelectableChannels_MethodInfo_,
	nullptr,
	nullptr,
	_DatagramChannelImpl$AbstractSelectableChannels_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.DatagramChannelImpl"
};

$Object* allocate$DatagramChannelImpl$AbstractSelectableChannels($Class* clazz) {
	return $of($alloc(DatagramChannelImpl$AbstractSelectableChannels));
}

$Method* DatagramChannelImpl$AbstractSelectableChannels::FOREACH = nullptr;

void DatagramChannelImpl$AbstractSelectableChannels::init$() {
}

void DatagramChannelImpl$AbstractSelectableChannels::forEach($AbstractSelectableChannel* ch, $Consumer* action) {
	$init(DatagramChannelImpl$AbstractSelectableChannels);
	$beforeCallerSensitive();
	try {
		$nc(DatagramChannelImpl$AbstractSelectableChannels::FOREACH)->invoke(ch, $$new($ObjectArray, {$of(action)}));
	} catch ($Exception& e) {
		$throwNew($InternalError, static_cast<$Throwable*>(e));
	}
}

$Method* DatagramChannelImpl$AbstractSelectableChannels::lambda$static$0() {
	$init(DatagramChannelImpl$AbstractSelectableChannels);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($AbstractSelectableChannel);
	$load($Consumer);
	$var($Method, m, $AbstractSelectableChannel::class$->getDeclaredMethod("forEach"_s, $$new($ClassArray, {$Consumer::class$})));
	$nc(m)->setAccessible(true);
	return m;
}

void clinit$DatagramChannelImpl$AbstractSelectableChannels($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$var($PrivilegedExceptionAction, pae, static_cast<$PrivilegedExceptionAction*>($new(DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0)));
			$assignStatic(DatagramChannelImpl$AbstractSelectableChannels::FOREACH, $cast($Method, $AccessController::doPrivileged(pae)));
		} catch ($Exception& e) {
			$throwNew($InternalError, static_cast<$Throwable*>(e));
		}
	}
}

DatagramChannelImpl$AbstractSelectableChannels::DatagramChannelImpl$AbstractSelectableChannels() {
}

$Class* DatagramChannelImpl$AbstractSelectableChannels::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0::classInfo$.name)) {
			return DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(DatagramChannelImpl$AbstractSelectableChannels, name, initialize, &_DatagramChannelImpl$AbstractSelectableChannels_ClassInfo_, clinit$DatagramChannelImpl$AbstractSelectableChannels, allocate$DatagramChannelImpl$AbstractSelectableChannels);
	return class$;
}

$Class* DatagramChannelImpl$AbstractSelectableChannels::class$ = nullptr;

		} // ch
	} // nio
} // sun