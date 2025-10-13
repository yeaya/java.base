#include <jdk/internal/logger/SimpleConsoleLogger.h>

#include <java/io/PrintStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/String.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/ZonedDateTime.h>
#include <java/util/MissingResourceException.h>
#include <java/util/Optional.h>
#include <java/util/ResourceBundle.h>
#include <java/util/function/Supplier.h>
#include <jdk/internal/logger/SimpleConsoleLogger$CallerFinder.h>
#include <jdk/internal/logger/SimpleConsoleLogger$Formatting.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef DEFAULT_LEVEL
#undef DEFAULT_PLATFORM_LEVEL
#undef INFO
#undef OFF
#undef SIMPLE_CONSOLE_LOGGER_FORMAT

using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $ZonedDateTime = ::java::time::ZonedDateTime;
using $MissingResourceException = ::java::util::MissingResourceException;
using $Optional = ::java::util::Optional;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Supplier = ::java::util::function::Supplier;
using $SimpleConsoleLogger$CallerFinder = ::jdk::internal::logger::SimpleConsoleLogger$CallerFinder;
using $SimpleConsoleLogger$Formatting = ::jdk::internal::logger::SimpleConsoleLogger$Formatting;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Bridge = ::sun::util::logging::PlatformLogger$Bridge;
using $PlatformLogger$ConfigurableBridge = ::sun::util::logging::PlatformLogger$ConfigurableBridge;
using $PlatformLogger$ConfigurableBridge$LoggerConfiguration = ::sun::util::logging::PlatformLogger$ConfigurableBridge$LoggerConfiguration;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace jdk {
	namespace internal {
		namespace logger {

$FieldInfo _SimpleConsoleLogger_FieldInfo_[] = {
	{"DEFAULT_LEVEL", "Ljava/lang/System$Logger$Level;", nullptr, $STATIC | $FINAL, $staticField(SimpleConsoleLogger, DEFAULT_LEVEL)},
	{"DEFAULT_PLATFORM_LEVEL", "Lsun/util/logging/PlatformLogger$Level;", nullptr, $STATIC | $FINAL, $staticField(SimpleConsoleLogger, DEFAULT_PLATFORM_LEVEL)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(SimpleConsoleLogger, name)},
	{"level", "Lsun/util/logging/PlatformLogger$Level;", nullptr, $VOLATILE, $field(SimpleConsoleLogger, level)},
	{"usePlatformLevel", "Z", nullptr, $FINAL, $field(SimpleConsoleLogger, usePlatformLevel)},
	{}
};

$MethodInfo _SimpleConsoleLogger_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(SimpleConsoleLogger::*)($String*,bool)>(&SimpleConsoleLogger::init$))},
	{"defaultPlatformLevel", "()Lsun/util/logging/PlatformLogger$Level;", nullptr, 0},
	{"effectiveLevel", "()Lsun/util/logging/PlatformLogger$Level;", nullptr, $PRIVATE, $method(static_cast<$PlatformLogger$Level*(SimpleConsoleLogger::*)()>(&SimpleConsoleLogger::effectiveLevel))},
	{"format", "(Ljava/lang/Enum;Ljava/lang/String;Ljava/lang/Throwable;Ljava/lang/String;)Ljava/lang/String;", "(Ljava/lang/Enum<*>;Ljava/lang/String;Ljava/lang/Throwable;Ljava/lang/String;)Ljava/lang/String;", $PRIVATE | $SYNCHRONIZED, $method(static_cast<$String*(SimpleConsoleLogger::*)($Enum*,$String*,$Throwable*,$String*)>(&SimpleConsoleLogger::format))},
	{"getCallerInfo", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(SimpleConsoleLogger::*)()>(&SimpleConsoleLogger::getCallerInfo))},
	{"getCallerInfo", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(SimpleConsoleLogger::*)($String*,$String*)>(&SimpleConsoleLogger::getCallerInfo))},
	{"getDefaultLevel", "()Ljava/lang/System$Logger$Level;", nullptr, $STATIC, $method(static_cast<$System$Logger$Level*(*)()>(&SimpleConsoleLogger::getDefaultLevel))},
	{"getLoggerConfiguration", "()Lsun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration;", nullptr, $PUBLIC | $FINAL},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getPlatformLevel", "()Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $FINAL},
	{"getSimpleFormatString", "()Ljava/lang/String;", nullptr, 0},
	{"getString", "(Ljava/util/ResourceBundle;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($ResourceBundle*,$String*)>(&SimpleConsoleLogger::getString))},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isLoggable", "(Ljava/lang/System$Logger$Level;)Z", nullptr, $PUBLIC | $FINAL},
	{"isLoggable", "(Lsun/util/logging/PlatformLogger$Level;)Z", nullptr, $PUBLIC | $FINAL},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC | $FINAL},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/Throwable;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC | $FINAL},
	{"logLevel", "(Lsun/util/logging/PlatformLogger$Level;)Ljava/lang/Enum;", "(Lsun/util/logging/PlatformLogger$Level;)Ljava/lang/Enum<*>;", $PRIVATE, $method(static_cast<$Enum*(SimpleConsoleLogger::*)($PlatformLogger$Level*)>(&SimpleConsoleLogger::logLevel))},
	{"logLevel", "(Ljava/lang/System$Logger$Level;)Ljava/lang/Enum;", "(Ljava/lang/System$Logger$Level;)Ljava/lang/Enum<*>;", $PRIVATE, $method(static_cast<$Enum*(SimpleConsoleLogger::*)($System$Logger$Level*)>(&SimpleConsoleLogger::logLevel))},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC | $FINAL},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC | $FINAL},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL},
	{"makeSimpleLogger", "(Ljava/lang/String;)Ljdk/internal/logger/SimpleConsoleLogger;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SimpleConsoleLogger*(*)($String*)>(&SimpleConsoleLogger::makeSimpleLogger))},
	{"outputStream", "()Ljava/io/PrintStream;", nullptr, $STATIC, $method(static_cast<$PrintStream*(*)()>(&SimpleConsoleLogger::outputStream))},
	{"publish", "(Ljava/lang/String;Ljava/lang/Enum;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/Enum<*>;Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(SimpleConsoleLogger::*)($String*,$Enum*,$String*)>(&SimpleConsoleLogger::publish))},
	{"publish", "(Ljava/lang/String;Ljava/lang/Enum;Ljava/lang/String;Ljava/lang/Throwable;)V", "(Ljava/lang/String;Ljava/lang/Enum<*>;Ljava/lang/String;Ljava/lang/Throwable;)V", $PRIVATE, $method(static_cast<void(SimpleConsoleLogger::*)($String*,$Enum*,$String*,$Throwable*)>(&SimpleConsoleLogger::publish))},
	{"publish", "(Ljava/lang/String;Ljava/lang/Enum;Ljava/lang/String;[Ljava/lang/Object;)V", "(Ljava/lang/String;Ljava/lang/Enum<*>;Ljava/lang/String;[Ljava/lang/Object;)V", $PRIVATE | $TRANSIENT, $method(static_cast<void(SimpleConsoleLogger::*)($String*,$Enum*,$String*,$ObjectArray*)>(&SimpleConsoleLogger::publish))},
	{"setPlatformLevel", "(Lsun/util/logging/PlatformLogger$Level;)V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Ljava/lang/Throwable;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(SimpleConsoleLogger::*)($Throwable*)>(&SimpleConsoleLogger::toString))},
	{}
};

$InnerClassInfo _SimpleConsoleLogger_InnerClassesInfo_[] = {
	{"sun.util.logging.PlatformLogger$ConfigurableBridge", "sun.util.logging.PlatformLogger", "ConfigurableBridge", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.util.logging.PlatformLogger$ConfigurableBridge$LoggerConfiguration", "sun.util.logging.PlatformLogger$ConfigurableBridge", "LoggerConfiguration", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.lang.System$Logger", "java.lang.System", "Logger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.util.logging.PlatformLogger$Bridge", "sun.util.logging.PlatformLogger", "Bridge", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.logger.SimpleConsoleLogger$Formatting", "jdk.internal.logger.SimpleConsoleLogger", "Formatting", $STATIC | $FINAL},
	{"jdk.internal.logger.SimpleConsoleLogger$CallerFinder", "jdk.internal.logger.SimpleConsoleLogger", "CallerFinder", $STATIC | $FINAL},
	{}
};

$ClassInfo _SimpleConsoleLogger_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.logger.SimpleConsoleLogger",
	"sun.util.logging.PlatformLogger$ConfigurableBridge$LoggerConfiguration",
	"java.lang.System$Logger,sun.util.logging.PlatformLogger$Bridge,sun.util.logging.PlatformLogger$ConfigurableBridge",
	_SimpleConsoleLogger_FieldInfo_,
	_SimpleConsoleLogger_MethodInfo_,
	nullptr,
	nullptr,
	_SimpleConsoleLogger_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.logger.SimpleConsoleLogger$Formatting,jdk.internal.logger.SimpleConsoleLogger$CallerFinder,jdk.internal.logger.SimpleConsoleLogger$CallerFinder$1"
};

$Object* allocate$SimpleConsoleLogger($Class* clazz) {
	return $of($alloc(SimpleConsoleLogger));
}

int32_t SimpleConsoleLogger::hashCode() {
	 return this->$PlatformLogger$ConfigurableBridge$LoggerConfiguration::hashCode();
}

bool SimpleConsoleLogger::equals(Object$* obj) {
	 return this->$PlatformLogger$ConfigurableBridge$LoggerConfiguration::equals(obj);
}

$Object* SimpleConsoleLogger::clone() {
	 return this->$PlatformLogger$ConfigurableBridge$LoggerConfiguration::clone();
}

$String* SimpleConsoleLogger::toString() {
	 return this->$PlatformLogger$ConfigurableBridge$LoggerConfiguration::toString();
}

void SimpleConsoleLogger::finalize() {
	this->$PlatformLogger$ConfigurableBridge$LoggerConfiguration::finalize();
}

$System$Logger$Level* SimpleConsoleLogger::DEFAULT_LEVEL = nullptr;
$PlatformLogger$Level* SimpleConsoleLogger::DEFAULT_PLATFORM_LEVEL = nullptr;

$System$Logger$Level* SimpleConsoleLogger::getDefaultLevel() {
	$init(SimpleConsoleLogger);
	$var($String, levelName, $GetPropertyAction::privilegedGetProperty("jdk.system.logger.level"_s, "INFO"_s));
	try {
		return $System$Logger$Level::valueOf(levelName);
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, iae, $catch());
		$init($System$Logger$Level);
		return $System$Logger$Level::INFO;
	}
	$shouldNotReachHere();
}

void SimpleConsoleLogger::init$($String* name, bool usePlatformLevel) {
	$PlatformLogger$ConfigurableBridge$LoggerConfiguration::init$();
	$set(this, name, name);
	this->usePlatformLevel = usePlatformLevel;
}

$String* SimpleConsoleLogger::getSimpleFormatString() {
	$init($SimpleConsoleLogger$Formatting);
	return $SimpleConsoleLogger$Formatting::SIMPLE_CONSOLE_LOGGER_FORMAT;
}

$PlatformLogger$Level* SimpleConsoleLogger::defaultPlatformLevel() {
	return SimpleConsoleLogger::DEFAULT_PLATFORM_LEVEL;
}

$String* SimpleConsoleLogger::getName() {
	return this->name;
}

$Enum* SimpleConsoleLogger::logLevel($PlatformLogger$Level* level) {
	return this->usePlatformLevel ? static_cast<$Enum*>(level) : static_cast<$Enum*>($nc(level)->systemLevel());
}

$Enum* SimpleConsoleLogger::logLevel($System$Logger$Level* level) {
	return this->usePlatformLevel ? static_cast<$Enum*>($PlatformLogger::toPlatformLevel(level)) : static_cast<$Enum*>(level);
}

bool SimpleConsoleLogger::isLoggable($System$Logger$Level* level) {
	return isLoggable($($PlatformLogger::toPlatformLevel(level)));
}

void SimpleConsoleLogger::log($System$Logger$Level* level, $ResourceBundle* bundle, $String* key$renamed, $Throwable* thrown) {
	$var($String, key, key$renamed);
	if (isLoggable(level)) {
		if (bundle != nullptr) {
			$assign(key, getString(bundle, key));
		}
		$var($String, var$0, getCallerInfo());
		publish(var$0, $(logLevel(level)), key, thrown);
	}
}

void SimpleConsoleLogger::log($System$Logger$Level* level, $ResourceBundle* bundle, $String* format$renamed, $ObjectArray* params) {
	$var($String, format, format$renamed);
	if (isLoggable(level)) {
		if (bundle != nullptr) {
			$assign(format, getString(bundle, format));
		}
		$var($String, var$0, getCallerInfo());
		publish(var$0, $(logLevel(level)), format, params);
	}
}

bool SimpleConsoleLogger::isLoggable($PlatformLogger$Level* level) {
	$PlatformLogger$Level* effectiveLevel = this->effectiveLevel();
	$init($PlatformLogger$Level);
	bool var$0 = level != $PlatformLogger$Level::OFF;
	if (var$0) {
		int32_t var$1 = $nc(level)->ordinal();
		var$0 = var$1 >= effectiveLevel->ordinal();
	}
	return var$0;
}

bool SimpleConsoleLogger::isEnabled() {
	$init($PlatformLogger$Level);
	return this->level != $PlatformLogger$Level::OFF;
}

void SimpleConsoleLogger::log($PlatformLogger$Level* level, $String* msg) {
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo());
		publish(var$0, $(logLevel(level)), msg);
	}
}

void SimpleConsoleLogger::log($PlatformLogger$Level* level, $String* msg, $Throwable* thrown) {
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo());
		publish(var$0, $(logLevel(level)), msg, thrown);
	}
}

void SimpleConsoleLogger::log($PlatformLogger$Level* level, $String* msg, $ObjectArray* params) {
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo());
		publish(var$0, $(logLevel(level)), msg, params);
	}
}

$PlatformLogger$Level* SimpleConsoleLogger::effectiveLevel() {
	if (this->level == nullptr) {
		return defaultPlatformLevel();
	}
	return this->level;
}

$PlatformLogger$Level* SimpleConsoleLogger::getPlatformLevel() {
	return this->level;
}

void SimpleConsoleLogger::setPlatformLevel($PlatformLogger$Level* newLevel) {
	$set(this, level, newLevel);
}

$PlatformLogger$ConfigurableBridge$LoggerConfiguration* SimpleConsoleLogger::getLoggerConfiguration() {
	return this;
}

$PrintStream* SimpleConsoleLogger::outputStream() {
	$init(SimpleConsoleLogger);
	$init($System);
	return $System::err;
}

$String* SimpleConsoleLogger::getCallerInfo() {
	$var($Optional, frame, $$new($SimpleConsoleLogger$CallerFinder)->get());
	if ($nc(frame)->isPresent()) {
		$var($String, var$0, $$str({$($nc(($cast($StackWalker$StackFrame, $(frame->get()))))->getClassName()), " "_s}));
		return $concat(var$0, $($nc(($cast($StackWalker$StackFrame, $(frame->get()))))->getMethodName()));
	} else {
		return this->name;
	}
}

$String* SimpleConsoleLogger::getCallerInfo($String* sourceClassName, $String* sourceMethodName) {
	if (sourceClassName == nullptr) {
		return this->name;
	}
	if (sourceMethodName == nullptr) {
		return sourceClassName;
	}
	return $str({sourceClassName, " "_s, sourceMethodName});
}

$String* SimpleConsoleLogger::toString($Throwable* thrown) {
	$var($String, throwable, ""_s);
	if (thrown != nullptr) {
		$var($StringWriter, sw, $new($StringWriter));
		$var($PrintWriter, pw, $new($PrintWriter, static_cast<$Writer*>(sw)));
		pw->println();
		thrown->printStackTrace(pw);
		pw->close();
		$assign(throwable, sw->toString());
	}
	return throwable;
}

$String* SimpleConsoleLogger::format($Enum* level, $String* msg, $Throwable* thrown, $String* callerInfo) {
	$synchronized(this) {
		$var($ZonedDateTime, zdt, $ZonedDateTime::now());
		$var($String, throwable, toString(thrown));
		$var($String, var$0, getSimpleFormatString());
		return $String::format(var$0, $$new($ObjectArray, {
			$of(zdt),
			$of(callerInfo),
			$of(this->name),
			$($of($nc(level)->name())),
			$of(msg),
			$of(throwable)
		}));
	}
}

void SimpleConsoleLogger::publish($String* callerInfo, $Enum* level, $String* msg) {
	$nc($(outputStream()))->print($(format(level, msg, nullptr, callerInfo)));
}

void SimpleConsoleLogger::publish($String* callerInfo, $Enum* level, $String* msg, $Throwable* thrown) {
	$nc($(outputStream()))->print($(format(level, msg, thrown, callerInfo)));
}

void SimpleConsoleLogger::publish($String* callerInfo, $Enum* level, $String* msg$renamed, $ObjectArray* params) {
	$var($String, msg, msg$renamed);
	$assign(msg, params == nullptr || $nc(params)->length == 0 ? msg : $SimpleConsoleLogger$Formatting::formatMessage(msg, params));
	$nc($(outputStream()))->print($(format(level, msg, nullptr, callerInfo)));
}

SimpleConsoleLogger* SimpleConsoleLogger::makeSimpleLogger($String* name) {
	$init(SimpleConsoleLogger);
	return $new(SimpleConsoleLogger, name, false);
}

void SimpleConsoleLogger::log($PlatformLogger$Level* level, $Supplier* msgSupplier) {
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo());
		$var($Enum, var$1, logLevel(level));
		publish(var$0, var$1, $cast($String, $($nc(msgSupplier)->get())));
	}
}

void SimpleConsoleLogger::log($PlatformLogger$Level* level, $Throwable* thrown, $Supplier* msgSupplier) {
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo());
		$var($Enum, var$1, logLevel(level));
		publish(var$0, var$1, $cast($String, $($nc(msgSupplier)->get())), thrown);
	}
}

void SimpleConsoleLogger::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg) {
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo(sourceClass, sourceMethod));
		publish(var$0, $(logLevel(level)), msg);
	}
}

void SimpleConsoleLogger::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $Supplier* msgSupplier) {
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo(sourceClass, sourceMethod));
		$var($Enum, var$1, logLevel(level));
		publish(var$0, var$1, $cast($String, $($nc(msgSupplier)->get())));
	}
}

void SimpleConsoleLogger::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg, $ObjectArray* params) {
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo(sourceClass, sourceMethod));
		publish(var$0, $(logLevel(level)), msg, params);
	}
}

void SimpleConsoleLogger::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg, $Throwable* thrown) {
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo(sourceClass, sourceMethod));
		publish(var$0, $(logLevel(level)), msg, thrown);
	}
}

void SimpleConsoleLogger::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $Throwable* thrown, $Supplier* msgSupplier) {
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo(sourceClass, sourceMethod));
		$var($Enum, var$1, logLevel(level));
		publish(var$0, var$1, $cast($String, $($nc(msgSupplier)->get())), thrown);
	}
}

void SimpleConsoleLogger::logrb($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $ResourceBundle* bundle, $String* key, $ObjectArray* params) {
	if (isLoggable(level)) {
		$var($String, msg, bundle == nullptr ? key : getString(bundle, key));
		$var($String, var$0, getCallerInfo(sourceClass, sourceMethod));
		publish(var$0, $(logLevel(level)), msg, params);
	}
}

void SimpleConsoleLogger::logrb($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $ResourceBundle* bundle, $String* key, $Throwable* thrown) {
	if (isLoggable(level)) {
		$var($String, msg, bundle == nullptr ? key : getString(bundle, key));
		$var($String, var$0, getCallerInfo(sourceClass, sourceMethod));
		publish(var$0, $(logLevel(level)), msg, thrown);
	}
}

void SimpleConsoleLogger::logrb($PlatformLogger$Level* level, $ResourceBundle* bundle, $String* key, $ObjectArray* params) {
	if (isLoggable(level)) {
		$var($String, msg, bundle == nullptr ? key : getString(bundle, key));
		$var($String, var$0, getCallerInfo());
		publish(var$0, $(logLevel(level)), msg, params);
	}
}

void SimpleConsoleLogger::logrb($PlatformLogger$Level* level, $ResourceBundle* bundle, $String* key, $Throwable* thrown) {
	if (isLoggable(level)) {
		$var($String, msg, bundle == nullptr ? key : getString(bundle, key));
		$var($String, var$0, getCallerInfo());
		publish(var$0, $(logLevel(level)), msg, thrown);
	}
}

$String* SimpleConsoleLogger::getString($ResourceBundle* bundle, $String* key) {
	$init(SimpleConsoleLogger);
	if (bundle == nullptr || key == nullptr) {
		return key;
	}
	try {
		return $nc(bundle)->getString(key);
	} catch ($MissingResourceException&) {
		$var($MissingResourceException, x, $catch());
		return key;
	}
	$shouldNotReachHere();
}

void clinit$SimpleConsoleLogger($Class* class$) {
	$assignStatic(SimpleConsoleLogger::DEFAULT_LEVEL, SimpleConsoleLogger::getDefaultLevel());
	$assignStatic(SimpleConsoleLogger::DEFAULT_PLATFORM_LEVEL, $PlatformLogger::toPlatformLevel(SimpleConsoleLogger::DEFAULT_LEVEL));
}

SimpleConsoleLogger::SimpleConsoleLogger() {
}

$Class* SimpleConsoleLogger::load$($String* name, bool initialize) {
	$loadClass(SimpleConsoleLogger, name, initialize, &_SimpleConsoleLogger_ClassInfo_, clinit$SimpleConsoleLogger, allocate$SimpleConsoleLogger);
	return class$;
}

$Class* SimpleConsoleLogger::class$ = nullptr;

		} // logger
	} // internal
} // jdk