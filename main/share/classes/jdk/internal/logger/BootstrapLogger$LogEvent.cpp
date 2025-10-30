#include <jdk/internal/logger/BootstrapLogger$LogEvent.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Objects.h>
#include <java/util/ResourceBundle.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/logger/BootstrapLogger$BootstrapExecutors.h>
#include <jdk/internal/logger/BootstrapLogger.h>
#include <jdk/internal/misc/VM.h>
#include <sun/util/logging/PlatformLogger$Bridge.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityManager = ::java::lang::SecurityManager;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Objects = ::java::util::Objects;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Supplier = ::java::util::function::Supplier;
using $BootstrapLogger = ::jdk::internal::logger::BootstrapLogger;
using $BootstrapLogger$BootstrapExecutors = ::jdk::internal::logger::BootstrapLogger$BootstrapExecutors;
using $VM = ::jdk::internal::misc::VM;
using $PlatformLogger$Bridge = ::sun::util::logging::PlatformLogger$Bridge;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace jdk {
	namespace internal {
		namespace logger {

class BootstrapLogger$LogEvent$$Lambda$lambda$log$0 : public $Runnable {
	$class(BootstrapLogger$LogEvent$$Lambda$lambda$log$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(BootstrapLogger$LogEvent* log, $System$Logger* logger) {
		$set(this, log, log);
		$set(this, logger, logger);
	}
	virtual void run() override {
		BootstrapLogger$LogEvent::lambda$log$0(log, logger);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BootstrapLogger$LogEvent$$Lambda$lambda$log$0>());
	}
	BootstrapLogger$LogEvent* log = nullptr;
	$System$Logger* logger = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BootstrapLogger$LogEvent$$Lambda$lambda$log$0::fieldInfos[3] = {
	{"log", "Ljdk/internal/logger/BootstrapLogger$LogEvent;", nullptr, $PUBLIC, $field(BootstrapLogger$LogEvent$$Lambda$lambda$log$0, log)},
	{"logger", "Ljava/lang/System$Logger;", nullptr, $PUBLIC, $field(BootstrapLogger$LogEvent$$Lambda$lambda$log$0, logger)},
	{}
};
$MethodInfo BootstrapLogger$LogEvent$$Lambda$lambda$log$0::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/logger/BootstrapLogger$LogEvent;Ljava/lang/System$Logger;)V", nullptr, $PUBLIC, $method(static_cast<void(BootstrapLogger$LogEvent$$Lambda$lambda$log$0::*)(BootstrapLogger$LogEvent*,$System$Logger*)>(&BootstrapLogger$LogEvent$$Lambda$lambda$log$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo BootstrapLogger$LogEvent$$Lambda$lambda$log$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.logger.BootstrapLogger$LogEvent$$Lambda$lambda$log$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* BootstrapLogger$LogEvent$$Lambda$lambda$log$0::load$($String* name, bool initialize) {
	$loadClass(BootstrapLogger$LogEvent$$Lambda$lambda$log$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BootstrapLogger$LogEvent$$Lambda$lambda$log$0::class$ = nullptr;

class BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1 : public $Runnable {
	$class(BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(BootstrapLogger$LogEvent* log, $System$Logger* logger) {
		$set(this, log, log);
		$set(this, logger, logger);
	}
	virtual void run() override {
		BootstrapLogger$LogEvent::lambda$log$2(log, logger);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1>());
	}
	BootstrapLogger$LogEvent* log = nullptr;
	$System$Logger* logger = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1::fieldInfos[3] = {
	{"log", "Ljdk/internal/logger/BootstrapLogger$LogEvent;", nullptr, $PUBLIC, $field(BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1, log)},
	{"logger", "Ljava/lang/System$Logger;", nullptr, $PUBLIC, $field(BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1, logger)},
	{}
};
$MethodInfo BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/logger/BootstrapLogger$LogEvent;Ljava/lang/System$Logger;)V", nullptr, $PUBLIC, $method(static_cast<void(BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1::*)(BootstrapLogger$LogEvent*,$System$Logger*)>(&BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.logger.BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1::load$($String* name, bool initialize) {
	$loadClass(BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1::class$ = nullptr;

class BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2 : public $PrivilegedAction {
	$class(BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(BootstrapLogger$LogEvent* log, $PlatformLogger$Bridge* logger) {
		$set(this, log, log);
		$set(this, logger, logger);
	}
	virtual $Object* run() override {
		 return $of(BootstrapLogger$LogEvent::lambda$log$3(log, logger));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2>());
	}
	BootstrapLogger$LogEvent* log = nullptr;
	$PlatformLogger$Bridge* logger = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2::fieldInfos[3] = {
	{"log", "Ljdk/internal/logger/BootstrapLogger$LogEvent;", nullptr, $PUBLIC, $field(BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2, log)},
	{"logger", "Lsun/util/logging/PlatformLogger$Bridge;", nullptr, $PUBLIC, $field(BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2, logger)},
	{}
};
$MethodInfo BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/logger/BootstrapLogger$LogEvent;Lsun/util/logging/PlatformLogger$Bridge;)V", nullptr, $PUBLIC, $method(static_cast<void(BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2::*)(BootstrapLogger$LogEvent*,$PlatformLogger$Bridge*)>(&BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.logger.BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2::load$($String* name, bool initialize) {
	$loadClass(BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2::class$ = nullptr;

class BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3 : public $PrivilegedAction {
	$class(BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(BootstrapLogger$LogEvent* log, $System$Logger* logger) {
		$set(this, log, log);
		$set(this, logger, logger);
	}
	virtual $Object* run() override {
		 return $of(BootstrapLogger$LogEvent::lambda$log$1(log, logger));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3>());
	}
	BootstrapLogger$LogEvent* log = nullptr;
	$System$Logger* logger = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3::fieldInfos[3] = {
	{"log", "Ljdk/internal/logger/BootstrapLogger$LogEvent;", nullptr, $PUBLIC, $field(BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3, log)},
	{"logger", "Ljava/lang/System$Logger;", nullptr, $PUBLIC, $field(BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3, logger)},
	{}
};
$MethodInfo BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3::methodInfos[3] = {
	{"<init>", "(Ljdk/internal/logger/BootstrapLogger$LogEvent;Ljava/lang/System$Logger;)V", nullptr, $PUBLIC, $method(static_cast<void(BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3::*)(BootstrapLogger$LogEvent*,$System$Logger*)>(&BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.internal.logger.BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3::load$($String* name, bool initialize) {
	$loadClass(BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3::class$ = nullptr;

$FieldInfo _BootstrapLogger$LogEvent_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BootstrapLogger$LogEvent, $assertionsDisabled)},
	{"level", "Ljava/lang/System$Logger$Level;", nullptr, $FINAL, $field(BootstrapLogger$LogEvent, level)},
	{"platformLevel", "Lsun/util/logging/PlatformLogger$Level;", nullptr, $FINAL, $field(BootstrapLogger$LogEvent, platformLevel)},
	{"bootstrap", "Ljdk/internal/logger/BootstrapLogger;", nullptr, $FINAL, $field(BootstrapLogger$LogEvent, bootstrap)},
	{"bundle", "Ljava/util/ResourceBundle;", nullptr, $FINAL, $field(BootstrapLogger$LogEvent, bundle)},
	{"msg", "Ljava/lang/String;", nullptr, $FINAL, $field(BootstrapLogger$LogEvent, msg)},
	{"thrown", "Ljava/lang/Throwable;", nullptr, $FINAL, $field(BootstrapLogger$LogEvent, thrown)},
	{"params", "[Ljava/lang/Object;", nullptr, $FINAL, $field(BootstrapLogger$LogEvent, params)},
	{"msgSupplier", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<Ljava/lang/String;>;", $FINAL, $field(BootstrapLogger$LogEvent, msgSupplier)},
	{"sourceClass", "Ljava/lang/String;", nullptr, $FINAL, $field(BootstrapLogger$LogEvent, sourceClass)},
	{"sourceMethod", "Ljava/lang/String;", nullptr, $FINAL, $field(BootstrapLogger$LogEvent, sourceMethod)},
	{"timeMillis", "J", nullptr, $FINAL, $field(BootstrapLogger$LogEvent, timeMillis)},
	{"nanoAdjustment", "J", nullptr, $FINAL, $field(BootstrapLogger$LogEvent, nanoAdjustment)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL, $field(BootstrapLogger$LogEvent, acc)},
	{"next", "Ljdk/internal/logger/BootstrapLogger$LogEvent;", nullptr, 0, $field(BootstrapLogger$LogEvent, next)},
	{}
};

$MethodInfo _BootstrapLogger$LogEvent_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/logger/BootstrapLogger;Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;[Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(BootstrapLogger$LogEvent::*)($BootstrapLogger*,$System$Logger$Level*,$ResourceBundle*,$String*,$Throwable*,$ObjectArray*)>(&BootstrapLogger$LogEvent::init$))},
	{"<init>", "(Ljdk/internal/logger/BootstrapLogger;Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;Ljava/lang/Throwable;[Ljava/lang/Object;)V", "(Ljdk/internal/logger/BootstrapLogger;Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier<Ljava/lang/String;>;Ljava/lang/Throwable;[Ljava/lang/Object;)V", $PRIVATE, $method(static_cast<void(BootstrapLogger$LogEvent::*)($BootstrapLogger*,$System$Logger$Level*,$Supplier*,$Throwable*,$ObjectArray*)>(&BootstrapLogger$LogEvent::init$))},
	{"<init>", "(Ljdk/internal/logger/BootstrapLogger;Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;[Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(BootstrapLogger$LogEvent::*)($BootstrapLogger*,$PlatformLogger$Level*,$String*,$String*,$ResourceBundle*,$String*,$Throwable*,$ObjectArray*)>(&BootstrapLogger$LogEvent::init$))},
	{"<init>", "(Ljdk/internal/logger/BootstrapLogger;Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;Ljava/lang/Throwable;[Ljava/lang/Object;)V", "(Ljdk/internal/logger/BootstrapLogger;Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier<Ljava/lang/String;>;Ljava/lang/Throwable;[Ljava/lang/Object;)V", $PRIVATE, $method(static_cast<void(BootstrapLogger$LogEvent::*)($BootstrapLogger*,$PlatformLogger$Level*,$String*,$String*,$Supplier*,$Throwable*,$ObjectArray*)>(&BootstrapLogger$LogEvent::init$))},
	{"lambda$log$0", "(Ljdk/internal/logger/BootstrapLogger$LogEvent;Ljava/lang/System$Logger;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(BootstrapLogger$LogEvent*,$System$Logger*)>(&BootstrapLogger$LogEvent::lambda$log$0))},
	{"lambda$log$1", "(Ljdk/internal/logger/BootstrapLogger$LogEvent;Ljava/lang/System$Logger;)Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)(BootstrapLogger$LogEvent*,$System$Logger*)>(&BootstrapLogger$LogEvent::lambda$log$1))},
	{"lambda$log$2", "(Ljdk/internal/logger/BootstrapLogger$LogEvent;Ljava/lang/System$Logger;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(BootstrapLogger$LogEvent*,$System$Logger*)>(&BootstrapLogger$LogEvent::lambda$log$2))},
	{"lambda$log$3", "(Ljdk/internal/logger/BootstrapLogger$LogEvent;Lsun/util/logging/PlatformLogger$Bridge;)Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)(BootstrapLogger$LogEvent*,$PlatformLogger$Bridge*)>(&BootstrapLogger$LogEvent::lambda$log$3))},
	{"log", "(Ljava/lang/System$Logger;)V", nullptr, $PRIVATE, $method(static_cast<void(BootstrapLogger$LogEvent::*)($System$Logger*)>(&BootstrapLogger$LogEvent::log))},
	{"log", "(Lsun/util/logging/PlatformLogger$Bridge;)V", nullptr, $PRIVATE, $method(static_cast<void(BootstrapLogger$LogEvent::*)($PlatformLogger$Bridge*)>(&BootstrapLogger$LogEvent::log))},
	{"log", "(Ljdk/internal/logger/BootstrapLogger$LogEvent;Ljava/lang/System$Logger;)V", nullptr, $STATIC, $method(static_cast<void(*)(BootstrapLogger$LogEvent*,$System$Logger*)>(&BootstrapLogger$LogEvent::log))},
	{"log", "(Ljdk/internal/logger/BootstrapLogger$LogEvent;Lsun/util/logging/PlatformLogger$Bridge;)V", nullptr, $STATIC, $method(static_cast<void(*)(BootstrapLogger$LogEvent*,$PlatformLogger$Bridge*)>(&BootstrapLogger$LogEvent::log))},
	{"log", "(Ljdk/internal/logger/BootstrapLogger$LogEvent;)V", nullptr, $STATIC, $method(static_cast<void(*)(BootstrapLogger$LogEvent*)>(&BootstrapLogger$LogEvent::log))},
	{"valueOf", "(Ljdk/internal/logger/BootstrapLogger;Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", nullptr, $STATIC, $method(static_cast<BootstrapLogger$LogEvent*(*)($BootstrapLogger*,$System$Logger$Level*,$ResourceBundle*,$String*,$Throwable*)>(&BootstrapLogger$LogEvent::valueOf))},
	{"valueOf", "(Ljdk/internal/logger/BootstrapLogger;Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", nullptr, $STATIC, $method(static_cast<BootstrapLogger$LogEvent*(*)($BootstrapLogger*,$System$Logger$Level*,$ResourceBundle*,$String*,$ObjectArray*)>(&BootstrapLogger$LogEvent::valueOf))},
	{"valueOf", "(Ljdk/internal/logger/BootstrapLogger;Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;Ljava/lang/Throwable;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", "(Ljdk/internal/logger/BootstrapLogger;Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier<Ljava/lang/String;>;Ljava/lang/Throwable;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", $STATIC, $method(static_cast<BootstrapLogger$LogEvent*(*)($BootstrapLogger*,$System$Logger$Level*,$Supplier*,$Throwable*)>(&BootstrapLogger$LogEvent::valueOf))},
	{"valueOf", "(Ljdk/internal/logger/BootstrapLogger;Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", "(Ljdk/internal/logger/BootstrapLogger;Ljava/lang/System$Logger$Level;Ljava/util/function/Supplier<Ljava/lang/String;>;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", $STATIC, $method(static_cast<BootstrapLogger$LogEvent*(*)($BootstrapLogger*,$System$Logger$Level*,$Supplier*)>(&BootstrapLogger$LogEvent::valueOf))},
	{"valueOf", "(Ljdk/internal/logger/BootstrapLogger;Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", nullptr, $STATIC, $method(static_cast<BootstrapLogger$LogEvent*(*)($BootstrapLogger*,$PlatformLogger$Level*,$String*)>(&BootstrapLogger$LogEvent::valueOf))},
	{"valueOf", "(Ljdk/internal/logger/BootstrapLogger;Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/Throwable;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", nullptr, $STATIC, $method(static_cast<BootstrapLogger$LogEvent*(*)($BootstrapLogger*,$PlatformLogger$Level*,$String*,$Throwable*)>(&BootstrapLogger$LogEvent::valueOf))},
	{"valueOf", "(Ljdk/internal/logger/BootstrapLogger;Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;[Ljava/lang/Object;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", nullptr, $STATIC, $method(static_cast<BootstrapLogger$LogEvent*(*)($BootstrapLogger*,$PlatformLogger$Level*,$String*,$ObjectArray*)>(&BootstrapLogger$LogEvent::valueOf))},
	{"valueOf", "(Ljdk/internal/logger/BootstrapLogger;Lsun/util/logging/PlatformLogger$Level;Ljava/util/function/Supplier;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", "(Ljdk/internal/logger/BootstrapLogger;Lsun/util/logging/PlatformLogger$Level;Ljava/util/function/Supplier<Ljava/lang/String;>;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", $STATIC, $method(static_cast<BootstrapLogger$LogEvent*(*)($BootstrapLogger*,$PlatformLogger$Level*,$Supplier*)>(&BootstrapLogger$LogEvent::valueOf))},
	{"valueOf", "(Ljdk/internal/logger/BootstrapLogger;Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", nullptr, $STATIC, $method(static_cast<BootstrapLogger$LogEvent*(*)($BootstrapLogger*,$PlatformLogger$Level*,$String*,$String*,$ResourceBundle*,$String*,$ObjectArray*)>(&BootstrapLogger$LogEvent::valueOf))},
	{"valueOf", "(Ljdk/internal/logger/BootstrapLogger;Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", nullptr, $STATIC, $method(static_cast<BootstrapLogger$LogEvent*(*)($BootstrapLogger*,$PlatformLogger$Level*,$String*,$String*,$ResourceBundle*,$String*,$Throwable*)>(&BootstrapLogger$LogEvent::valueOf))},
	{"valueOf", "(Ljdk/internal/logger/BootstrapLogger;Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;Ljava/lang/Throwable;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", "(Ljdk/internal/logger/BootstrapLogger;Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier<Ljava/lang/String;>;Ljava/lang/Throwable;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", $STATIC, $method(static_cast<BootstrapLogger$LogEvent*(*)($BootstrapLogger*,$PlatformLogger$Level*,$String*,$String*,$Supplier*,$Throwable*)>(&BootstrapLogger$LogEvent::valueOf))},
	{"vaueOf", "(Ljdk/internal/logger/BootstrapLogger;Lsun/util/logging/PlatformLogger$Level;Ljava/util/function/Supplier;Ljava/lang/Throwable;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", "(Ljdk/internal/logger/BootstrapLogger;Lsun/util/logging/PlatformLogger$Level;Ljava/util/function/Supplier<Ljava/lang/String;>;Ljava/lang/Throwable;)Ljdk/internal/logger/BootstrapLogger$LogEvent;", $STATIC, $method(static_cast<BootstrapLogger$LogEvent*(*)($BootstrapLogger*,$PlatformLogger$Level*,$Supplier*,$Throwable*)>(&BootstrapLogger$LogEvent::vaueOf))},
	{}
};

$InnerClassInfo _BootstrapLogger$LogEvent_InnerClassesInfo_[] = {
	{"jdk.internal.logger.BootstrapLogger$LogEvent", "jdk.internal.logger.BootstrapLogger", "LogEvent", $STATIC | $FINAL},
	{}
};

$ClassInfo _BootstrapLogger$LogEvent_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.logger.BootstrapLogger$LogEvent",
	"java.lang.Object",
	nullptr,
	_BootstrapLogger$LogEvent_FieldInfo_,
	_BootstrapLogger$LogEvent_MethodInfo_,
	nullptr,
	nullptr,
	_BootstrapLogger$LogEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.logger.BootstrapLogger"
};

$Object* allocate$BootstrapLogger$LogEvent($Class* clazz) {
	return $of($alloc(BootstrapLogger$LogEvent));
}

bool BootstrapLogger$LogEvent::$assertionsDisabled = false;

void BootstrapLogger$LogEvent::init$($BootstrapLogger* bootstrap, $System$Logger$Level* level, $ResourceBundle* bundle, $String* msg, $Throwable* thrown, $ObjectArray* params) {
	$set(this, acc, $AccessController::getContext());
	this->timeMillis = $System::currentTimeMillis();
	this->nanoAdjustment = $VM::getNanoTimeAdjustment(this->timeMillis);
	$set(this, level, level);
	$set(this, platformLevel, nullptr);
	$set(this, bundle, bundle);
	$set(this, msg, msg);
	$set(this, msgSupplier, nullptr);
	$set(this, thrown, thrown);
	$set(this, params, params);
	$set(this, sourceClass, nullptr);
	$set(this, sourceMethod, nullptr);
	$set(this, bootstrap, bootstrap);
}

void BootstrapLogger$LogEvent::init$($BootstrapLogger* bootstrap, $System$Logger$Level* level, $Supplier* msgSupplier, $Throwable* thrown, $ObjectArray* params) {
	$set(this, acc, $AccessController::getContext());
	this->timeMillis = $System::currentTimeMillis();
	this->nanoAdjustment = $VM::getNanoTimeAdjustment(this->timeMillis);
	$set(this, level, level);
	$set(this, platformLevel, nullptr);
	$set(this, bundle, nullptr);
	$set(this, msg, nullptr);
	$set(this, msgSupplier, msgSupplier);
	$set(this, thrown, thrown);
	$set(this, params, params);
	$set(this, sourceClass, nullptr);
	$set(this, sourceMethod, nullptr);
	$set(this, bootstrap, bootstrap);
}

void BootstrapLogger$LogEvent::init$($BootstrapLogger* bootstrap, $PlatformLogger$Level* platformLevel, $String* sourceClass, $String* sourceMethod, $ResourceBundle* bundle, $String* msg, $Throwable* thrown, $ObjectArray* params) {
	$set(this, acc, $AccessController::getContext());
	this->timeMillis = $System::currentTimeMillis();
	this->nanoAdjustment = $VM::getNanoTimeAdjustment(this->timeMillis);
	$set(this, level, nullptr);
	$set(this, platformLevel, platformLevel);
	$set(this, bundle, bundle);
	$set(this, msg, msg);
	$set(this, msgSupplier, nullptr);
	$set(this, thrown, thrown);
	$set(this, params, params);
	$set(this, sourceClass, sourceClass);
	$set(this, sourceMethod, sourceMethod);
	$set(this, bootstrap, bootstrap);
}

void BootstrapLogger$LogEvent::init$($BootstrapLogger* bootstrap, $PlatformLogger$Level* platformLevel, $String* sourceClass, $String* sourceMethod, $Supplier* msgSupplier, $Throwable* thrown, $ObjectArray* params) {
	$set(this, acc, $AccessController::getContext());
	this->timeMillis = $System::currentTimeMillis();
	this->nanoAdjustment = $VM::getNanoTimeAdjustment(this->timeMillis);
	$set(this, level, nullptr);
	$set(this, platformLevel, platformLevel);
	$set(this, bundle, nullptr);
	$set(this, msg, nullptr);
	$set(this, msgSupplier, msgSupplier);
	$set(this, thrown, thrown);
	$set(this, params, params);
	$set(this, sourceClass, sourceClass);
	$set(this, sourceMethod, sourceMethod);
	$set(this, bootstrap, bootstrap);
}

void BootstrapLogger$LogEvent::log($System$Logger* logger) {
	if (!BootstrapLogger$LogEvent::$assertionsDisabled && !(this->platformLevel == nullptr && this->level != nullptr)) {
		$throwNew($AssertionError);
	}
	if (this->msgSupplier != nullptr) {
		if (this->thrown != nullptr) {
			$nc(logger)->log(this->level, this->msgSupplier, this->thrown);
		} else {
			$nc(logger)->log(this->level, this->msgSupplier);
		}
	} else if (this->thrown != nullptr) {
		$nc(logger)->log(this->level, this->bundle, this->msg, this->thrown);
	} else {
		$nc(logger)->log(this->level, this->bundle, this->msg, this->params);
	}
}

void BootstrapLogger$LogEvent::log($PlatformLogger$Bridge* logger) {
	if (!BootstrapLogger$LogEvent::$assertionsDisabled && !(this->platformLevel != nullptr && this->level == nullptr)) {
		$throwNew($AssertionError);
	}
	if (this->sourceClass == nullptr) {
		if (this->msgSupplier != nullptr) {
			if (this->thrown != nullptr) {
				$nc(logger)->log(this->platformLevel, this->thrown, this->msgSupplier);
			} else {
				$nc(logger)->log(this->platformLevel, this->msgSupplier);
			}
		} else if (this->thrown != nullptr) {
			$nc(logger)->logrb(this->platformLevel, this->bundle, this->msg, this->thrown);
		} else {
			$nc(logger)->logrb(this->platformLevel, this->bundle, this->msg, this->params);
		}
	} else if (this->msgSupplier != nullptr) {
		if (this->thrown != nullptr) {
			$nc(logger)->logp(this->platformLevel, this->sourceClass, this->sourceMethod, this->thrown, this->msgSupplier);
		} else {
			$nc(logger)->logp(this->platformLevel, this->sourceClass, this->sourceMethod, this->msgSupplier);
		}
	} else if (this->thrown != nullptr) {
		$nc(logger)->logrb(this->platformLevel, this->sourceClass, this->sourceMethod, this->bundle, this->msg, this->thrown);
	} else {
		$nc(logger)->logrb(this->platformLevel, this->sourceClass, this->sourceMethod, this->bundle, this->msg, this->params);
	}
}

BootstrapLogger$LogEvent* BootstrapLogger$LogEvent::valueOf($BootstrapLogger* bootstrap, $System$Logger$Level* level, $ResourceBundle* bundle, $String* key, $Throwable* thrown) {
	$init(BootstrapLogger$LogEvent);
	$var($BootstrapLogger, var$0, $cast($BootstrapLogger, $Objects::requireNonNull(bootstrap)));
	return $new(BootstrapLogger$LogEvent, var$0, $cast($System$Logger$Level, $Objects::requireNonNull(level)), bundle, key, thrown, nullptr);
}

BootstrapLogger$LogEvent* BootstrapLogger$LogEvent::valueOf($BootstrapLogger* bootstrap, $System$Logger$Level* level, $ResourceBundle* bundle, $String* format, $ObjectArray* params) {
	$init(BootstrapLogger$LogEvent);
	$var($BootstrapLogger, var$0, $cast($BootstrapLogger, $Objects::requireNonNull(bootstrap)));
	return $new(BootstrapLogger$LogEvent, var$0, $cast($System$Logger$Level, $Objects::requireNonNull(level)), bundle, format, nullptr, params);
}

BootstrapLogger$LogEvent* BootstrapLogger$LogEvent::valueOf($BootstrapLogger* bootstrap, $System$Logger$Level* level, $Supplier* msgSupplier, $Throwable* thrown) {
	$init(BootstrapLogger$LogEvent);
	$useLocalCurrentObjectStackCache();
	$var($BootstrapLogger, var$0, $cast($BootstrapLogger, $Objects::requireNonNull(bootstrap)));
	$var($System$Logger$Level, var$1, $cast($System$Logger$Level, $Objects::requireNonNull(level)));
	return $new(BootstrapLogger$LogEvent, var$0, var$1, $cast($Supplier, $Objects::requireNonNull(msgSupplier)), thrown, nullptr);
}

BootstrapLogger$LogEvent* BootstrapLogger$LogEvent::valueOf($BootstrapLogger* bootstrap, $System$Logger$Level* level, $Supplier* msgSupplier) {
	$init(BootstrapLogger$LogEvent);
	$useLocalCurrentObjectStackCache();
	$var($BootstrapLogger, var$0, $cast($BootstrapLogger, $Objects::requireNonNull(bootstrap)));
	$var($System$Logger$Level, var$1, $cast($System$Logger$Level, $Objects::requireNonNull(level)));
	return $new(BootstrapLogger$LogEvent, var$0, var$1, $cast($Supplier, $Objects::requireNonNull(msgSupplier)), nullptr, nullptr);
}

void BootstrapLogger$LogEvent::log(BootstrapLogger$LogEvent* log, $System$Logger* logger) {
	$init(BootstrapLogger$LogEvent);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm == nullptr || $nc(log)->acc == nullptr) {
		$BootstrapLogger$BootstrapExecutors::submit(static_cast<$Runnable*>($$new(BootstrapLogger$LogEvent$$Lambda$lambda$log$0, log, logger)));
	} else {
		$BootstrapLogger$BootstrapExecutors::submit(static_cast<$Runnable*>($$new(BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1, log, logger)));
	}
}

BootstrapLogger$LogEvent* BootstrapLogger$LogEvent::valueOf($BootstrapLogger* bootstrap, $PlatformLogger$Level* level, $String* msg) {
	$init(BootstrapLogger$LogEvent);
	$var($BootstrapLogger, var$0, $cast($BootstrapLogger, $Objects::requireNonNull(bootstrap)));
	return $new(BootstrapLogger$LogEvent, var$0, $cast($PlatformLogger$Level, $Objects::requireNonNull(level)), nullptr, nullptr, nullptr, msg, nullptr, nullptr);
}

BootstrapLogger$LogEvent* BootstrapLogger$LogEvent::valueOf($BootstrapLogger* bootstrap, $PlatformLogger$Level* level, $String* msg, $Throwable* thrown) {
	$init(BootstrapLogger$LogEvent);
	$var($BootstrapLogger, var$0, $cast($BootstrapLogger, $Objects::requireNonNull(bootstrap)));
	return $new(BootstrapLogger$LogEvent, var$0, $cast($PlatformLogger$Level, $Objects::requireNonNull(level)), nullptr, nullptr, nullptr, msg, thrown, nullptr);
}

BootstrapLogger$LogEvent* BootstrapLogger$LogEvent::valueOf($BootstrapLogger* bootstrap, $PlatformLogger$Level* level, $String* msg, $ObjectArray* params) {
	$init(BootstrapLogger$LogEvent);
	$var($BootstrapLogger, var$0, $cast($BootstrapLogger, $Objects::requireNonNull(bootstrap)));
	return $new(BootstrapLogger$LogEvent, var$0, $cast($PlatformLogger$Level, $Objects::requireNonNull(level)), nullptr, nullptr, nullptr, msg, nullptr, params);
}

BootstrapLogger$LogEvent* BootstrapLogger$LogEvent::valueOf($BootstrapLogger* bootstrap, $PlatformLogger$Level* level, $Supplier* msgSupplier) {
	$init(BootstrapLogger$LogEvent);
	$var($BootstrapLogger, var$0, $cast($BootstrapLogger, $Objects::requireNonNull(bootstrap)));
	return $new(BootstrapLogger$LogEvent, var$0, $cast($PlatformLogger$Level, $Objects::requireNonNull(level)), nullptr, nullptr, msgSupplier, nullptr, nullptr);
}

BootstrapLogger$LogEvent* BootstrapLogger$LogEvent::vaueOf($BootstrapLogger* bootstrap, $PlatformLogger$Level* level, $Supplier* msgSupplier, $Throwable* thrown) {
	$init(BootstrapLogger$LogEvent);
	$var($BootstrapLogger, var$0, $cast($BootstrapLogger, $Objects::requireNonNull(bootstrap)));
	return $new(BootstrapLogger$LogEvent, var$0, $cast($PlatformLogger$Level, $Objects::requireNonNull(level)), nullptr, nullptr, msgSupplier, thrown, nullptr);
}

BootstrapLogger$LogEvent* BootstrapLogger$LogEvent::valueOf($BootstrapLogger* bootstrap, $PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $ResourceBundle* bundle, $String* msg, $ObjectArray* params) {
	$init(BootstrapLogger$LogEvent);
	$var($BootstrapLogger, var$0, $cast($BootstrapLogger, $Objects::requireNonNull(bootstrap)));
	return $new(BootstrapLogger$LogEvent, var$0, $cast($PlatformLogger$Level, $Objects::requireNonNull(level)), sourceClass, sourceMethod, bundle, msg, nullptr, params);
}

BootstrapLogger$LogEvent* BootstrapLogger$LogEvent::valueOf($BootstrapLogger* bootstrap, $PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $ResourceBundle* bundle, $String* msg, $Throwable* thrown) {
	$init(BootstrapLogger$LogEvent);
	$var($BootstrapLogger, var$0, $cast($BootstrapLogger, $Objects::requireNonNull(bootstrap)));
	return $new(BootstrapLogger$LogEvent, var$0, $cast($PlatformLogger$Level, $Objects::requireNonNull(level)), sourceClass, sourceMethod, bundle, msg, thrown, nullptr);
}

BootstrapLogger$LogEvent* BootstrapLogger$LogEvent::valueOf($BootstrapLogger* bootstrap, $PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $Supplier* msgSupplier, $Throwable* thrown) {
	$init(BootstrapLogger$LogEvent);
	$var($BootstrapLogger, var$0, $cast($BootstrapLogger, $Objects::requireNonNull(bootstrap)));
	return $new(BootstrapLogger$LogEvent, var$0, $cast($PlatformLogger$Level, $Objects::requireNonNull(level)), sourceClass, sourceMethod, msgSupplier, thrown, nullptr);
}

void BootstrapLogger$LogEvent::log(BootstrapLogger$LogEvent* log, $PlatformLogger$Bridge* logger) {
	$init(BootstrapLogger$LogEvent);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm == nullptr || $nc(log)->acc == nullptr) {
		log->log(logger);
	} else {
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2, log, logger)), log->acc);
	}
}

void BootstrapLogger$LogEvent::log(BootstrapLogger$LogEvent* event) {
	$init(BootstrapLogger$LogEvent);
	$nc($nc(event)->bootstrap)->flush(event);
}

$Void* BootstrapLogger$LogEvent::lambda$log$3(BootstrapLogger$LogEvent* log, $PlatformLogger$Bridge* logger) {
	$init(BootstrapLogger$LogEvent);
	$nc(log)->log(logger);
	return nullptr;
}

void BootstrapLogger$LogEvent::lambda$log$2(BootstrapLogger$LogEvent* log, $System$Logger* logger) {
	$init(BootstrapLogger$LogEvent);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3, log, logger)), $nc(log)->acc);
}

$Void* BootstrapLogger$LogEvent::lambda$log$1(BootstrapLogger$LogEvent* log, $System$Logger* logger) {
	$init(BootstrapLogger$LogEvent);
	$nc(log)->log(logger);
	return nullptr;
}

void BootstrapLogger$LogEvent::lambda$log$0(BootstrapLogger$LogEvent* log, $System$Logger* logger) {
	$init(BootstrapLogger$LogEvent);
	$nc(log)->log(logger);
}

void clinit$BootstrapLogger$LogEvent($Class* class$) {
	$load($BootstrapLogger);
	BootstrapLogger$LogEvent::$assertionsDisabled = !$BootstrapLogger::class$->desiredAssertionStatus();
}

BootstrapLogger$LogEvent::BootstrapLogger$LogEvent() {
}

$Class* BootstrapLogger$LogEvent::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(BootstrapLogger$LogEvent$$Lambda$lambda$log$0::classInfo$.name)) {
			return BootstrapLogger$LogEvent$$Lambda$lambda$log$0::load$(name, initialize);
		}
		if (name->equals(BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1::classInfo$.name)) {
			return BootstrapLogger$LogEvent$$Lambda$lambda$log$2$1::load$(name, initialize);
		}
		if (name->equals(BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2::classInfo$.name)) {
			return BootstrapLogger$LogEvent$$Lambda$lambda$log$3$2::load$(name, initialize);
		}
		if (name->equals(BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3::classInfo$.name)) {
			return BootstrapLogger$LogEvent$$Lambda$lambda$log$1$3::load$(name, initialize);
		}
	}
	$loadClass(BootstrapLogger$LogEvent, name, initialize, &_BootstrapLogger$LogEvent_ClassInfo_, clinit$BootstrapLogger$LogEvent, allocate$BootstrapLogger$LogEvent);
	return class$;
}

$Class* BootstrapLogger$LogEvent::class$ = nullptr;

		} // logger
	} // internal
} // jdk