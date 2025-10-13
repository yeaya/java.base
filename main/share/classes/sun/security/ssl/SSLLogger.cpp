#include <sun/security/ssl/SSLLogger.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/security/ssl/SSLLogger$SSLConsoleLogger.h>
#include <sun/security/ssl/SSLLogger$SSLSimpleFormatter.h>
#include <jcpp.h>

#undef ALL
#undef DEBUG
#undef ENGLISH
#undef ERROR
#undef INFO
#undef TRACE
#undef WARNING

using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Locale = ::java::util::Locale;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $SSLLogger$SSLConsoleLogger = ::sun::security::ssl::SSLLogger$SSLConsoleLogger;
using $SSLLogger$SSLSimpleFormatter = ::sun::security::ssl::SSLLogger$SSLSimpleFormatter;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLLogger_FieldInfo_[] = {
	{"logger", "Ljava/lang/System$Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLLogger, logger)},
	{"property", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SSLLogger, property)},
	{"isOn", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SSLLogger, isOn$)},
	{}
};

$MethodInfo _SSLLogger_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SSLLogger::*)()>(&SSLLogger::init$))},
	{"fine", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($String*,$ObjectArray*)>(&SSLLogger::fine))},
	{"finer", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($String*,$ObjectArray*)>(&SSLLogger::finer))},
	{"finest", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($String*,$ObjectArray*)>(&SSLLogger::finest))},
	{"hasOption", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&SSLLogger::hasOption))},
	{"help", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SSLLogger::help))},
	{"info", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($String*,$ObjectArray*)>(&SSLLogger::info))},
	{"isOn", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&SSLLogger::isOn))},
	{"log", "(Ljava/lang/System$Logger$Level;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($System$Logger$Level*,$String*,$ObjectArray*)>(&SSLLogger::log))},
	{"severe", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($String*,$ObjectArray*)>(&SSLLogger::severe))},
	{"toString", "([Ljava/lang/Object;)Ljava/lang/String;", nullptr, $STATIC | $TRANSIENT, $method(static_cast<$String*(*)($ObjectArray*)>(&SSLLogger::toString))},
	{"warning", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($String*,$ObjectArray*)>(&SSLLogger::warning))},
	{}
};

$InnerClassInfo _SSLLogger_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLLogger$SSLSimpleFormatter", "sun.security.ssl.SSLLogger", "SSLSimpleFormatter", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLLogger$SSLConsoleLogger", "sun.security.ssl.SSLLogger", "SSLConsoleLogger", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLLogger_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.ssl.SSLLogger",
	"java.lang.Object",
	nullptr,
	_SSLLogger_FieldInfo_,
	_SSLLogger_MethodInfo_,
	nullptr,
	nullptr,
	_SSLLogger_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLLogger$SSLSimpleFormatter,sun.security.ssl.SSLLogger$SSLConsoleLogger"
};

$Object* allocate$SSLLogger($Class* clazz) {
	return $of($alloc(SSLLogger));
}

$System$Logger* SSLLogger::logger = nullptr;
$String* SSLLogger::property = nullptr;
bool SSLLogger::isOn$ = false;

void SSLLogger::init$() {
}

void SSLLogger::help() {
	$init(SSLLogger);
	$init($System);
	$nc($System::err)->println();
	$nc($System::err)->println("help           print the help messages"_s);
	$nc($System::err)->println("expand         expand debugging information"_s);
	$nc($System::err)->println();
	$nc($System::err)->println("all            turn on all debugging"_s);
	$nc($System::err)->println("ssl            turn on ssl debugging"_s);
	$nc($System::err)->println();
	$nc($System::err)->println("The following can be used with ssl:"_s);
	$nc($System::err)->println("\trecord       enable per-record tracing"_s);
	$nc($System::err)->println("\thandshake    print each handshake message"_s);
	$nc($System::err)->println("\tkeygen       print key generation data"_s);
	$nc($System::err)->println("\tsession      print session activity"_s);
	$nc($System::err)->println("\tdefaultctx   print default SSL initialization"_s);
	$nc($System::err)->println("\tsslctx       print SSLContext tracing"_s);
	$nc($System::err)->println("\tsessioncache print session cache tracing"_s);
	$nc($System::err)->println("\tkeymanager   print key manager tracing"_s);
	$nc($System::err)->println("\ttrustmanager print trust manager tracing"_s);
	$nc($System::err)->println("\tpluggability print pluggability tracing"_s);
	$nc($System::err)->println();
	$nc($System::err)->println("\thandshake debugging can be widened with:"_s);
	$nc($System::err)->println("\tdata         hex dump of each handshake message"_s);
	$nc($System::err)->println("\tverbose      verbose handshake message printing"_s);
	$nc($System::err)->println();
	$nc($System::err)->println("\trecord debugging can be widened with:"_s);
	$nc($System::err)->println("\tplaintext    hex dump of record plaintext"_s);
	$nc($System::err)->println("\tpacket       print raw SSL/TLS packets"_s);
	$nc($System::err)->println();
	$System::exit(0);
}

bool SSLLogger::isOn($String* checkPoints) {
	$init(SSLLogger);
	if (SSLLogger::property == nullptr) {
		return false;
	} else {
		if ($nc(SSLLogger::property)->isEmpty()) {
			return true;
		}
	}
	$var($StringArray, options, $nc(checkPoints)->split(","_s));
	{
		$var($StringArray, arr$, options);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, option, arr$->get(i$));
			{
				$assign(option, $nc(option)->trim());
				if (!SSLLogger::hasOption(option)) {
					return false;
				}
			}
		}
	}
	return true;
}

bool SSLLogger::hasOption($String* option$renamed) {
	$init(SSLLogger);
	$var($String, option, option$renamed);
	$init($Locale);
	$assign(option, $nc(option)->toLowerCase($Locale::ENGLISH));
	if ($nc(SSLLogger::property)->contains("all"_s)) {
		return true;
	} else {
		int32_t offset = $nc(SSLLogger::property)->indexOf("ssl"_s);
		if (offset != -1 && $nc(SSLLogger::property)->indexOf("sslctx"_s, offset) != -1) {
			bool var$1 = option->equals("data"_s);
			bool var$0 = var$1 || option->equals("packet"_s);
			if (!(var$0 || option->equals("plaintext"_s))) {
				return true;
			}
		}
	}
	return $nc(SSLLogger::property)->contains(option);
}

void SSLLogger::severe($String* msg, $ObjectArray* params) {
	$init(SSLLogger);
	$init($System$Logger$Level);
	SSLLogger::log($System$Logger$Level::ERROR, msg, params);
}

void SSLLogger::warning($String* msg, $ObjectArray* params) {
	$init(SSLLogger);
	$init($System$Logger$Level);
	SSLLogger::log($System$Logger$Level::WARNING, msg, params);
}

void SSLLogger::info($String* msg, $ObjectArray* params) {
	$init(SSLLogger);
	$init($System$Logger$Level);
	SSLLogger::log($System$Logger$Level::INFO, msg, params);
}

void SSLLogger::fine($String* msg, $ObjectArray* params) {
	$init(SSLLogger);
	$init($System$Logger$Level);
	SSLLogger::log($System$Logger$Level::DEBUG, msg, params);
}

void SSLLogger::finer($String* msg, $ObjectArray* params) {
	$init(SSLLogger);
	$init($System$Logger$Level);
	SSLLogger::log($System$Logger$Level::TRACE, msg, params);
}

void SSLLogger::finest($String* msg, $ObjectArray* params) {
	$init(SSLLogger);
	$init($System$Logger$Level);
	SSLLogger::log($System$Logger$Level::ALL, msg, params);
}

void SSLLogger::log($System$Logger$Level* level, $String* msg, $ObjectArray* params) {
	$init(SSLLogger);
	if ($nc(SSLLogger::logger)->isLoggable(level)) {
		if (params == nullptr || $nc(params)->length == 0) {
			$nc(SSLLogger::logger)->log(level, msg);
		} else {
			try {
				$var($String, formatted, $SSLLogger$SSLSimpleFormatter::formatParameters(params));
				$nc(SSLLogger::logger)->log(level, msg, $$new($ObjectArray, {$of(formatted)}));
			} catch ($Exception&) {
				$catch();
			}
		}
	}
}

$String* SSLLogger::toString($ObjectArray* params) {
	$init(SSLLogger);
	try {
		return $SSLLogger$SSLSimpleFormatter::formatParameters(params);
	} catch ($Exception&) {
		$var($Exception, exp, $catch());
		return $str({"unexpected exception thrown: "_s, $(exp->getMessage())});
	}
	$shouldNotReachHere();
}

void clinit$SSLLogger($Class* class$) {
	$beforeCallerSensitive();
	{
		$var($String, p, $GetPropertyAction::privilegedGetProperty("javax.net.debug"_s));
		if (p != nullptr) {
			if (p->isEmpty()) {
				$assignStatic(SSLLogger::property, ""_s);
				$assignStatic(SSLLogger::logger, $System::getLogger("javax.net.ssl"_s));
			} else {
				$init($Locale);
				$assignStatic(SSLLogger::property, p->toLowerCase($Locale::ENGLISH));
				if ($nc(SSLLogger::property)->equals("help"_s)) {
					SSLLogger::help();
				}
				$assignStatic(SSLLogger::logger, $new($SSLLogger$SSLConsoleLogger, "javax.net.ssl"_s, p));
			}
			SSLLogger::isOn$ = true;
		} else {
			$assignStatic(SSLLogger::property, nullptr);
			$assignStatic(SSLLogger::logger, nullptr);
			SSLLogger::isOn$ = false;
		}
	}
}

SSLLogger::SSLLogger() {
}

$Class* SSLLogger::load$($String* name, bool initialize) {
	$loadClass(SSLLogger, name, initialize, &_SSLLogger_ClassInfo_, clinit$SSLLogger, allocate$SSLLogger);
	return class$;
}

$Class* SSLLogger::class$ = nullptr;

		} // ssl
	} // security
} // sun