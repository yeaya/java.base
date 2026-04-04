#include <jdk/internal/logger/SimpleConsoleLogger$Formatting.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/System$Logger.h>
#include <java/text/MessageFormat.h>
#include <java/time/ZonedDateTime.h>
#include <java/util/function/Function.h>
#include <jdk/internal/logger/SimpleConsoleLogger.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef DEFAULT_FORMAT
#undef DEFAULT_FORMAT_PROP_KEY
#undef JUL_FORMAT_PROP_KEY
#undef SIMPLE_CONSOLE_LOGGER_FORMAT

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $System$Logger = ::java::lang::System$Logger;
using $MessageFormat = ::java::text::MessageFormat;
using $ZonedDateTime = ::java::time::ZonedDateTime;
using $Function = ::java::util::function::Function;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace jdk {
	namespace internal {
		namespace logger {

$String* SimpleConsoleLogger$Formatting::DEFAULT_FORMAT = nullptr;
$String* SimpleConsoleLogger$Formatting::DEFAULT_FORMAT_PROP_KEY = nullptr;
$String* SimpleConsoleLogger$Formatting::JUL_FORMAT_PROP_KEY = nullptr;
$String* SimpleConsoleLogger$Formatting::SIMPLE_CONSOLE_LOGGER_FORMAT = nullptr;
$StringArray* SimpleConsoleLogger$Formatting::skips = nullptr;

void SimpleConsoleLogger$Formatting::init$() {
}

bool SimpleConsoleLogger$Formatting::isFilteredFrame($StackWalker$StackFrame* st) {
	$init(SimpleConsoleLogger$Formatting);
	$load($System$Logger);
	if ($System$Logger::class$->isAssignableFrom($nc(st)->getDeclaringClass())) {
		return true;
	}
	$var($String, cname, st->getClassName());
	char16_t c = $nc(cname)->length() < 12 ? 0 : cname->charAt(0);
	if (c == u's') {
		if (cname->startsWith("sun.util.logging."_s)) {
			return true;
		}
		if (cname->startsWith("sun.rmi.runtime.Log"_s)) {
			return true;
		}
	} else if (c == u'j') {
		if (cname->startsWith("jdk.internal.logger.BootstrapLogger$LogEvent"_s)) {
			return false;
		}
		if (cname->startsWith("jdk.internal.logger."_s)) {
			return true;
		}
		if (cname->startsWith("java.util.logging."_s)) {
			return true;
		}
		if (cname->startsWith("java.lang.invoke.MethodHandle"_s)) {
			return true;
		}
		if (cname->startsWith("java.security.AccessController"_s)) {
			return true;
		}
	}
	if ($nc(SimpleConsoleLogger$Formatting::skips)->length > 0) {
		for (int32_t i = 0; i < SimpleConsoleLogger$Formatting::skips->length; ++i) {
			bool var$0 = !$nc(SimpleConsoleLogger$Formatting::skips->get(i))->isEmpty();
			if (var$0 && cname->startsWith(SimpleConsoleLogger$Formatting::skips->get(i))) {
				return true;
			}
		}
	}
	return false;
}

$String* SimpleConsoleLogger$Formatting::getSimpleFormat($String* key, $Function* defaultPropertyGetter) {
	$init(SimpleConsoleLogger$Formatting);
	$useLocalObjectStack();
	bool var$0 = !SimpleConsoleLogger$Formatting::DEFAULT_FORMAT_PROP_KEY->equals(key);
	if (var$0 && !SimpleConsoleLogger$Formatting::JUL_FORMAT_PROP_KEY->equals(key)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid property name: "_s, key}));
	}
	$var($String, format, $GetPropertyAction::privilegedGetProperty(key));
	if (format == nullptr && defaultPropertyGetter != nullptr) {
		$assign(format, $cast($String, defaultPropertyGetter->apply(key)));
	}
	if (format != nullptr) {
		try {
			$String::format(format, $$new($ObjectArray, {
				$($ZonedDateTime::now()),
				""_s,
				""_s,
				""_s,
				""_s,
				""_s
			}));
		} catch ($IllegalArgumentException& e) {
			$assign(format, SimpleConsoleLogger$Formatting::DEFAULT_FORMAT);
		}
	} else {
		$assign(format, SimpleConsoleLogger$Formatting::DEFAULT_FORMAT);
	}
	return format;
}

$String* SimpleConsoleLogger$Formatting::formatMessage($String* format, $ObjectArray* parameters) {
	$init(SimpleConsoleLogger$Formatting);
	try {
		if (parameters == nullptr || parameters->length == 0) {
			return format;
		}
		bool isJavaTestFormat = false;
		int32_t len = $nc(format)->length();
		for (int32_t i = 0; i < len - 2; ++i) {
			char16_t c = format->charAt(i);
			if (c == u'{') {
				int32_t d = format->charAt(i + 1);
				if (d >= u'0' && d <= u'9') {
					isJavaTestFormat = true;
					break;
				}
			}
		}
		if (isJavaTestFormat) {
			return $MessageFormat::format(format, parameters);
		}
		return format;
	} catch ($Exception& ex) {
		return format;
	}
	$shouldNotReachHere();
}

void SimpleConsoleLogger$Formatting::clinit$($Class* clazz) {
	$assignStatic(SimpleConsoleLogger$Formatting::DEFAULT_FORMAT, "%1$tb %1$td, %1$tY %1$tl:%1$tM:%1$tS %1$Tp %2$s%n%4$s: %5$s%6$s%n"_s);
	$assignStatic(SimpleConsoleLogger$Formatting::DEFAULT_FORMAT_PROP_KEY, "jdk.system.logger.format"_s);
	$assignStatic(SimpleConsoleLogger$Formatting::JUL_FORMAT_PROP_KEY, "java.util.logging.SimpleFormatter.format"_s);
	$assignStatic(SimpleConsoleLogger$Formatting::SIMPLE_CONSOLE_LOGGER_FORMAT, SimpleConsoleLogger$Formatting::getSimpleFormat(SimpleConsoleLogger$Formatting::DEFAULT_FORMAT_PROP_KEY, nullptr));
	{
		$var($String, additionalPkgs, $GetPropertyAction::privilegedGetProperty("jdk.logger.packages"_s));
		$assignStatic(SimpleConsoleLogger$Formatting::skips, additionalPkgs == nullptr ? $new($StringArray, 0) : additionalPkgs->split(","_s));
	}
}

SimpleConsoleLogger$Formatting::SimpleConsoleLogger$Formatting() {
}

$Class* SimpleConsoleLogger$Formatting::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_FORMAT", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(SimpleConsoleLogger$Formatting, DEFAULT_FORMAT)},
		{"DEFAULT_FORMAT_PROP_KEY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(SimpleConsoleLogger$Formatting, DEFAULT_FORMAT_PROP_KEY)},
		{"JUL_FORMAT_PROP_KEY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(SimpleConsoleLogger$Formatting, JUL_FORMAT_PROP_KEY)},
		{"SIMPLE_CONSOLE_LOGGER_FORMAT", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(SimpleConsoleLogger$Formatting, SIMPLE_CONSOLE_LOGGER_FORMAT)},
		{"skips", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SimpleConsoleLogger$Formatting, skips)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SimpleConsoleLogger$Formatting, init$, void)},
		{"formatMessage", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $STATIC | $TRANSIENT, $staticMethod(SimpleConsoleLogger$Formatting, formatMessage, $String*, $String*, $ObjectArray*)},
		{"getSimpleFormat", "(Ljava/lang/String;Ljava/util/function/Function;)Ljava/lang/String;", "(Ljava/lang/String;Ljava/util/function/Function<Ljava/lang/String;Ljava/lang/String;>;)Ljava/lang/String;", $STATIC, $staticMethod(SimpleConsoleLogger$Formatting, getSimpleFormat, $String*, $String*, $Function*)},
		{"isFilteredFrame", "(Ljava/lang/StackWalker$StackFrame;)Z", nullptr, $STATIC, $staticMethod(SimpleConsoleLogger$Formatting, isFilteredFrame, bool, $StackWalker$StackFrame*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.logger.SimpleConsoleLogger$Formatting", "jdk.internal.logger.SimpleConsoleLogger", "Formatting", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.logger.SimpleConsoleLogger$Formatting",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.logger.SimpleConsoleLogger"
	};
	$loadClass(SimpleConsoleLogger$Formatting, name, initialize, &classInfo$$, SimpleConsoleLogger$Formatting::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleConsoleLogger$Formatting);
	});
	return class$;
}

$Class* SimpleConsoleLogger$Formatting::class$ = nullptr;

		} // logger
	} // internal
} // jdk