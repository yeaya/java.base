#include <sun/net/spi/DefaultProxySelector.h>

#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/Proxy.h>
#include <java/net/ProxySelector.h>
#include <java/net/SocketAddress.h>
#include <java/net/URI.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/StringJoiner.h>
#include <java/util/function/Function.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/loader/BootLoader.h>
#include <sun/net/spi/DefaultProxySelector$1.h>
#include <sun/net/spi/DefaultProxySelector$2.h>
#include <sun/net/spi/DefaultProxySelector$3.h>
#include <sun/net/spi/DefaultProxySelector$NonProxyInfo.h>
#include <jcpp.h>

#undef NO_PROXY
#undef NO_PROXY_LIST
#undef SOCKS_PROXY_VERSION

using $ProxyArray = $Array<::java::net::Proxy>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Proxy = ::java::net::Proxy;
using $ProxySelector = ::java::net::ProxySelector;
using $SocketAddress = ::java::net::SocketAddress;
using $URI = ::java::net::URI;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $StringJoiner = ::java::util::StringJoiner;
using $Function = ::java::util::function::Function;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $DefaultProxySelector$1 = ::sun::net::spi::DefaultProxySelector$1;
using $DefaultProxySelector$2 = ::sun::net::spi::DefaultProxySelector$2;
using $DefaultProxySelector$3 = ::sun::net::spi::DefaultProxySelector$3;
using $DefaultProxySelector$NonProxyInfo = ::sun::net::spi::DefaultProxySelector$NonProxyInfo;

namespace sun {
	namespace net {
		namespace spi {

class DefaultProxySelector$$Lambda$unmodifiableList : public $Function {
	$class(DefaultProxySelector$$Lambda$unmodifiableList, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* list) override {
		 return $of($Collections::unmodifiableList($cast($List, list)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultProxySelector$$Lambda$unmodifiableList>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DefaultProxySelector$$Lambda$unmodifiableList::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultProxySelector$$Lambda$unmodifiableList::*)()>(&DefaultProxySelector$$Lambda$unmodifiableList::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultProxySelector$$Lambda$unmodifiableList::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.net.spi.DefaultProxySelector$$Lambda$unmodifiableList",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* DefaultProxySelector$$Lambda$unmodifiableList::load$($String* name, bool initialize) {
	$loadClass(DefaultProxySelector$$Lambda$unmodifiableList, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultProxySelector$$Lambda$unmodifiableList::class$ = nullptr;

$FieldInfo _DefaultProxySelector_FieldInfo_[] = {
	{"props", "[[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DefaultProxySelector, props)},
	{"SOCKS_PROXY_VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultProxySelector, SOCKS_PROXY_VERSION)},
	{"hasSystemProxies", "Z", nullptr, $PRIVATE | $STATIC, $staticField(DefaultProxySelector, hasSystemProxies)},
	{"NO_PROXY_LIST", "Ljava/util/List;", "Ljava/util/List<Ljava/net/Proxy;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultProxySelector, NO_PROXY_LIST)},
	{}
};

$MethodInfo _DefaultProxySelector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultProxySelector::*)()>(&DefaultProxySelector::init$))},
	{"connectFailed", "(Ljava/net/URI;Ljava/net/SocketAddress;Ljava/io/IOException;)V", nullptr, $PUBLIC},
	{"defaultPort", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DefaultProxySelector::*)($String*)>(&DefaultProxySelector::defaultPort))},
	{"disjunctToRegex", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&DefaultProxySelector::disjunctToRegex))},
	{"getSystemProxies", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/net/Proxy;", nullptr, $PRIVATE | $SYNCHRONIZED | $NATIVE, $method(static_cast<$ProxyArray*(DefaultProxySelector::*)($String*,$String*)>(&DefaultProxySelector::getSystemProxies))},
	{"init", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&DefaultProxySelector::init))},
	{"select", "(Ljava/net/URI;)Ljava/util/List;", "(Ljava/net/URI;)Ljava/util/List<Ljava/net/Proxy;>;", $PUBLIC},
	{"shouldNotUseProxyFor", "(Ljava/util/regex/Pattern;Ljava/lang/String;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Pattern*,$String*)>(&DefaultProxySelector::shouldNotUseProxyFor))},
	{"socksProxyVersion", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&DefaultProxySelector::socksProxyVersion))},
	{"toPattern", "(Ljava/lang/String;)Ljava/util/regex/Pattern;", nullptr, $STATIC, $method(static_cast<$Pattern*(*)($String*)>(&DefaultProxySelector::toPattern))},
	{}
};

#define _METHOD_INDEX_getSystemProxies 4
#define _METHOD_INDEX_init 5

$InnerClassInfo _DefaultProxySelector_InnerClassesInfo_[] = {
	{"sun.net.spi.DefaultProxySelector$NonProxyInfo", "sun.net.spi.DefaultProxySelector", "NonProxyInfo", $STATIC},
	{"sun.net.spi.DefaultProxySelector$3", nullptr, nullptr, 0},
	{"sun.net.spi.DefaultProxySelector$2", nullptr, nullptr, 0},
	{"sun.net.spi.DefaultProxySelector$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultProxySelector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.spi.DefaultProxySelector",
	"java.net.ProxySelector",
	nullptr,
	_DefaultProxySelector_FieldInfo_,
	_DefaultProxySelector_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultProxySelector_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.spi.DefaultProxySelector$NonProxyInfo,sun.net.spi.DefaultProxySelector$3,sun.net.spi.DefaultProxySelector$2,sun.net.spi.DefaultProxySelector$1"
};

$Object* allocate$DefaultProxySelector($Class* clazz) {
	return $of($alloc(DefaultProxySelector));
}


$StringArray2* DefaultProxySelector::props = nullptr;
$String* DefaultProxySelector::SOCKS_PROXY_VERSION = nullptr;
bool DefaultProxySelector::hasSystemProxies = false;
$List* DefaultProxySelector::NO_PROXY_LIST = nullptr;

void DefaultProxySelector::init$() {
	$ProxySelector::init$();
}

int32_t DefaultProxySelector::socksProxyVersion() {
	$init(DefaultProxySelector);
	$beforeCallerSensitive();
	return $nc(($cast($Integer, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($DefaultProxySelector$2)))))))->intValue();
}

$List* DefaultProxySelector::select($URI* uri) {
	$beforeCallerSensitive();
	if (uri == nullptr) {
		$throwNew($IllegalArgumentException, "URI can\'t be null."_s);
	}
	$var($String, protocol, $nc(uri)->getScheme());
	$var($String, host, uri->getHost());
	if (host == nullptr) {
		$var($String, auth, uri->getAuthority());
		if (auth != nullptr) {
			int32_t i = 0;
			i = auth->indexOf((int32_t)u'@');
			if (i >= 0) {
				$assign(auth, auth->substring(i + 1));
			}
			i = auth->lastIndexOf((int32_t)u':');
			if (i >= 0) {
				$assign(auth, auth->substring(0, i));
			}
			$assign(host, auth);
		}
	}
	if (protocol == nullptr || host == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"protocol = "_s, protocol, " host = "_s, host}));
	}
	$var($DefaultProxySelector$NonProxyInfo, pinfo, nullptr);
	if ("http"_s->equalsIgnoreCase(protocol)) {
		$init($DefaultProxySelector$NonProxyInfo);
		$assign(pinfo, $DefaultProxySelector$NonProxyInfo::httpNonProxyInfo);
	} else if ("https"_s->equalsIgnoreCase(protocol)) {
		$init($DefaultProxySelector$NonProxyInfo);
		$assign(pinfo, $DefaultProxySelector$NonProxyInfo::httpNonProxyInfo);
	} else if ("ftp"_s->equalsIgnoreCase(protocol)) {
		$init($DefaultProxySelector$NonProxyInfo);
		$assign(pinfo, $DefaultProxySelector$NonProxyInfo::ftpNonProxyInfo);
	} else if ("socket"_s->equalsIgnoreCase(protocol)) {
		$init($DefaultProxySelector$NonProxyInfo);
		$assign(pinfo, $DefaultProxySelector$NonProxyInfo::socksNonProxyInfo);
	}
	$var($String, proto, protocol);
	$var($DefaultProxySelector$NonProxyInfo, nprop, pinfo);
	$var($String, urlhost, $nc(host)->toLowerCase());
	$var($ProxyArray, proxyArray, $cast($ProxyArray, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($DefaultProxySelector$3, this, proto, urlhost, nprop)))));
	if (proxyArray != nullptr) {
		$var($Collector, var$0, $Collectors::toList());
		return $cast($List, $nc($($nc($($Stream::of(proxyArray)))->distinct()))->collect($($Collectors::collectingAndThen(var$0, static_cast<$Function*>($$new(DefaultProxySelector$$Lambda$unmodifiableList))))));
	}
	return DefaultProxySelector::NO_PROXY_LIST;
}

void DefaultProxySelector::connectFailed($URI* uri, $SocketAddress* sa, $IOException* ioe) {
	if (uri == nullptr || sa == nullptr || ioe == nullptr) {
		$throwNew($IllegalArgumentException, "Arguments can\'t be null."_s);
	}
}

int32_t DefaultProxySelector::defaultPort($String* protocol) {
	if ("http"_s->equalsIgnoreCase(protocol)) {
		return 80;
	} else if ("https"_s->equalsIgnoreCase(protocol)) {
		return 443;
	} else if ("ftp"_s->equalsIgnoreCase(protocol)) {
		return 80;
	} else if ("socket"_s->equalsIgnoreCase(protocol)) {
		return 1080;
	} else {
		return -1;
	}
}

bool DefaultProxySelector::init() {
	$init(DefaultProxySelector);
	bool $ret = false;
	$prepareNativeStatic(DefaultProxySelector, init, bool);
	$ret = $invokeNativeStatic(DefaultProxySelector, init);
	$finishNativeStatic();
	return $ret;
}

$ProxyArray* DefaultProxySelector::getSystemProxies($String* protocol, $String* host) {
	$var($ProxyArray, $ret, nullptr);
	$prepareNative(DefaultProxySelector, getSystemProxies, $ProxyArray*, $String* protocol, $String* host);
	$assign($ret, $invokeNative(DefaultProxySelector, getSystemProxies, protocol, host));
	$finishNative();
	return $ret;
}

bool DefaultProxySelector::shouldNotUseProxyFor($Pattern* pattern, $String* urlhost) {
	$init(DefaultProxySelector);
	if (pattern == nullptr || $nc(urlhost)->isEmpty()) {
		return false;
	}
	bool matches = $nc($($nc(pattern)->matcher(urlhost)))->matches();
	return matches;
}

$Pattern* DefaultProxySelector::toPattern($String* mask) {
	$init(DefaultProxySelector);
	bool disjunctionEmpty = true;
	$var($StringJoiner, joiner, $new($StringJoiner, "|"_s));
	{
		$var($StringArray, arr$, $nc(mask)->split("\\|"_s));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, disjunct, arr$->get(i$));
			{
				if ($nc(disjunct)->isEmpty()) {
					continue;
				}
				disjunctionEmpty = false;
				$var($String, regex, disjunctToRegex($($nc(disjunct)->toLowerCase())));
				joiner->add(regex);
			}
		}
	}
	return disjunctionEmpty ? ($Pattern*)nullptr : $Pattern::compile($(joiner->toString()));
}

$String* DefaultProxySelector::disjunctToRegex($String* disjunct) {
	$init(DefaultProxySelector);
	$var($String, regex, nullptr);
	if ($nc(disjunct)->equals("*"_s)) {
		$assign(regex, ".*"_s);
	} else {
		bool var$1 = disjunct->startsWith("*"_s);
		if (var$1 && disjunct->endsWith("*"_s)) {
			$assign(regex, $str({".*"_s, $($Pattern::quote($(disjunct->substring(1, disjunct->length() - 1)))), ".*"_s}));
		} else if ($nc(disjunct)->startsWith("*"_s)) {
			$assign(regex, $str({".*"_s, $($Pattern::quote($(disjunct->substring(1))))}));
		} else if ($nc(disjunct)->endsWith("*"_s)) {
			$assign(regex, $str({$($Pattern::quote($(disjunct->substring(0, disjunct->length() - 1)))), ".*"_s}));
		} else {
			$assign(regex, $Pattern::quote(disjunct));
		}
	}
	return regex;
}

void clinit$DefaultProxySelector($Class* class$) {
	$assignStatic(DefaultProxySelector::SOCKS_PROXY_VERSION, "socksProxyVersion"_s);
	$beforeCallerSensitive();
	$assignStatic(DefaultProxySelector::props, $new($StringArray2, {
		$$new($StringArray, {
			"http"_s,
			"http.proxy"_s,
			"proxy"_s,
			"socksProxy"_s
		}),
		$$new($StringArray, {
			"https"_s,
			"https.proxy"_s,
			"proxy"_s,
			"socksProxy"_s
		}),
		$$new($StringArray, {
			"ftp"_s,
			"ftp.proxy"_s,
			"ftpProxy"_s,
			"proxy"_s,
			"socksProxy"_s
		}),
		$$new($StringArray, {
			"socket"_s,
			"socksProxy"_s
		})
	}));
	DefaultProxySelector::hasSystemProxies = false;
	$init($Proxy);
	$assignStatic(DefaultProxySelector::NO_PROXY_LIST, $List::of($of($Proxy::NO_PROXY)));
	{
		$var($String, key, "java.net.useSystemProxies"_s);
		$var($Boolean, b, $cast($Boolean, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($DefaultProxySelector$1)))));
		if (b != nullptr && b->booleanValue()) {
			$BootLoader::loadLibrary("net"_s);
			DefaultProxySelector::hasSystemProxies = DefaultProxySelector::init();
		}
	}
}

DefaultProxySelector::DefaultProxySelector() {
}

$Class* DefaultProxySelector::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DefaultProxySelector$$Lambda$unmodifiableList::classInfo$.name)) {
			return DefaultProxySelector$$Lambda$unmodifiableList::load$(name, initialize);
		}
	}
	$loadClass(DefaultProxySelector, name, initialize, &_DefaultProxySelector_ClassInfo_, clinit$DefaultProxySelector, allocate$DefaultProxySelector);
	return class$;
}

$Class* DefaultProxySelector::class$ = nullptr;

		} // spi
	} // net
} // sun