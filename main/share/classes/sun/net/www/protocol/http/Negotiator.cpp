#include <sun/net/www/protocol/http/Negotiator.h>

#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <sun/net/www/protocol/http/HttpCallerInfo.h>
#include <sun/net/www/protocol/http/HttpURLConnection.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINEST

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Constructor = ::java::lang::reflect::Constructor;
using $HttpCallerInfo = ::sun::net::www::protocol::http::HttpCallerInfo;
using $HttpURLConnection = ::sun::net::www::protocol::http::HttpURLConnection;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

$MethodInfo _Negotiator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Negotiator, init$, void)},
	{"finest", "(Ljava/lang/Exception;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Negotiator, finest, void, $Exception*)},
	{"firstToken", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Negotiator, firstToken, $bytes*), "java.io.IOException"},
	{"getNegotiator", "(Lsun/net/www/protocol/http/HttpCallerInfo;)Lsun/net/www/protocol/http/Negotiator;", nullptr, $STATIC, $staticMethod(Negotiator, getNegotiator, Negotiator*, $HttpCallerInfo*)},
	{"nextToken", "([B)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Negotiator, nextToken, $bytes*, $bytes*), "java.io.IOException"},
	{}
};

$ClassInfo _Negotiator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.net.www.protocol.http.Negotiator",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Negotiator_MethodInfo_
};

$Object* allocate$Negotiator($Class* clazz) {
	return $of($alloc(Negotiator));
}

void Negotiator::init$() {
}

Negotiator* Negotiator::getNegotiator($HttpCallerInfo* hci) {
	$load(Negotiator);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* clazz = nullptr;
	$var($Constructor, c, nullptr);
	try {
		clazz = $Class::forName("sun.net.www.protocol.http.spnego.NegotiatorImpl"_s, true, $($ClassLoader::getPlatformClassLoader()));
		$load($HttpCallerInfo);
		$assign(c, $nc(clazz)->getConstructor($$new($ClassArray, {$HttpCallerInfo::class$})));
	} catch ($ClassNotFoundException& cnfe) {
		finest(cnfe);
		return nullptr;
	} catch ($ReflectiveOperationException& roe) {
		$throwNew($AssertionError, $of(roe));
	}
	try {
		return ($cast(Negotiator, $nc(c)->newInstance($$new($ObjectArray, {$of(hci)}))));
	} catch ($ReflectiveOperationException& roe) {
		finest(roe);
		$var($Throwable, t, roe->getCause());
		{
			$var($Exception, exception, nullptr);
			bool var$0 = $instanceOf($Exception, t);
			if (var$0) {
				$assign(exception, $cast($Exception, t));
				var$0 = true;
			}
			if (var$0) {
				finest(exception);
			}
		}
		return nullptr;
	}
	$shouldNotReachHere();
}

void Negotiator::finest($Exception* e) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformLogger, logger, $HttpURLConnection::getHttpLogger());
	$init($PlatformLogger$Level);
	if ($nc(logger)->isLoggable($PlatformLogger$Level::FINEST)) {
		logger->finest($$str({"NegotiateAuthentication: "_s, e}));
	}
}

Negotiator::Negotiator() {
}

$Class* Negotiator::load$($String* name, bool initialize) {
	$loadClass(Negotiator, name, initialize, &_Negotiator_ClassInfo_, allocate$Negotiator);
	return class$;
}

$Class* Negotiator::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun