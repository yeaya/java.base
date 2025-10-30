#include <jdk/internal/logger/LoggerFinderLoader$ErrorPolicy.h>

#include <java/lang/Enum.h>
#include <jdk/internal/logger/LoggerFinderLoader.h>
#include <jcpp.h>

#undef DEBUG
#undef ERROR
#undef QUIET
#undef WARNING

using $LoggerFinderLoader$ErrorPolicyArray = $Array<::jdk::internal::logger::LoggerFinderLoader$ErrorPolicy>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LoggerFinderLoader = ::jdk::internal::logger::LoggerFinderLoader;

namespace jdk {
	namespace internal {
		namespace logger {

$FieldInfo _LoggerFinderLoader$ErrorPolicy_FieldInfo_[] = {
	{"ERROR", "Ljdk/internal/logger/LoggerFinderLoader$ErrorPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LoggerFinderLoader$ErrorPolicy, ERROR)},
	{"WARNING", "Ljdk/internal/logger/LoggerFinderLoader$ErrorPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LoggerFinderLoader$ErrorPolicy, WARNING)},
	{"DEBUG", "Ljdk/internal/logger/LoggerFinderLoader$ErrorPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LoggerFinderLoader$ErrorPolicy, DEBUG)},
	{"QUIET", "Ljdk/internal/logger/LoggerFinderLoader$ErrorPolicy;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LoggerFinderLoader$ErrorPolicy, QUIET)},
	{"$VALUES", "[Ljdk/internal/logger/LoggerFinderLoader$ErrorPolicy;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LoggerFinderLoader$ErrorPolicy, $VALUES)},
	{}
};

$MethodInfo _LoggerFinderLoader$ErrorPolicy_MethodInfo_[] = {
	{"$values", "()[Ljdk/internal/logger/LoggerFinderLoader$ErrorPolicy;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$LoggerFinderLoader$ErrorPolicyArray*(*)()>(&LoggerFinderLoader$ErrorPolicy::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(LoggerFinderLoader$ErrorPolicy::*)($String*,int32_t)>(&LoggerFinderLoader$ErrorPolicy::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljdk/internal/logger/LoggerFinderLoader$ErrorPolicy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LoggerFinderLoader$ErrorPolicy*(*)($String*)>(&LoggerFinderLoader$ErrorPolicy::valueOf))},
	{"values", "()[Ljdk/internal/logger/LoggerFinderLoader$ErrorPolicy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LoggerFinderLoader$ErrorPolicyArray*(*)()>(&LoggerFinderLoader$ErrorPolicy::values))},
	{}
};

$InnerClassInfo _LoggerFinderLoader$ErrorPolicy_InnerClassesInfo_[] = {
	{"jdk.internal.logger.LoggerFinderLoader$ErrorPolicy", "jdk.internal.logger.LoggerFinderLoader", "ErrorPolicy", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LoggerFinderLoader$ErrorPolicy_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.logger.LoggerFinderLoader$ErrorPolicy",
	"java.lang.Enum",
	nullptr,
	_LoggerFinderLoader$ErrorPolicy_FieldInfo_,
	_LoggerFinderLoader$ErrorPolicy_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/internal/logger/LoggerFinderLoader$ErrorPolicy;>;",
	nullptr,
	_LoggerFinderLoader$ErrorPolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.logger.LoggerFinderLoader"
};

$Object* allocate$LoggerFinderLoader$ErrorPolicy($Class* clazz) {
	return $of($alloc(LoggerFinderLoader$ErrorPolicy));
}

LoggerFinderLoader$ErrorPolicy* LoggerFinderLoader$ErrorPolicy::ERROR = nullptr;
LoggerFinderLoader$ErrorPolicy* LoggerFinderLoader$ErrorPolicy::WARNING = nullptr;
LoggerFinderLoader$ErrorPolicy* LoggerFinderLoader$ErrorPolicy::DEBUG = nullptr;
LoggerFinderLoader$ErrorPolicy* LoggerFinderLoader$ErrorPolicy::QUIET = nullptr;
$LoggerFinderLoader$ErrorPolicyArray* LoggerFinderLoader$ErrorPolicy::$VALUES = nullptr;

$LoggerFinderLoader$ErrorPolicyArray* LoggerFinderLoader$ErrorPolicy::$values() {
	$init(LoggerFinderLoader$ErrorPolicy);
	return $new($LoggerFinderLoader$ErrorPolicyArray, {
		LoggerFinderLoader$ErrorPolicy::ERROR,
		LoggerFinderLoader$ErrorPolicy::WARNING,
		LoggerFinderLoader$ErrorPolicy::DEBUG,
		LoggerFinderLoader$ErrorPolicy::QUIET
	});
}

$LoggerFinderLoader$ErrorPolicyArray* LoggerFinderLoader$ErrorPolicy::values() {
	$init(LoggerFinderLoader$ErrorPolicy);
	return $cast($LoggerFinderLoader$ErrorPolicyArray, LoggerFinderLoader$ErrorPolicy::$VALUES->clone());
}

LoggerFinderLoader$ErrorPolicy* LoggerFinderLoader$ErrorPolicy::valueOf($String* name) {
	$init(LoggerFinderLoader$ErrorPolicy);
	return $cast(LoggerFinderLoader$ErrorPolicy, $Enum::valueOf(LoggerFinderLoader$ErrorPolicy::class$, name));
}

void LoggerFinderLoader$ErrorPolicy::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$LoggerFinderLoader$ErrorPolicy($Class* class$) {
	$assignStatic(LoggerFinderLoader$ErrorPolicy::ERROR, $new(LoggerFinderLoader$ErrorPolicy, "ERROR"_s, 0));
	$assignStatic(LoggerFinderLoader$ErrorPolicy::WARNING, $new(LoggerFinderLoader$ErrorPolicy, "WARNING"_s, 1));
	$assignStatic(LoggerFinderLoader$ErrorPolicy::DEBUG, $new(LoggerFinderLoader$ErrorPolicy, "DEBUG"_s, 2));
	$assignStatic(LoggerFinderLoader$ErrorPolicy::QUIET, $new(LoggerFinderLoader$ErrorPolicy, "QUIET"_s, 3));
	$assignStatic(LoggerFinderLoader$ErrorPolicy::$VALUES, LoggerFinderLoader$ErrorPolicy::$values());
}

LoggerFinderLoader$ErrorPolicy::LoggerFinderLoader$ErrorPolicy() {
}

$Class* LoggerFinderLoader$ErrorPolicy::load$($String* name, bool initialize) {
	$loadClass(LoggerFinderLoader$ErrorPolicy, name, initialize, &_LoggerFinderLoader$ErrorPolicy_ClassInfo_, clinit$LoggerFinderLoader$ErrorPolicy, allocate$LoggerFinderLoader$ErrorPolicy);
	return class$;
}

$Class* LoggerFinderLoader$ErrorPolicy::class$ = nullptr;

		} // logger
	} // internal
} // jdk