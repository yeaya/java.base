#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>

#include <java/lang/Enum.h>
#include <javax/net/ssl/SSLEngineResult.h>
#include <jcpp.h>

#undef FINISHED
#undef NEED_TASK
#undef NEED_UNWRAP
#undef NEED_UNWRAP_AGAIN
#undef NEED_WRAP
#undef NOT_HANDSHAKING

using $SSLEngineResult$HandshakeStatusArray = $Array<::javax::net::ssl::SSLEngineResult$HandshakeStatus>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _SSLEngineResult$HandshakeStatus_FieldInfo_[] = {
	{"NOT_HANDSHAKING", "Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLEngineResult$HandshakeStatus, NOT_HANDSHAKING)},
	{"FINISHED", "Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLEngineResult$HandshakeStatus, FINISHED)},
	{"NEED_TASK", "Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLEngineResult$HandshakeStatus, NEED_TASK)},
	{"NEED_WRAP", "Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLEngineResult$HandshakeStatus, NEED_WRAP)},
	{"NEED_UNWRAP", "Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLEngineResult$HandshakeStatus, NEED_UNWRAP)},
	{"NEED_UNWRAP_AGAIN", "Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLEngineResult$HandshakeStatus, NEED_UNWRAP_AGAIN)},
	{"$VALUES", "[Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLEngineResult$HandshakeStatus, $VALUES)},
	{}
};

$MethodInfo _SSLEngineResult$HandshakeStatus_MethodInfo_[] = {
	{"$values", "()[Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SSLEngineResult$HandshakeStatusArray*(*)()>(&SSLEngineResult$HandshakeStatus::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(SSLEngineResult$HandshakeStatus::*)($String*,int32_t)>(&SSLEngineResult$HandshakeStatus::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SSLEngineResult$HandshakeStatus*(*)($String*)>(&SSLEngineResult$HandshakeStatus::valueOf))},
	{"values", "()[Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SSLEngineResult$HandshakeStatusArray*(*)()>(&SSLEngineResult$HandshakeStatus::values))},
	{}
};

$InnerClassInfo _SSLEngineResult$HandshakeStatus_InnerClassesInfo_[] = {
	{"javax.net.ssl.SSLEngineResult$HandshakeStatus", "javax.net.ssl.SSLEngineResult", "HandshakeStatus", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _SSLEngineResult$HandshakeStatus_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.net.ssl.SSLEngineResult$HandshakeStatus",
	"java.lang.Enum",
	nullptr,
	_SSLEngineResult$HandshakeStatus_FieldInfo_,
	_SSLEngineResult$HandshakeStatus_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;>;",
	nullptr,
	_SSLEngineResult$HandshakeStatus_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.net.ssl.SSLEngineResult"
};

$Object* allocate$SSLEngineResult$HandshakeStatus($Class* clazz) {
	return $of($alloc(SSLEngineResult$HandshakeStatus));
}

SSLEngineResult$HandshakeStatus* SSLEngineResult$HandshakeStatus::NOT_HANDSHAKING = nullptr;
SSLEngineResult$HandshakeStatus* SSLEngineResult$HandshakeStatus::FINISHED = nullptr;
SSLEngineResult$HandshakeStatus* SSLEngineResult$HandshakeStatus::NEED_TASK = nullptr;
SSLEngineResult$HandshakeStatus* SSLEngineResult$HandshakeStatus::NEED_WRAP = nullptr;
SSLEngineResult$HandshakeStatus* SSLEngineResult$HandshakeStatus::NEED_UNWRAP = nullptr;
SSLEngineResult$HandshakeStatus* SSLEngineResult$HandshakeStatus::NEED_UNWRAP_AGAIN = nullptr;
$SSLEngineResult$HandshakeStatusArray* SSLEngineResult$HandshakeStatus::$VALUES = nullptr;

$SSLEngineResult$HandshakeStatusArray* SSLEngineResult$HandshakeStatus::$values() {
	$init(SSLEngineResult$HandshakeStatus);
	return $new($SSLEngineResult$HandshakeStatusArray, {
		SSLEngineResult$HandshakeStatus::NOT_HANDSHAKING,
		SSLEngineResult$HandshakeStatus::FINISHED,
		SSLEngineResult$HandshakeStatus::NEED_TASK,
		SSLEngineResult$HandshakeStatus::NEED_WRAP,
		SSLEngineResult$HandshakeStatus::NEED_UNWRAP,
		SSLEngineResult$HandshakeStatus::NEED_UNWRAP_AGAIN
	});
}

$SSLEngineResult$HandshakeStatusArray* SSLEngineResult$HandshakeStatus::values() {
	$init(SSLEngineResult$HandshakeStatus);
	return $cast($SSLEngineResult$HandshakeStatusArray, SSLEngineResult$HandshakeStatus::$VALUES->clone());
}

SSLEngineResult$HandshakeStatus* SSLEngineResult$HandshakeStatus::valueOf($String* name) {
	$init(SSLEngineResult$HandshakeStatus);
	return $cast(SSLEngineResult$HandshakeStatus, $Enum::valueOf(SSLEngineResult$HandshakeStatus::class$, name));
}

void SSLEngineResult$HandshakeStatus::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$SSLEngineResult$HandshakeStatus($Class* class$) {
	$assignStatic(SSLEngineResult$HandshakeStatus::NOT_HANDSHAKING, $new(SSLEngineResult$HandshakeStatus, "NOT_HANDSHAKING"_s, 0));
	$assignStatic(SSLEngineResult$HandshakeStatus::FINISHED, $new(SSLEngineResult$HandshakeStatus, "FINISHED"_s, 1));
	$assignStatic(SSLEngineResult$HandshakeStatus::NEED_TASK, $new(SSLEngineResult$HandshakeStatus, "NEED_TASK"_s, 2));
	$assignStatic(SSLEngineResult$HandshakeStatus::NEED_WRAP, $new(SSLEngineResult$HandshakeStatus, "NEED_WRAP"_s, 3));
	$assignStatic(SSLEngineResult$HandshakeStatus::NEED_UNWRAP, $new(SSLEngineResult$HandshakeStatus, "NEED_UNWRAP"_s, 4));
	$assignStatic(SSLEngineResult$HandshakeStatus::NEED_UNWRAP_AGAIN, $new(SSLEngineResult$HandshakeStatus, "NEED_UNWRAP_AGAIN"_s, 5));
	$assignStatic(SSLEngineResult$HandshakeStatus::$VALUES, SSLEngineResult$HandshakeStatus::$values());
}

SSLEngineResult$HandshakeStatus::SSLEngineResult$HandshakeStatus() {
}

$Class* SSLEngineResult$HandshakeStatus::load$($String* name, bool initialize) {
	$loadClass(SSLEngineResult$HandshakeStatus, name, initialize, &_SSLEngineResult$HandshakeStatus_ClassInfo_, clinit$SSLEngineResult$HandshakeStatus, allocate$SSLEngineResult$HandshakeStatus);
	return class$;
}

$Class* SSLEngineResult$HandshakeStatus::class$ = nullptr;

		} // ssl
	} // net
} // javax