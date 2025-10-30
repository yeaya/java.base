#include <java/lang/System$LoggerFinder.h>

#include <java/io/Serializable.h>
#include <java/lang/Module.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/System$Logger.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/ResourceBundle.h>
#include <jdk/internal/logger/AbstractLoggerWrapper.h>
#include <jdk/internal/logger/LocalizedLoggerWrapper.h>
#include <jdk/internal/logger/LoggerFinderLoader.h>
#include <jdk/internal/logger/LoggerWrapper.h>
#include <jcpp.h>

#undef LOGGERFINDER_PERMISSION

using $PermissionArray = $Array<::java::security::Permission>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $System$Logger = ::java::lang::System$Logger;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ResourceBundle = ::java::util::ResourceBundle;
using $AbstractLoggerWrapper = ::jdk::internal::logger::AbstractLoggerWrapper;
using $LocalizedLoggerWrapper = ::jdk::internal::logger::LocalizedLoggerWrapper;
using $LoggerFinderLoader = ::jdk::internal::logger::LoggerFinderLoader;
using $LoggerWrapper = ::jdk::internal::logger::LoggerWrapper;

namespace java {
	namespace lang {

class System$LoggerFinder$$Lambda$lambda$accessProvider$0 : public $PrivilegedAction {
	$class(System$LoggerFinder$$Lambda$lambda$accessProvider$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(System$LoggerFinder::lambda$accessProvider$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<System$LoggerFinder$$Lambda$lambda$accessProvider$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo System$LoggerFinder$$Lambda$lambda$accessProvider$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(System$LoggerFinder$$Lambda$lambda$accessProvider$0::*)()>(&System$LoggerFinder$$Lambda$lambda$accessProvider$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo System$LoggerFinder$$Lambda$lambda$accessProvider$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.System$LoggerFinder$$Lambda$lambda$accessProvider$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* System$LoggerFinder$$Lambda$lambda$accessProvider$0::load$($String* name, bool initialize) {
	$loadClass(System$LoggerFinder$$Lambda$lambda$accessProvider$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* System$LoggerFinder$$Lambda$lambda$accessProvider$0::class$ = nullptr;

$FieldInfo _System$LoggerFinder_FieldInfo_[] = {
	{"LOGGERFINDER_PERMISSION", "Ljava/lang/RuntimePermission;", nullptr, $STATIC | $FINAL, $staticField(System$LoggerFinder, LOGGERFINDER_PERMISSION)},
	{"service", "Ljava/lang/System$LoggerFinder;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(System$LoggerFinder, service)},
	{}
};

$MethodInfo _System$LoggerFinder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(System$LoggerFinder::*)()>(&System$LoggerFinder::init$))},
	{"<init>", "(Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(static_cast<void(System$LoggerFinder::*)($Void*)>(&System$LoggerFinder::init$))},
	{"accessProvider", "()Ljava/lang/System$LoggerFinder;", nullptr, $STATIC, $method(static_cast<System$LoggerFinder*(*)()>(&System$LoggerFinder::accessProvider))},
	{"checkPermission", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Void*(*)()>(&System$LoggerFinder::checkPermission))},
	{"getLocalizedLogger", "(Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/Module;)Ljava/lang/System$Logger;", nullptr, $PUBLIC},
	{"getLogger", "(Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/System$Logger;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLoggerFinder", "()Ljava/lang/System$LoggerFinder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<System$LoggerFinder*(*)()>(&System$LoggerFinder::getLoggerFinder))},
	{"lambda$accessProvider$0", "()Ljava/lang/System$LoggerFinder;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<System$LoggerFinder*(*)()>(&System$LoggerFinder::lambda$accessProvider$0))},
	{}
};

$InnerClassInfo _System$LoggerFinder_InnerClassesInfo_[] = {
	{"java.lang.System$LoggerFinder", "java.lang.System", "LoggerFinder", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _System$LoggerFinder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.lang.System$LoggerFinder",
	"java.lang.Object",
	nullptr,
	_System$LoggerFinder_FieldInfo_,
	_System$LoggerFinder_MethodInfo_,
	nullptr,
	nullptr,
	_System$LoggerFinder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.System"
};

$Object* allocate$System$LoggerFinder($Class* clazz) {
	return $of($alloc(System$LoggerFinder));
}

$RuntimePermission* System$LoggerFinder::LOGGERFINDER_PERMISSION = nullptr;
$volatile(System$LoggerFinder*) System$LoggerFinder::service = nullptr;

void System$LoggerFinder::init$() {
	System$LoggerFinder::init$($(checkPermission()));
}

void System$LoggerFinder::init$($Void* unused) {
}

$Void* System$LoggerFinder::checkPermission() {
	$init(System$LoggerFinder);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission(System$LoggerFinder::LOGGERFINDER_PERMISSION);
	}
	return nullptr;
}

$System$Logger* System$LoggerFinder::getLocalizedLogger($String* name, $ResourceBundle* bundle, $Module* module) {
	return $new($LocalizedLoggerWrapper, $(getLogger(name, module)), bundle);
}

System$LoggerFinder* System$LoggerFinder::getLoggerFinder() {
	$init(System$LoggerFinder);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission(System$LoggerFinder::LOGGERFINDER_PERMISSION);
	}
	return accessProvider();
}

System$LoggerFinder* System$LoggerFinder::accessProvider() {
	$init(System$LoggerFinder);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (System$LoggerFinder::service == nullptr) {
		$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(System$LoggerFinder$$Lambda$lambda$accessProvider$0)));
		$assignStatic(System$LoggerFinder::service, $cast(System$LoggerFinder, $AccessController::doPrivileged(pa, ($AccessControlContext*)nullptr, $$new($PermissionArray, {static_cast<$Permission*>(System$LoggerFinder::LOGGERFINDER_PERMISSION)}))));
	}
	return System$LoggerFinder::service;
}

System$LoggerFinder* System$LoggerFinder::lambda$accessProvider$0() {
	$init(System$LoggerFinder);
	return $LoggerFinderLoader::getLoggerFinder();
}

void clinit$System$LoggerFinder($Class* class$) {
	$assignStatic(System$LoggerFinder::LOGGERFINDER_PERMISSION, $new($RuntimePermission, "loggerFinder"_s));
}

System$LoggerFinder::System$LoggerFinder() {
}

$Class* System$LoggerFinder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(System$LoggerFinder$$Lambda$lambda$accessProvider$0::classInfo$.name)) {
			return System$LoggerFinder$$Lambda$lambda$accessProvider$0::load$(name, initialize);
		}
	}
	$loadClass(System$LoggerFinder, name, initialize, &_System$LoggerFinder_ClassInfo_, clinit$System$LoggerFinder, allocate$System$LoggerFinder);
	return class$;
}

$Class* System$LoggerFinder::class$ = nullptr;

	} // lang
} // java