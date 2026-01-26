#include <jdk/internal/logger/SimpleConsoleLogger.h>

#include <java/io/PrintWriter.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/Enum.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/System$Logger$Level.h>
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
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(SimpleConsoleLogger, init$, void, $String*, bool)},
	{"defaultPlatformLevel", "()Lsun/util/logging/PlatformLogger$Level;", nullptr, 0, $virtualMethod(SimpleConsoleLogger, defaultPlatformLevel, $PlatformLogger$Level*)},
	{"effectiveLevel", "()Lsun/util/logging/PlatformLogger$Level;", nullptr, $PRIVATE, $method(SimpleConsoleLogger, effectiveLevel, $PlatformLogger$Level*)},
	{"format", "(Ljava/lang/Enum;Ljava/lang/String;Ljava/lang/Throwable;Ljava/lang/String;)Ljava/lang/String;", "(Ljava/lang/Enum<*>;Ljava/lang/String;Ljava/lang/Throwable;Ljava/lang/String;)Ljava/lang/String;", $PRIVATE | $SYNCHRONIZED, $method(SimpleConsoleLogger, format, $String*, $Enum*, $String*, $Throwable*, $String*)},
	{"getCallerInfo", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(SimpleConsoleLogger, getCallerInfo, $String*)},
	{"getCallerInfo", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(SimpleConsoleLogger, getCallerInfo, $String*, $String*, $String*)},
	{"getDefaultLevel", "()Ljava/lang/System$Logger$Level;", nullptr, $STATIC, $staticMethod(SimpleConsoleLogger, getDefaultLevel, $System$Logger$Level*)},
	{"getLoggerConfiguration", "()Lsun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration;", nullptr, $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, getLoggerConfiguration, $PlatformLogger$ConfigurableBridge$LoggerConfiguration*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, getName, $String*)},
	{"getPlatformLevel", "()Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, getPlatformLevel, $PlatformLogger$Level*)},
	{"getSimpleFormatString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(SimpleConsoleLogger, getSimpleFormatString, $String*)},
	{"getString", "(Ljava/util/ResourceBundle;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(SimpleConsoleLogger, getString, $String*, $ResourceBundle*, $String*)},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, isEnabled, bool)},
	{"isLoggable", "(Ljava/lang/System$Logger$Level;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, isLoggable, bool, $System$Logger$Level*)},
	{"isLoggable", "(Lsun/util/logging/PlatformLogger$Level;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, isLoggable, bool, $PlatformLogger$Level*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, log, void, $System$Logger$Level*, $ResourceBundle*, $String*, $Throwable*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT, $virtualMethod(SimpleConsoleLogger, log, void, $System$Logger$Level*, $ResourceBundle*, $String*, $ObjectArray*)},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, log, void, $PlatformLogger$Level*, $String*)},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, log, void, $PlatformLogger$Level*, $String*, $Throwable*)},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT, $virtualMethod(SimpleConsoleLogger, log, void, $PlatformLogger$Level*, $String*, $ObjectArray*)},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, log, void, $PlatformLogger$Level*, $Supplier*)},
	{"log", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/Throwable;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, log, void, $PlatformLogger$Level*, $Throwable*, $Supplier*)},
	{"logLevel", "(Lsun/util/logging/PlatformLogger$Level;)Ljava/lang/Enum;", "(Lsun/util/logging/PlatformLogger$Level;)Ljava/lang/Enum<*>;", $PRIVATE, $method(SimpleConsoleLogger, logLevel, $Enum*, $PlatformLogger$Level*)},
	{"logLevel", "(Ljava/lang/System$Logger$Level;)Ljava/lang/Enum;", "(Ljava/lang/System$Logger$Level;)Ljava/lang/Enum<*>;", $PRIVATE, $method(SimpleConsoleLogger, logLevel, $Enum*, $System$Logger$Level*)},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, logp, void, $PlatformLogger$Level*, $String*, $String*, $String*)},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, logp, void, $PlatformLogger$Level*, $String*, $String*, $Supplier*)},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT, $virtualMethod(SimpleConsoleLogger, logp, void, $PlatformLogger$Level*, $String*, $String*, $String*, $ObjectArray*)},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, logp, void, $PlatformLogger$Level*, $String*, $String*, $String*, $Throwable*)},
	{"logp", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Ljava/util/function/Supplier<Ljava/lang/String;>;)V", $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, logp, void, $PlatformLogger$Level*, $String*, $String*, $Throwable*, $Supplier*)},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT, $virtualMethod(SimpleConsoleLogger, logrb, void, $PlatformLogger$Level*, $String*, $String*, $ResourceBundle*, $String*, $ObjectArray*)},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, logrb, void, $PlatformLogger$Level*, $String*, $String*, $ResourceBundle*, $String*, $Throwable*)},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $TRANSIENT, $virtualMethod(SimpleConsoleLogger, logrb, void, $PlatformLogger$Level*, $ResourceBundle*, $String*, $ObjectArray*)},
	{"logrb", "(Lsun/util/logging/PlatformLogger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, logrb, void, $PlatformLogger$Level*, $ResourceBundle*, $String*, $Throwable*)},
	{"makeSimpleLogger", "(Ljava/lang/String;)Ljdk/internal/logger/SimpleConsoleLogger;", nullptr, $PUBLIC | $STATIC, $staticMethod(SimpleConsoleLogger, makeSimpleLogger, SimpleConsoleLogger*, $String*)},
	{"outputStream", "()Ljava/io/PrintStream;", nullptr, $STATIC, $staticMethod(SimpleConsoleLogger, outputStream, $PrintStream*)},
	{"publish", "(Ljava/lang/String;Ljava/lang/Enum;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/Enum<*>;Ljava/lang/String;)V", $PRIVATE, $method(SimpleConsoleLogger, publish, void, $String*, $Enum*, $String*)},
	{"publish", "(Ljava/lang/String;Ljava/lang/Enum;Ljava/lang/String;Ljava/lang/Throwable;)V", "(Ljava/lang/String;Ljava/lang/Enum<*>;Ljava/lang/String;Ljava/lang/Throwable;)V", $PRIVATE, $method(SimpleConsoleLogger, publish, void, $String*, $Enum*, $String*, $Throwable*)},
	{"publish", "(Ljava/lang/String;Ljava/lang/Enum;Ljava/lang/String;[Ljava/lang/Object;)V", "(Ljava/lang/String;Ljava/lang/Enum<*>;Ljava/lang/String;[Ljava/lang/Object;)V", $PRIVATE | $TRANSIENT, $method(SimpleConsoleLogger, publish, void, $String*, $Enum*, $String*, $ObjectArray*)},
	{"setPlatformLevel", "(Lsun/util/logging/PlatformLogger$Level;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(SimpleConsoleLogger, setPlatformLevel, void, $PlatformLogger$Level*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Ljava/lang/Throwable;)Ljava/lang/String;", nullptr, $PRIVATE, $method(SimpleConsoleLogger, toString, $String*, $Throwable*)},
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
	} catch ($IllegalArgumentException& iae) {
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo());
		publish(var$0, $(logLevel(level)), msg);
	}
}

void SimpleConsoleLogger::log($PlatformLogger$Level* level, $String* msg, $Throwable* thrown) {
	$useLocalCurrentObjectStackCache();
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo());
		publish(var$0, $(logLevel(level)), msg, thrown);
	}
}

void SimpleConsoleLogger::log($PlatformLogger$Level* level, $String* msg, $ObjectArray* params) {
	$useLocalCurrentObjectStackCache();
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
	return $System::err;
}

$String* SimpleConsoleLogger::getCallerInfo() {
	$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
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
		$useLocalCurrentObjectStackCache();
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
	$useLocalCurrentObjectStackCache();
	$nc($(outputStream()))->print($(format(level, msg, nullptr, callerInfo)));
}

void SimpleConsoleLogger::publish($String* callerInfo, $Enum* level, $String* msg, $Throwable* thrown) {
	$useLocalCurrentObjectStackCache();
	$nc($(outputStream()))->print($(format(level, msg, thrown, callerInfo)));
}

void SimpleConsoleLogger::publish($String* callerInfo, $Enum* level, $String* msg$renamed, $ObjectArray* params) {
	$useLocalCurrentObjectStackCache();
	$var($String, msg, msg$renamed);
	$assign(msg, params == nullptr || $nc(params)->length == 0 ? msg : $SimpleConsoleLogger$Formatting::formatMessage(msg, params));
	$nc($(outputStream()))->print($(format(level, msg, nullptr, callerInfo)));
}

SimpleConsoleLogger* SimpleConsoleLogger::makeSimpleLogger($String* name) {
	$init(SimpleConsoleLogger);
	return $new(SimpleConsoleLogger, name, false);
}

void SimpleConsoleLogger::log($PlatformLogger$Level* level, $Supplier* msgSupplier) {
	$useLocalCurrentObjectStackCache();
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo());
		$var($Enum, var$1, logLevel(level));
		publish(var$0, var$1, $cast($String, $($nc(msgSupplier)->get())));
	}
}

void SimpleConsoleLogger::log($PlatformLogger$Level* level, $Throwable* thrown, $Supplier* msgSupplier) {
	$useLocalCurrentObjectStackCache();
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo());
		$var($Enum, var$1, logLevel(level));
		publish(var$0, var$1, $cast($String, $($nc(msgSupplier)->get())), thrown);
	}
}

void SimpleConsoleLogger::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg) {
	$useLocalCurrentObjectStackCache();
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo(sourceClass, sourceMethod));
		publish(var$0, $(logLevel(level)), msg);
	}
}

void SimpleConsoleLogger::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $Supplier* msgSupplier) {
	$useLocalCurrentObjectStackCache();
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo(sourceClass, sourceMethod));
		$var($Enum, var$1, logLevel(level));
		publish(var$0, var$1, $cast($String, $($nc(msgSupplier)->get())));
	}
}

void SimpleConsoleLogger::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg, $ObjectArray* params) {
	$useLocalCurrentObjectStackCache();
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo(sourceClass, sourceMethod));
		publish(var$0, $(logLevel(level)), msg, params);
	}
}

void SimpleConsoleLogger::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $String* msg, $Throwable* thrown) {
	$useLocalCurrentObjectStackCache();
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo(sourceClass, sourceMethod));
		publish(var$0, $(logLevel(level)), msg, thrown);
	}
}

void SimpleConsoleLogger::logp($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $Throwable* thrown, $Supplier* msgSupplier) {
	$useLocalCurrentObjectStackCache();
	if (isLoggable(level)) {
		$var($String, var$0, getCallerInfo(sourceClass, sourceMethod));
		$var($Enum, var$1, logLevel(level));
		publish(var$0, var$1, $cast($String, $($nc(msgSupplier)->get())), thrown);
	}
}

void SimpleConsoleLogger::logrb($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $ResourceBundle* bundle, $String* key, $ObjectArray* params) {
	$useLocalCurrentObjectStackCache();
	if (isLoggable(level)) {
		$var($String, msg, bundle == nullptr ? key : getString(bundle, key));
		$var($String, var$0, getCallerInfo(sourceClass, sourceMethod));
		publish(var$0, $(logLevel(level)), msg, params);
	}
}

void SimpleConsoleLogger::logrb($PlatformLogger$Level* level, $String* sourceClass, $String* sourceMethod, $ResourceBundle* bundle, $String* key, $Throwable* thrown) {
	$useLocalCurrentObjectStackCache();
	if (isLoggable(level)) {
		$var($String, msg, bundle == nullptr ? key : getString(bundle, key));
		$var($String, var$0, getCallerInfo(sourceClass, sourceMethod));
		publish(var$0, $(logLevel(level)), msg, thrown);
	}
}

void SimpleConsoleLogger::logrb($PlatformLogger$Level* level, $ResourceBundle* bundle, $String* key, $ObjectArray* params) {
	$useLocalCurrentObjectStackCache();
	if (isLoggable(level)) {
		$var($String, msg, bundle == nullptr ? key : getString(bundle, key));
		$var($String, var$0, getCallerInfo());
		publish(var$0, $(logLevel(level)), msg, params);
	}
}

void SimpleConsoleLogger::logrb($PlatformLogger$Level* level, $ResourceBundle* bundle, $String* key, $Throwable* thrown) {
	$useLocalCurrentObjectStackCache();
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
	} catch ($MissingResourceException& x) {
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