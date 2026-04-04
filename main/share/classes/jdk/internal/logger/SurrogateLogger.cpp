#include <jdk/internal/logger/SurrogateLogger.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/util/function/Function.h>
#include <jdk/internal/logger/SimpleConsoleLogger$Formatting.h>
#include <jdk/internal/logger/SimpleConsoleLogger.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <jcpp.h>

#undef INFO
#undef JUL_DEFAULT_LEVEL
#undef JUL_FORMAT_PROP_KEY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $Function = ::java::util::function::Function;
using $SimpleConsoleLogger = ::jdk::internal::logger::SimpleConsoleLogger;
using $SimpleConsoleLogger$Formatting = ::jdk::internal::logger::SimpleConsoleLogger$Formatting;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace jdk {
	namespace internal {
		namespace logger {

$PlatformLogger$Level* SurrogateLogger::JUL_DEFAULT_LEVEL = nullptr;
$volatile($String*) SurrogateLogger::simpleFormatString = nullptr;

void SurrogateLogger::init$($String* name) {
	$SimpleConsoleLogger::init$(name, true);
}

$PlatformLogger$Level* SurrogateLogger::defaultPlatformLevel() {
	return SurrogateLogger::JUL_DEFAULT_LEVEL;
}

$String* SurrogateLogger::getSimpleFormatString() {
	if (SurrogateLogger::simpleFormatString == nullptr) {
		$assignStatic(SurrogateLogger::simpleFormatString, getSimpleFormat(nullptr));
	}
	return SurrogateLogger::simpleFormatString;
}

$String* SurrogateLogger::getSimpleFormat($Function* defaultPropertyGetter) {
	$init(SurrogateLogger);
	$init($SimpleConsoleLogger$Formatting);
	return $SimpleConsoleLogger$Formatting::getSimpleFormat($SimpleConsoleLogger$Formatting::JUL_FORMAT_PROP_KEY, defaultPropertyGetter);
}

SurrogateLogger* SurrogateLogger::makeSurrogateLogger($String* name) {
	$init(SurrogateLogger);
	return $new(SurrogateLogger, name);
}

bool SurrogateLogger::isFilteredFrame($StackWalker$StackFrame* st) {
	$init(SurrogateLogger);
	return $SimpleConsoleLogger$Formatting::isFilteredFrame(st);
}

void SurrogateLogger::clinit$($Class* clazz) {
	$init($PlatformLogger$Level);
	$assignStatic(SurrogateLogger::JUL_DEFAULT_LEVEL, $PlatformLogger$Level::INFO);
}

SurrogateLogger::SurrogateLogger() {
}

$Class* SurrogateLogger::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"JUL_DEFAULT_LEVEL", "Lsun/util/logging/PlatformLogger$Level;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SurrogateLogger, JUL_DEFAULT_LEVEL)},
		{"simpleFormatString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(SurrogateLogger, simpleFormatString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(SurrogateLogger, init$, void, $String*)},
		{"defaultPlatformLevel", "()Lsun/util/logging/PlatformLogger$Level;", nullptr, 0, $virtualMethod(SurrogateLogger, defaultPlatformLevel, $PlatformLogger$Level*)},
		{"getSimpleFormat", "(Ljava/util/function/Function;)Ljava/lang/String;", "(Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/String;>;)Ljava/lang/String;", $PUBLIC | $STATIC, $staticMethod(SurrogateLogger, getSimpleFormat, $String*, $Function*)},
		{"getSimpleFormatString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(SurrogateLogger, getSimpleFormatString, $String*)},
		{"isFilteredFrame", "(Ljava/lang/StackWalker$StackFrame;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SurrogateLogger, isFilteredFrame, bool, $StackWalker$StackFrame*)},
		{"makeSurrogateLogger", "(Ljava/lang/String;)Ljdk/internal/logger/SurrogateLogger;", nullptr, $PUBLIC | $STATIC, $staticMethod(SurrogateLogger, makeSurrogateLogger, SurrogateLogger*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.logger.SurrogateLogger",
		"jdk.internal.logger.SimpleConsoleLogger",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SurrogateLogger, name, initialize, &classInfo$$, SurrogateLogger::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SurrogateLogger));
	});
	return class$;
}

$Class* SurrogateLogger::class$ = nullptr;

		} // logger
	} // internal
} // jdk