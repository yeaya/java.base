#include <sun/security/ssl/ChangeCipherSpec.h>

#include <sun/security/ssl/ChangeCipherSpec$T10ChangeCipherSpecConsumer.h>
#include <sun/security/ssl/ChangeCipherSpec$T10ChangeCipherSpecProducer.h>
#include <sun/security/ssl/ChangeCipherSpec$T13ChangeCipherSpecConsumer.h>
#include <sun/security/ssl/HandshakeProducer.h>
#include <sun/security/ssl/SSLConsumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeCipherSpec$T10ChangeCipherSpecConsumer = ::sun::security::ssl::ChangeCipherSpec$T10ChangeCipherSpecConsumer;
using $ChangeCipherSpec$T10ChangeCipherSpecProducer = ::sun::security::ssl::ChangeCipherSpec$T10ChangeCipherSpecProducer;
using $ChangeCipherSpec$T13ChangeCipherSpecConsumer = ::sun::security::ssl::ChangeCipherSpec$T13ChangeCipherSpecConsumer;
using $HandshakeProducer = ::sun::security::ssl::HandshakeProducer;
using $SSLConsumer = ::sun::security::ssl::SSLConsumer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ChangeCipherSpec_FieldInfo_[] = {
	{"t10Consumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(ChangeCipherSpec, t10Consumer)},
	{"t10Producer", "Lsun/security/ssl/HandshakeProducer;", nullptr, $STATIC | $FINAL, $staticField(ChangeCipherSpec, t10Producer)},
	{"t13Consumer", "Lsun/security/ssl/SSLConsumer;", nullptr, $STATIC | $FINAL, $staticField(ChangeCipherSpec, t13Consumer)},
	{}
};

$MethodInfo _ChangeCipherSpec_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ChangeCipherSpec::*)()>(&ChangeCipherSpec::init$))},
	{}
};

$InnerClassInfo _ChangeCipherSpec_InnerClassesInfo_[] = {
	{"sun.security.ssl.ChangeCipherSpec$T13ChangeCipherSpecConsumer", "sun.security.ssl.ChangeCipherSpec", "T13ChangeCipherSpecConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ChangeCipherSpec$T10ChangeCipherSpecConsumer", "sun.security.ssl.ChangeCipherSpec", "T10ChangeCipherSpecConsumer", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.ChangeCipherSpec$T10ChangeCipherSpecProducer", "sun.security.ssl.ChangeCipherSpec", "T10ChangeCipherSpecProducer", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ChangeCipherSpec_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ChangeCipherSpec",
	"java.lang.Object",
	nullptr,
	_ChangeCipherSpec_FieldInfo_,
	_ChangeCipherSpec_MethodInfo_,
	nullptr,
	nullptr,
	_ChangeCipherSpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.ssl.ChangeCipherSpec$T13ChangeCipherSpecConsumer,sun.security.ssl.ChangeCipherSpec$T10ChangeCipherSpecConsumer,sun.security.ssl.ChangeCipherSpec$T10ChangeCipherSpecProducer"
};

$Object* allocate$ChangeCipherSpec($Class* clazz) {
	return $of($alloc(ChangeCipherSpec));
}

$SSLConsumer* ChangeCipherSpec::t10Consumer = nullptr;
$HandshakeProducer* ChangeCipherSpec::t10Producer = nullptr;
$SSLConsumer* ChangeCipherSpec::t13Consumer = nullptr;

void ChangeCipherSpec::init$() {
}

void clinit$ChangeCipherSpec($Class* class$) {
	$assignStatic(ChangeCipherSpec::t10Consumer, $new($ChangeCipherSpec$T10ChangeCipherSpecConsumer));
	$assignStatic(ChangeCipherSpec::t10Producer, $new($ChangeCipherSpec$T10ChangeCipherSpecProducer));
	$assignStatic(ChangeCipherSpec::t13Consumer, $new($ChangeCipherSpec$T13ChangeCipherSpecConsumer));
}

ChangeCipherSpec::ChangeCipherSpec() {
}

$Class* ChangeCipherSpec::load$($String* name, bool initialize) {
	$loadClass(ChangeCipherSpec, name, initialize, &_ChangeCipherSpec_ClassInfo_, clinit$ChangeCipherSpec, allocate$ChangeCipherSpec);
	return class$;
}

$Class* ChangeCipherSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun