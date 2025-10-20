#include <java/net/DefaultDatagramSocketImplFactory.h>

#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/AbstractPlainDatagramSocketImpl.h>
#include <java/net/DatagramSocketImpl.h>
#include <java/net/PlainDatagramSocketImpl.h>
#include <java/net/SocketException.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractPlainDatagramSocketImpl = ::java::net::AbstractPlainDatagramSocketImpl;
using $DatagramSocketImpl = ::java::net::DatagramSocketImpl;
using $PlainDatagramSocketImpl = ::java::net::PlainDatagramSocketImpl;
using $SocketException = ::java::net::SocketException;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace java {
	namespace net {

$FieldInfo _DefaultDatagramSocketImplFactory_FieldInfo_[] = {
	{"prefixImplClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC, $staticField(DefaultDatagramSocketImplFactory, prefixImplClass)},
	{}
};

$MethodInfo _DefaultDatagramSocketImplFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultDatagramSocketImplFactory::*)()>(&DefaultDatagramSocketImplFactory::init$))},
	{"createDatagramSocketImpl", "(Z)Ljava/net/DatagramSocketImpl;", nullptr, $STATIC, $method(static_cast<$DatagramSocketImpl*(*)(bool)>(&DefaultDatagramSocketImplFactory::createDatagramSocketImpl)), "java.net.SocketException"},
	{}
};

$ClassInfo _DefaultDatagramSocketImplFactory_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.DefaultDatagramSocketImplFactory",
	"java.lang.Object",
	nullptr,
	_DefaultDatagramSocketImplFactory_FieldInfo_,
	_DefaultDatagramSocketImplFactory_MethodInfo_
};

$Object* allocate$DefaultDatagramSocketImplFactory($Class* clazz) {
	return $of($alloc(DefaultDatagramSocketImplFactory));
}

$Class* DefaultDatagramSocketImplFactory::prefixImplClass = nullptr;

void DefaultDatagramSocketImplFactory::init$() {
}

$DatagramSocketImpl* DefaultDatagramSocketImplFactory::createDatagramSocketImpl(bool isMulticast) {
	$init(DefaultDatagramSocketImplFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (DefaultDatagramSocketImplFactory::prefixImplClass != nullptr) {
		try {
			$var($DatagramSocketImpl, result, $cast($DatagramSocketImpl, $nc(DefaultDatagramSocketImplFactory::prefixImplClass)->newInstance()));
			return result;
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$throwNew($SocketException, "can\'t instantiate DatagramSocketImpl"_s);
		}
	} else {
		return $new($PlainDatagramSocketImpl, isMulticast);
	}
}

void clinit$DefaultDatagramSocketImplFactory($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$assignStatic(DefaultDatagramSocketImplFactory::prefixImplClass, nullptr);
	{
		$var($String, prefix, nullptr);
		try {
			$assign(prefix, $GetPropertyAction::privilegedGetProperty("impl.prefix"_s));
			if (prefix != nullptr) {
				$assignStatic(DefaultDatagramSocketImplFactory::prefixImplClass, $Class::forName($$str({"java.net."_s, prefix, "DatagramSocketImpl"_s})));
			}
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$init($System);
			$nc($System::err)->println($$str({"Can\'t find class: java.net."_s, prefix, "DatagramSocketImpl: check impl.prefix property"_s}));
		}
	}
}

DefaultDatagramSocketImplFactory::DefaultDatagramSocketImplFactory() {
}

$Class* DefaultDatagramSocketImplFactory::load$($String* name, bool initialize) {
	$loadClass(DefaultDatagramSocketImplFactory, name, initialize, &_DefaultDatagramSocketImplFactory_ClassInfo_, clinit$DefaultDatagramSocketImplFactory, allocate$DefaultDatagramSocketImplFactory);
	return class$;
}

$Class* DefaultDatagramSocketImplFactory::class$ = nullptr;

	} // net
} // java