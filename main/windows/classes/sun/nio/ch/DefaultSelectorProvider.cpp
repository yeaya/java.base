#include <sun/nio/ch/DefaultSelectorProvider.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/nio/ch/SelectorProviderImpl.h>
#include <sun/nio/ch/WEPollSelectorProvider.h>
#include <jcpp.h>

#undef INSTANCE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SelectorProviderImpl = ::sun::nio::ch::SelectorProviderImpl;
using $WEPollSelectorProvider = ::sun::nio::ch::WEPollSelectorProvider;

namespace sun {
	namespace nio {
		namespace ch {

class DefaultSelectorProvider$$Lambda$WEPollSelectorProvider : public $PrivilegedAction {
	$class(DefaultSelectorProvider$$Lambda$WEPollSelectorProvider, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of($new($WEPollSelectorProvider));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultSelectorProvider$$Lambda$WEPollSelectorProvider>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultSelectorProvider$$Lambda$WEPollSelectorProvider::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultSelectorProvider$$Lambda$WEPollSelectorProvider::*)()>(&DefaultSelectorProvider$$Lambda$WEPollSelectorProvider::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultSelectorProvider$$Lambda$WEPollSelectorProvider::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.nio.ch.DefaultSelectorProvider$$Lambda$WEPollSelectorProvider",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* DefaultSelectorProvider$$Lambda$WEPollSelectorProvider::load$($String* name, bool initialize) {
	$loadClass(DefaultSelectorProvider$$Lambda$WEPollSelectorProvider, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultSelectorProvider$$Lambda$WEPollSelectorProvider::class$ = nullptr;

$FieldInfo _DefaultSelectorProvider_FieldInfo_[] = {
	{"INSTANCE", "Lsun/nio/ch/SelectorProviderImpl;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultSelectorProvider, INSTANCE)},
	{}
};

$MethodInfo _DefaultSelectorProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultSelectorProvider::*)()>(&DefaultSelectorProvider::init$))},
	{"get", "()Lsun/nio/ch/SelectorProviderImpl;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SelectorProviderImpl*(*)()>(&DefaultSelectorProvider::get))},
	{}
};

$ClassInfo _DefaultSelectorProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.ch.DefaultSelectorProvider",
	"java.lang.Object",
	nullptr,
	_DefaultSelectorProvider_FieldInfo_,
	_DefaultSelectorProvider_MethodInfo_
};

$Object* allocate$DefaultSelectorProvider($Class* clazz) {
	return $of($alloc(DefaultSelectorProvider));
}

$SelectorProviderImpl* DefaultSelectorProvider::INSTANCE = nullptr;

void DefaultSelectorProvider::init$() {
}

$SelectorProviderImpl* DefaultSelectorProvider::get() {
	$init(DefaultSelectorProvider);
	return DefaultSelectorProvider::INSTANCE;
}

void clinit$DefaultSelectorProvider($Class* class$) {
	$beforeCallerSensitive();
	{
		$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(DefaultSelectorProvider$$Lambda$WEPollSelectorProvider)));
		$assignStatic(DefaultSelectorProvider::INSTANCE, $cast($SelectorProviderImpl, $AccessController::doPrivileged(pa)));
	}
}

DefaultSelectorProvider::DefaultSelectorProvider() {
}

$Class* DefaultSelectorProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DefaultSelectorProvider$$Lambda$WEPollSelectorProvider::classInfo$.name)) {
			return DefaultSelectorProvider$$Lambda$WEPollSelectorProvider::load$(name, initialize);
		}
	}
	$loadClass(DefaultSelectorProvider, name, initialize, &_DefaultSelectorProvider_ClassInfo_, clinit$DefaultSelectorProvider, allocate$DefaultSelectorProvider);
	return class$;
}

$Class* DefaultSelectorProvider::class$ = nullptr;

		} // ch
	} // nio
} // sun