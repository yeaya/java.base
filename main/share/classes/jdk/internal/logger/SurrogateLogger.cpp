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

$FieldInfo _SurrogateLogger_FieldInfo_[] = {
	{"JUL_DEFAULT_LEVEL", "Lsun/util/logging/PlatformLogger$Level;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SurrogateLogger, JUL_DEFAULT_LEVEL)},
	{"simpleFormatString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(SurrogateLogger, simpleFormatString)},
	{}
};

$MethodInfo _SurrogateLogger_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(SurrogateLogger::*)($String*)>(&SurrogateLogger::init$))},
	{"defaultPlatformLevel", "()Lsun/util/logging/PlatformLogger$Level;", nullptr, 0},
	{"getSimpleFormat", "(Ljava/util/function/Function;)Ljava/lang/String;", "(Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/String;>;)Ljava/lang/String;", $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Function*)>(&SurrogateLogger::getSimpleFormat))},
	{"getSimpleFormatString", "()Ljava/lang/String;", nullptr, 0},
	{"isFilteredFrame", "(Ljava/lang/StackWalker$StackFrame;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($StackWalker$StackFrame*)>(&SurrogateLogger::isFilteredFrame))},
	{"makeSurrogateLogger", "(Ljava/lang/String;)Ljdk/internal/logger/SurrogateLogger;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SurrogateLogger*(*)($String*)>(&SurrogateLogger::makeSurrogateLogger))},
	{}
};

$ClassInfo _SurrogateLogger_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.logger.SurrogateLogger",
	"jdk.internal.logger.SimpleConsoleLogger",
	nullptr,
	_SurrogateLogger_FieldInfo_,
	_SurrogateLogger_MethodInfo_
};

$Object* allocate$SurrogateLogger($Class* clazz) {
	return $of($alloc(SurrogateLogger));
}

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

void clinit$SurrogateLogger($Class* class$) {
	$init($PlatformLogger$Level);
	$assignStatic(SurrogateLogger::JUL_DEFAULT_LEVEL, $PlatformLogger$Level::INFO);
}

SurrogateLogger::SurrogateLogger() {
}

$Class* SurrogateLogger::load$($String* name, bool initialize) {
	$loadClass(SurrogateLogger, name, initialize, &_SurrogateLogger_ClassInfo_, clinit$SurrogateLogger, allocate$SurrogateLogger);
	return class$;
}

$Class* SurrogateLogger::class$ = nullptr;

		} // logger
	} // internal
} // jdk