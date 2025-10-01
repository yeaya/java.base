#include <sun/util/logging/PlatformLogger.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jdk/internal/logger/LazyLoggers.h>
#include <sun/util/logging/PlatformLogger$Bridge.h>
#include <sun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration.h>
#include <sun/util/logging/PlatformLogger$ConfigurableBridge.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <jcpp.h>

#undef CONFIG
#undef ALL
#undef SEVERE
#undef FINER
#undef FINEST
#undef FINE
#undef INFO
#undef WARNING
#undef OFF

using $PlatformLogger$LevelArray = $Array<::sun::util::logging::PlatformLogger$Level>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $NullPointerException = ::java::lang::NullPointerException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $LazyLoggers = ::jdk::internal::logger::LazyLoggers;
using $PlatformLogger$Bridge = ::sun::util::logging::PlatformLogger$Bridge;
using $PlatformLogger$ConfigurableBridge = ::sun::util::logging::PlatformLogger$ConfigurableBridge;
using $PlatformLogger$ConfigurableBridge$LoggerConfiguration = ::sun::util::logging::PlatformLogger$ConfigurableBridge$LoggerConfiguration;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace util {
		namespace logging {

$CompoundAttribute _PlatformLogger_MethodAnnotations_setLevel21[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _PlatformLogger_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PlatformLogger, $assertionsDisabled)},
	{"loggers", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/ref/WeakReference<Lsun/util/logging/PlatformLogger;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(PlatformLogger, loggers)},
	{"loggerProxy", "Lsun/util/logging/PlatformLogger$Bridge;", nullptr, $PRIVATE | $FINAL, $field(PlatformLogger, loggerProxy)},
	{"spi2platformLevelMapping", "[Lsun/util/logging/PlatformLogger$Level;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PlatformLogger, spi2platformLevelMapping)},
	{}
};

$MethodInfo _PlatformLogger_MethodInfo_[] = {
	{"<init>", "(Lsun/util/logging/PlatformLogger$Bridge;)V", nullptr, $PRIVATE, $method(static_cast<void(PlatformLogger::*)($PlatformLogger$Bridge*)>(&PlatformLogger::init$))},
	{"config", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"config", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"config", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"fine", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"fine", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"fine", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"finer", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"finer", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"finer", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"finest", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"finest", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"finest", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"getLogger", "(Ljava/lang/String;)Lsun/util/logging/PlatformLogger;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<PlatformLogger*(*)($String*)>(&PlatformLogger::getLogger))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"info", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"info", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"info", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{"isLoggable", "(Lsun/util/logging/PlatformLogger$Level;)Z", nullptr, $PUBLIC},
	{"level", "()Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC},
	{"setLevel", "(Lsun/util/logging/PlatformLogger$Level;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _PlatformLogger_MethodAnnotations_setLevel21},
	{"severe", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"severe", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"severe", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"toPlatformLevel", "(Ljava/lang/System$Logger$Level;)Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PlatformLogger$Level*(*)($System$Logger$Level*)>(&PlatformLogger::toPlatformLevel))},
	{"warning", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"warning", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"warning", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{}
};

$InnerClassInfo _PlatformLogger_InnerClassesInfo_[] = {
	{"sun.util.logging.PlatformLogger$ConfigurableBridge", "sun.util.logging.PlatformLogger", "ConfigurableBridge", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.util.logging.PlatformLogger$Bridge", "sun.util.logging.PlatformLogger", "Bridge", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.util.logging.PlatformLogger$Level", "sun.util.logging.PlatformLogger", "Level", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _PlatformLogger_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.logging.PlatformLogger",
	"java.lang.Object",
	nullptr,
	_PlatformLogger_FieldInfo_,
	_PlatformLogger_MethodInfo_,
	nullptr,
	nullptr,
	_PlatformLogger_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.util.logging.PlatformLogger$ConfigurableBridge,sun.util.logging.PlatformLogger$ConfigurableBridge$LoggerConfiguration,sun.util.logging.PlatformLogger$Bridge,sun.util.logging.PlatformLogger$Level"
};

$Object* allocate$PlatformLogger($Class* clazz) {
	return $of($alloc(PlatformLogger));
}

bool PlatformLogger::$assertionsDisabled = false;
$Map* PlatformLogger::loggers = nullptr;
$PlatformLogger$LevelArray* PlatformLogger::spi2platformLevelMapping = nullptr;

PlatformLogger* PlatformLogger::getLogger($String* name) {
	$load(PlatformLogger);
	$synchronized(class$) {
		$init(PlatformLogger);
		$var(PlatformLogger, log, nullptr);
		$var($WeakReference, ref, $cast($WeakReference, $nc(PlatformLogger::loggers)->get(name)));
		if (ref != nullptr) {
			$assign(log, $cast(PlatformLogger, ref->get()));
		}
		if (log == nullptr) {
			$assign(log, $new(PlatformLogger, $($PlatformLogger$Bridge::convert($($LazyLoggers::getLazyLogger(name, $(PlatformLogger::class$->getModule())))))));
			$nc(PlatformLogger::loggers)->put(name, $$new($WeakReference, log));
		}
		return log;
	}
}

void PlatformLogger::init$($PlatformLogger$Bridge* loggerProxy) {
	$set(this, loggerProxy, loggerProxy);
}

bool PlatformLogger::isEnabled() {
	return $nc(this->loggerProxy)->isEnabled();
}

$String* PlatformLogger::getName() {
	return $nc(this->loggerProxy)->getName();
}

bool PlatformLogger::isLoggable($PlatformLogger$Level* level) {
	if (level == nullptr) {
		$throwNew($NullPointerException);
	}
	return $nc(this->loggerProxy)->isLoggable(level);
}

$PlatformLogger$Level* PlatformLogger::level() {
	$var($PlatformLogger$ConfigurableBridge$LoggerConfiguration, spi, $PlatformLogger$ConfigurableBridge::getLoggerConfiguration(this->loggerProxy));
	return spi == nullptr ? ($PlatformLogger$Level*)nullptr : $nc(spi)->getPlatformLevel();
}

void PlatformLogger::setLevel($PlatformLogger$Level* newLevel) {
	$var($PlatformLogger$ConfigurableBridge$LoggerConfiguration, spi, $PlatformLogger$ConfigurableBridge::getLoggerConfiguration(this->loggerProxy));
	if (spi != nullptr) {
		spi->setPlatformLevel(newLevel);
	}
}

void PlatformLogger::severe($String* msg) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::SEVERE, msg, ($ObjectArray*)nullptr);
}

void PlatformLogger::severe($String* msg, $Throwable* t) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::SEVERE, msg, t);
}

void PlatformLogger::severe($String* msg, $ObjectArray* params) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::SEVERE, msg, params);
}

void PlatformLogger::warning($String* msg) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::WARNING, msg, ($ObjectArray*)nullptr);
}

void PlatformLogger::warning($String* msg, $Throwable* t) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::WARNING, msg, t);
}

void PlatformLogger::warning($String* msg, $ObjectArray* params) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::WARNING, msg, params);
}

void PlatformLogger::info($String* msg) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::INFO, msg, ($ObjectArray*)nullptr);
}

void PlatformLogger::info($String* msg, $Throwable* t) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::INFO, msg, t);
}

void PlatformLogger::info($String* msg, $ObjectArray* params) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::INFO, msg, params);
}

void PlatformLogger::config($String* msg) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::CONFIG, msg, ($ObjectArray*)nullptr);
}

void PlatformLogger::config($String* msg, $Throwable* t) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::CONFIG, msg, t);
}

void PlatformLogger::config($String* msg, $ObjectArray* params) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::CONFIG, msg, params);
}

void PlatformLogger::fine($String* msg) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::FINE, msg, ($ObjectArray*)nullptr);
}

void PlatformLogger::fine($String* msg, $Throwable* t) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::FINE, msg, t);
}

void PlatformLogger::fine($String* msg, $ObjectArray* params) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::FINE, msg, params);
}

void PlatformLogger::finer($String* msg) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::FINER, msg, ($ObjectArray*)nullptr);
}

void PlatformLogger::finer($String* msg, $Throwable* t) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::FINER, msg, t);
}

void PlatformLogger::finer($String* msg, $ObjectArray* params) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::FINER, msg, params);
}

void PlatformLogger::finest($String* msg) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::FINEST, msg, ($ObjectArray*)nullptr);
}

void PlatformLogger::finest($String* msg, $Throwable* t) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::FINEST, msg, t);
}

void PlatformLogger::finest($String* msg, $ObjectArray* params) {
	$init($PlatformLogger$Level);
	$nc(this->loggerProxy)->log($PlatformLogger$Level::FINEST, msg, params);
}

$PlatformLogger$Level* PlatformLogger::toPlatformLevel($System$Logger$Level* level) {
	$init(PlatformLogger);
	if (level == nullptr) {
		return nullptr;
	}
	if (!PlatformLogger::$assertionsDisabled && !($nc(level)->ordinal() < $nc(PlatformLogger::spi2platformLevelMapping)->length)) {
		$throwNew($AssertionError);
	}
	return $nc(PlatformLogger::spi2platformLevelMapping)->get($nc(level)->ordinal());
}

void clinit$PlatformLogger($Class* class$) {
	PlatformLogger::$assertionsDisabled = !PlatformLogger::class$->desiredAssertionStatus();
	$assignStatic(PlatformLogger::loggers, $new($HashMap));
		$init($PlatformLogger$Level);
	$assignStatic(PlatformLogger::spi2platformLevelMapping, $new($PlatformLogger$LevelArray, {
		$PlatformLogger$Level::ALL,
		$PlatformLogger$Level::FINER,
		$PlatformLogger$Level::FINE,
		$PlatformLogger$Level::INFO,
		$PlatformLogger$Level::WARNING,
		$PlatformLogger$Level::SEVERE,
		$PlatformLogger$Level::OFF
	}));
}

PlatformLogger::PlatformLogger() {
}

$Class* PlatformLogger::load$($String* name, bool initialize) {
	$loadClass(PlatformLogger, name, initialize, &_PlatformLogger_ClassInfo_, clinit$PlatformLogger, allocate$PlatformLogger);
	return class$;
}

$Class* PlatformLogger::class$ = nullptr;

		} // logging
	} // util
} // sun