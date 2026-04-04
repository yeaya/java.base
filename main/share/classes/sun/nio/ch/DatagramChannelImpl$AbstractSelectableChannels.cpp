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
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Method = ::java::lang::reflect::Method;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $AccessController = ::java::security::AccessController;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Consumer = ::java::util::function::Consumer;

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
};
$Class* DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.nio.ch.DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0::class$ = nullptr;

$Method* DatagramChannelImpl$AbstractSelectableChannels::FOREACH = nullptr;

void DatagramChannelImpl$AbstractSelectableChannels::init$() {
}

void DatagramChannelImpl$AbstractSelectableChannels::forEach($AbstractSelectableChannel* ch, $Consumer* action) {
	$init(DatagramChannelImpl$AbstractSelectableChannels);
	$beforeCallerSensitive();
	try {
		$nc(DatagramChannelImpl$AbstractSelectableChannels::FOREACH)->invoke(ch, $$new($ObjectArray, {action}));
	} catch ($Exception& e) {
		$throwNew($InternalError, e);
	}
}

$Method* DatagramChannelImpl$AbstractSelectableChannels::lambda$static$0() {
	$init(DatagramChannelImpl$AbstractSelectableChannels);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($AbstractSelectableChannel);
	$load($Consumer);
	$var($Method, m, $AbstractSelectableChannel::class$->getDeclaredMethod("forEach"_s, $$new($ClassArray, {$Consumer::class$})));
	$nc(m)->setAccessible(true);
	return m;
}

void DatagramChannelImpl$AbstractSelectableChannels::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		try {
			$var($PrivilegedExceptionAction, pae, $new(DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0));
			$assignStatic(DatagramChannelImpl$AbstractSelectableChannels::FOREACH, $cast($Method, $AccessController::doPrivileged(pae)));
		} catch ($Exception& e) {
			$throwNew($InternalError, e);
		}
	}
}

DatagramChannelImpl$AbstractSelectableChannels::DatagramChannelImpl$AbstractSelectableChannels() {
}

$Class* DatagramChannelImpl$AbstractSelectableChannels::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.nio.ch.DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0")) {
			return DatagramChannelImpl$AbstractSelectableChannels$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"FOREACH", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DatagramChannelImpl$AbstractSelectableChannels, FOREACH)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DatagramChannelImpl$AbstractSelectableChannels, init$, void)},
		{"forEach", "(Ljava/nio/channels/spi/AbstractSelectableChannel;Ljava/util/function/Consumer;)V", "(Ljava/nio/channels/spi/AbstractSelectableChannel;Ljava/util/function/Consumer<Lsun/nio/ch/SelectionKeyImpl;>;)V", $STATIC, $staticMethod(DatagramChannelImpl$AbstractSelectableChannels, forEach, void, $AbstractSelectableChannel*, $Consumer*)},
		{"lambda$static$0", "()Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DatagramChannelImpl$AbstractSelectableChannels, lambda$static$0, $Method*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.DatagramChannelImpl$AbstractSelectableChannels", "sun.nio.ch.DatagramChannelImpl", "AbstractSelectableChannels", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.DatagramChannelImpl$AbstractSelectableChannels",
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
		"sun.nio.ch.DatagramChannelImpl"
	};
	$loadClass(DatagramChannelImpl$AbstractSelectableChannels, name, initialize, &classInfo$$, DatagramChannelImpl$AbstractSelectableChannels::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DatagramChannelImpl$AbstractSelectableChannels);
	});
	return class$;
}

$Class* DatagramChannelImpl$AbstractSelectableChannels::class$ = nullptr;

		} // ch
	} // nio
} // sun