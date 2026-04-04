#include <java/net/DefaultDatagramSocketImplFactory.h>
#include <java/net/DatagramSocketImpl.h>
#include <java/net/SocketException.h>
#include <java/net/TwoStacksPlainDatagramSocketImpl.h>
#include <java/util/Properties.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramSocketImpl = ::java::net::DatagramSocketImpl;
using $SocketException = ::java::net::SocketException;
using $TwoStacksPlainDatagramSocketImpl = ::java::net::TwoStacksPlainDatagramSocketImpl;
using $Properties = ::java::util::Properties;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace java {
	namespace net {

$Class* DefaultDatagramSocketImplFactory::prefixImplClass = nullptr;
bool DefaultDatagramSocketImplFactory::preferIPv4Stack = false;
bool DefaultDatagramSocketImplFactory::exclusiveBind = false;

void DefaultDatagramSocketImplFactory::init$() {
}

$DatagramSocketImpl* DefaultDatagramSocketImplFactory::createDatagramSocketImpl(bool isMulticast) {
	$init(DefaultDatagramSocketImplFactory);
	$beforeCallerSensitive();
	if (DefaultDatagramSocketImplFactory::prefixImplClass != nullptr) {
		try {
			$var($Object, result, DefaultDatagramSocketImplFactory::prefixImplClass->newInstance());
			return $cast($DatagramSocketImpl, result);
		} catch ($Exception& e) {
			$throwNew($SocketException, "can\'t instantiate DatagramSocketImpl"_s);
		}
	} else {
		return $new($TwoStacksPlainDatagramSocketImpl, DefaultDatagramSocketImplFactory::exclusiveBind && !isMulticast, isMulticast);
	}
}

void DefaultDatagramSocketImplFactory::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		$Class* prefixImplClassLocal = nullptr;
		$var($Properties, props, $GetPropertyAction::privilegedGetProperties());
		DefaultDatagramSocketImplFactory::preferIPv4Stack = $Boolean::parseBoolean($($nc(props)->getProperty("java.net.preferIPv4Stack"_s)));
		$var($String, exclBindProp, props->getProperty("sun.net.useExclusiveBind"_s, ""_s));
		DefaultDatagramSocketImplFactory::exclusiveBind = ($nc(exclBindProp)->isEmpty()) ? true : $Boolean::parseBoolean(exclBindProp);
		$var($String, prefix, nullptr);
		try {
			$assign(prefix, props->getProperty("impl.prefix"_s));
			if (prefix != nullptr) {
				prefixImplClassLocal = $Class::forName($$str({"java.net."_s, prefix, "DatagramSocketImpl"_s}));
			}
		} catch ($Exception& e) {
			$nc($System::err)->println($$str({"Can\'t find class: java.net."_s, prefix, "DatagramSocketImpl: check impl.prefix property"_s}));
		}
		$assignStatic(DefaultDatagramSocketImplFactory::prefixImplClass, prefixImplClassLocal);
	}
}

DefaultDatagramSocketImplFactory::DefaultDatagramSocketImplFactory() {
}

$Class* DefaultDatagramSocketImplFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"prefixImplClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(DefaultDatagramSocketImplFactory, prefixImplClass)},
		{"preferIPv4Stack", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultDatagramSocketImplFactory, preferIPv4Stack)},
		{"exclusiveBind", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultDatagramSocketImplFactory, exclusiveBind)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultDatagramSocketImplFactory, init$, void)},
		{"createDatagramSocketImpl", "(Z)Ljava/net/DatagramSocketImpl;", nullptr, $STATIC, $staticMethod(DefaultDatagramSocketImplFactory, createDatagramSocketImpl, $DatagramSocketImpl*, bool), "java.net.SocketException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.DefaultDatagramSocketImplFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultDatagramSocketImplFactory, name, initialize, &classInfo$$, DefaultDatagramSocketImplFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultDatagramSocketImplFactory);
	});
	return class$;
}

$Class* DefaultDatagramSocketImplFactory::class$ = nullptr;

	} // net
} // java