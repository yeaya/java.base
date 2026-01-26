#include <sun/security/ssl/SSLLogger$SSLConsoleLogger.h>

#include <java/lang/CharSequence.h>
#include <java/lang/System$Logger$Level.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <sun/security/ssl/SSLLogger$SSLSimpleFormatter.h>
#include <sun/security/ssl/SSLLogger.h>
#include <jcpp.h>

#undef ENGLISH
#undef OFF
#undef UTF_8

using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $SSLLogger$SSLSimpleFormatter = ::sun::security::ssl::SSLLogger$SSLSimpleFormatter;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLLogger$SSLConsoleLogger_FieldInfo_[] = {
	{"loggerName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SSLLogger$SSLConsoleLogger, loggerName)},
	{"useCompactFormat", "Z", nullptr, $PRIVATE | $FINAL, $field(SSLLogger$SSLConsoleLogger, useCompactFormat)},
	{}
};

$MethodInfo _SSLLogger$SSLConsoleLogger_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(SSLLogger$SSLConsoleLogger, init$, void, $String*, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SSLLogger$SSLConsoleLogger, getName, $String*)},
	{"isLoggable", "(Ljava/lang/System$Logger$Level;)Z", nullptr, $PUBLIC, $virtualMethod(SSLLogger$SSLConsoleLogger, isLoggable, bool, $System$Logger$Level*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(SSLLogger$SSLConsoleLogger, log, void, $System$Logger$Level*, $ResourceBundle*, $String*, $Throwable*)},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(SSLLogger$SSLConsoleLogger, log, void, $System$Logger$Level*, $ResourceBundle*, $String*, $ObjectArray*)},
	{}
};

$InnerClassInfo _SSLLogger$SSLConsoleLogger_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLLogger$SSLConsoleLogger", "sun.security.ssl.SSLLogger", "SSLConsoleLogger", $PRIVATE | $STATIC},
	{"java.lang.System$Logger", "java.lang.System", "Logger", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SSLLogger$SSLConsoleLogger_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLLogger$SSLConsoleLogger",
	"java.lang.Object",
	"java.lang.System$Logger",
	_SSLLogger$SSLConsoleLogger_FieldInfo_,
	_SSLLogger$SSLConsoleLogger_MethodInfo_,
	nullptr,
	nullptr,
	_SSLLogger$SSLConsoleLogger_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLLogger"
};

$Object* allocate$SSLLogger$SSLConsoleLogger($Class* clazz) {
	return $of($alloc(SSLLogger$SSLConsoleLogger));
}

void SSLLogger$SSLConsoleLogger::init$($String* loggerName, $String* options$renamed) {
	$var($String, options, options$renamed);
	$set(this, loggerName, loggerName);
	$init($Locale);
	$assign(options, $nc(options)->toLowerCase($Locale::ENGLISH));
	this->useCompactFormat = !options->contains("expand"_s);
}

$String* SSLLogger$SSLConsoleLogger::getName() {
	return this->loggerName;
}

bool SSLLogger$SSLConsoleLogger::isLoggable($System$Logger$Level* level) {
	$init($System$Logger$Level);
	return (level != $System$Logger$Level::OFF);
}

void SSLLogger$SSLConsoleLogger::log($System$Logger$Level* level, $ResourceBundle* rb, $String* message, $Throwable* thrwbl) {
	$useLocalCurrentObjectStackCache();
	if (isLoggable(level)) {
		try {
			$var($String, formatted, $SSLLogger$SSLSimpleFormatter::format(this, level, message, $$new($ObjectArray, {$of(thrwbl)})));
			$init($StandardCharsets);
			$nc($System::err)->write($($nc(formatted)->getBytes($StandardCharsets::UTF_8)));
		} catch ($Exception& exp) {
		}
	}
}

void SSLLogger$SSLConsoleLogger::log($System$Logger$Level* level, $ResourceBundle* rb, $String* message, $ObjectArray* params) {
	$useLocalCurrentObjectStackCache();
	if (isLoggable(level)) {
		try {
			$var($String, formatted, $SSLLogger$SSLSimpleFormatter::format(this, level, message, params));
			$init($StandardCharsets);
			$nc($System::err)->write($($nc(formatted)->getBytes($StandardCharsets::UTF_8)));
		} catch ($Exception& exp) {
		}
	}
}

SSLLogger$SSLConsoleLogger::SSLLogger$SSLConsoleLogger() {
}

$Class* SSLLogger$SSLConsoleLogger::load$($String* name, bool initialize) {
	$loadClass(SSLLogger$SSLConsoleLogger, name, initialize, &_SSLLogger$SSLConsoleLogger_ClassInfo_, allocate$SSLLogger$SSLConsoleLogger);
	return class$;
}

$Class* SSLLogger$SSLConsoleLogger::class$ = nullptr;

		} // ssl
	} // security
} // sun