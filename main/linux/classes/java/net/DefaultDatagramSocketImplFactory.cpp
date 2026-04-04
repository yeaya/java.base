#include <java/net/DefaultDatagramSocketImplFactory.h>
#include <java/net/DatagramSocketImpl.h>
#include <java/net/PlainDatagramSocketImpl.h>
#include <java/net/SocketException.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramSocketImpl = ::java::net::DatagramSocketImpl;
using $PlainDatagramSocketImpl = ::java::net::PlainDatagramSocketImpl;
using $SocketException = ::java::net::SocketException;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace java {
	namespace net {

$Class* DefaultDatagramSocketImplFactory::prefixImplClass = nullptr;

void DefaultDatagramSocketImplFactory::init$() {
}

$DatagramSocketImpl* DefaultDatagramSocketImplFactory::createDatagramSocketImpl(bool isMulticast) {
	$init(DefaultDatagramSocketImplFactory);
	$beforeCallerSensitive();
	if (DefaultDatagramSocketImplFactory::prefixImplClass != nullptr) {
		try {
			$var($DatagramSocketImpl, result, $cast($DatagramSocketImpl, DefaultDatagramSocketImplFactory::prefixImplClass->newInstance()));
			return result;
		} catch ($Exception& e) {
			$throwNew($SocketException, "can\'t instantiate DatagramSocketImpl"_s);
		}
	} else {
		return $new($PlainDatagramSocketImpl, isMulticast);
	}
}

void DefaultDatagramSocketImplFactory::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$assignStatic(DefaultDatagramSocketImplFactory::prefixImplClass, nullptr);
	{
		$var($String, prefix, nullptr);
		try {
			$assign(prefix, $GetPropertyAction::privilegedGetProperty("impl.prefix"_s));
			if (prefix != nullptr) {
				$assignStatic(DefaultDatagramSocketImplFactory::prefixImplClass, $Class::forName($$str({"java.net."_s, prefix, "DatagramSocketImpl"_s})));
			}
		} catch ($Exception& e) {
			$nc($System::err)->println($$str({"Can\'t find class: java.net."_s, prefix, "DatagramSocketImpl: check impl.prefix property"_s}));
		}
	}
}

DefaultDatagramSocketImplFactory::DefaultDatagramSocketImplFactory() {
}

$Class* DefaultDatagramSocketImplFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"prefixImplClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC, $staticField(DefaultDatagramSocketImplFactory, prefixImplClass)},
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