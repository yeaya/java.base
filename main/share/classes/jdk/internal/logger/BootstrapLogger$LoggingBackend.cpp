#include <jdk/internal/logger/BootstrapLogger$LoggingBackend.h>

#include <java/lang/Enum.h>
#include <jdk/internal/logger/BootstrapLogger.h>
#include <jcpp.h>

#undef CUSTOM
#undef JUL_DEFAULT
#undef JUL_WITH_CONFIG
#undef NONE

using $BootstrapLogger$LoggingBackendArray = $Array<::jdk::internal::logger::BootstrapLogger$LoggingBackend>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BootstrapLogger = ::jdk::internal::logger::BootstrapLogger;

namespace jdk {
	namespace internal {
		namespace logger {

$FieldInfo _BootstrapLogger$LoggingBackend_FieldInfo_[] = {
	{"NONE", "Ljdk/internal/logger/BootstrapLogger$LoggingBackend;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BootstrapLogger$LoggingBackend, NONE)},
	{"JUL_DEFAULT", "Ljdk/internal/logger/BootstrapLogger$LoggingBackend;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BootstrapLogger$LoggingBackend, JUL_DEFAULT)},
	{"JUL_WITH_CONFIG", "Ljdk/internal/logger/BootstrapLogger$LoggingBackend;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BootstrapLogger$LoggingBackend, JUL_WITH_CONFIG)},
	{"CUSTOM", "Ljdk/internal/logger/BootstrapLogger$LoggingBackend;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(BootstrapLogger$LoggingBackend, CUSTOM)},
	{"$VALUES", "[Ljdk/internal/logger/BootstrapLogger$LoggingBackend;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(BootstrapLogger$LoggingBackend, $VALUES)},
	{"useLoggerFinder", "Z", nullptr, $FINAL, $field(BootstrapLogger$LoggingBackend, useLoggerFinder)},
	{}
};

$MethodInfo _BootstrapLogger$LoggingBackend_MethodInfo_[] = {
	{"$values", "()[Ljdk/internal/logger/BootstrapLogger$LoggingBackend;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$BootstrapLogger$LoggingBackendArray*(*)()>(&BootstrapLogger$LoggingBackend::$values))},
	{"<init>", "(Ljava/lang/String;IZ)V", "(Z)V", $PRIVATE, $method(static_cast<void(BootstrapLogger$LoggingBackend::*)($String*,int32_t,bool)>(&BootstrapLogger$LoggingBackend::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljdk/internal/logger/BootstrapLogger$LoggingBackend;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BootstrapLogger$LoggingBackend*(*)($String*)>(&BootstrapLogger$LoggingBackend::valueOf))},
	{"values", "()[Ljdk/internal/logger/BootstrapLogger$LoggingBackend;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BootstrapLogger$LoggingBackendArray*(*)()>(&BootstrapLogger$LoggingBackend::values))},
	{}
};

$InnerClassInfo _BootstrapLogger$LoggingBackend_InnerClassesInfo_[] = {
	{"jdk.internal.logger.BootstrapLogger$LoggingBackend", "jdk.internal.logger.BootstrapLogger", "LoggingBackend", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _BootstrapLogger$LoggingBackend_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.logger.BootstrapLogger$LoggingBackend",
	"java.lang.Enum",
	nullptr,
	_BootstrapLogger$LoggingBackend_FieldInfo_,
	_BootstrapLogger$LoggingBackend_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/internal/logger/BootstrapLogger$LoggingBackend;>;",
	nullptr,
	_BootstrapLogger$LoggingBackend_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.logger.BootstrapLogger"
};

$Object* allocate$BootstrapLogger$LoggingBackend($Class* clazz) {
	return $of($alloc(BootstrapLogger$LoggingBackend));
}

BootstrapLogger$LoggingBackend* BootstrapLogger$LoggingBackend::NONE = nullptr;
BootstrapLogger$LoggingBackend* BootstrapLogger$LoggingBackend::JUL_DEFAULT = nullptr;
BootstrapLogger$LoggingBackend* BootstrapLogger$LoggingBackend::JUL_WITH_CONFIG = nullptr;
BootstrapLogger$LoggingBackend* BootstrapLogger$LoggingBackend::CUSTOM = nullptr;
$BootstrapLogger$LoggingBackendArray* BootstrapLogger$LoggingBackend::$VALUES = nullptr;

$BootstrapLogger$LoggingBackendArray* BootstrapLogger$LoggingBackend::$values() {
	$init(BootstrapLogger$LoggingBackend);
	return $new($BootstrapLogger$LoggingBackendArray, {
		BootstrapLogger$LoggingBackend::NONE,
		BootstrapLogger$LoggingBackend::JUL_DEFAULT,
		BootstrapLogger$LoggingBackend::JUL_WITH_CONFIG,
		BootstrapLogger$LoggingBackend::CUSTOM
	});
}

$BootstrapLogger$LoggingBackendArray* BootstrapLogger$LoggingBackend::values() {
	$init(BootstrapLogger$LoggingBackend);
	return $cast($BootstrapLogger$LoggingBackendArray, BootstrapLogger$LoggingBackend::$VALUES->clone());
}

BootstrapLogger$LoggingBackend* BootstrapLogger$LoggingBackend::valueOf($String* name) {
	$init(BootstrapLogger$LoggingBackend);
	return $cast(BootstrapLogger$LoggingBackend, $Enum::valueOf(BootstrapLogger$LoggingBackend::class$, name));
}

void BootstrapLogger$LoggingBackend::init$($String* $enum$name, int32_t $enum$ordinal, bool useLoggerFinder) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->useLoggerFinder = useLoggerFinder;
}

void clinit$BootstrapLogger$LoggingBackend($Class* class$) {
	$assignStatic(BootstrapLogger$LoggingBackend::NONE, $new(BootstrapLogger$LoggingBackend, "NONE"_s, 0, true));
	$assignStatic(BootstrapLogger$LoggingBackend::JUL_DEFAULT, $new(BootstrapLogger$LoggingBackend, "JUL_DEFAULT"_s, 1, false));
	$assignStatic(BootstrapLogger$LoggingBackend::JUL_WITH_CONFIG, $new(BootstrapLogger$LoggingBackend, "JUL_WITH_CONFIG"_s, 2, true));
	$assignStatic(BootstrapLogger$LoggingBackend::CUSTOM, $new(BootstrapLogger$LoggingBackend, "CUSTOM"_s, 3, true));
	$assignStatic(BootstrapLogger$LoggingBackend::$VALUES, BootstrapLogger$LoggingBackend::$values());
}

BootstrapLogger$LoggingBackend::BootstrapLogger$LoggingBackend() {
}

$Class* BootstrapLogger$LoggingBackend::load$($String* name, bool initialize) {
	$loadClass(BootstrapLogger$LoggingBackend, name, initialize, &_BootstrapLogger$LoggingBackend_ClassInfo_, clinit$BootstrapLogger$LoggingBackend, allocate$BootstrapLogger$LoggingBackend);
	return class$;
}

$Class* BootstrapLogger$LoggingBackend::class$ = nullptr;

		} // logger
	} // internal
} // jdk