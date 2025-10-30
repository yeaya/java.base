#include <javax/net/ssl/SSLEngineResult$Status.h>

#include <java/lang/Enum.h>
#include <javax/net/ssl/SSLEngineResult.h>
#include <jcpp.h>

#undef BUFFER_OVERFLOW
#undef BUFFER_UNDERFLOW
#undef CLOSED
#undef OK

using $SSLEngineResult$StatusArray = $Array<::javax::net::ssl::SSLEngineResult$Status>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLEngineResult = ::javax::net::ssl::SSLEngineResult;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _SSLEngineResult$Status_FieldInfo_[] = {
	{"BUFFER_UNDERFLOW", "Ljavax/net/ssl/SSLEngineResult$Status;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLEngineResult$Status, BUFFER_UNDERFLOW)},
	{"BUFFER_OVERFLOW", "Ljavax/net/ssl/SSLEngineResult$Status;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLEngineResult$Status, BUFFER_OVERFLOW)},
	{"OK", "Ljavax/net/ssl/SSLEngineResult$Status;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLEngineResult$Status, OK)},
	{"CLOSED", "Ljavax/net/ssl/SSLEngineResult$Status;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SSLEngineResult$Status, CLOSED)},
	{"$VALUES", "[Ljavax/net/ssl/SSLEngineResult$Status;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLEngineResult$Status, $VALUES)},
	{}
};

$MethodInfo _SSLEngineResult$Status_MethodInfo_[] = {
	{"$values", "()[Ljavax/net/ssl/SSLEngineResult$Status;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SSLEngineResult$StatusArray*(*)()>(&SSLEngineResult$Status::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(SSLEngineResult$Status::*)($String*,int32_t)>(&SSLEngineResult$Status::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/net/ssl/SSLEngineResult$Status;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SSLEngineResult$Status*(*)($String*)>(&SSLEngineResult$Status::valueOf))},
	{"values", "()[Ljavax/net/ssl/SSLEngineResult$Status;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SSLEngineResult$StatusArray*(*)()>(&SSLEngineResult$Status::values))},
	{}
};

$InnerClassInfo _SSLEngineResult$Status_InnerClassesInfo_[] = {
	{"javax.net.ssl.SSLEngineResult$Status", "javax.net.ssl.SSLEngineResult", "Status", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _SSLEngineResult$Status_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.net.ssl.SSLEngineResult$Status",
	"java.lang.Enum",
	nullptr,
	_SSLEngineResult$Status_FieldInfo_,
	_SSLEngineResult$Status_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/net/ssl/SSLEngineResult$Status;>;",
	nullptr,
	_SSLEngineResult$Status_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.net.ssl.SSLEngineResult"
};

$Object* allocate$SSLEngineResult$Status($Class* clazz) {
	return $of($alloc(SSLEngineResult$Status));
}

SSLEngineResult$Status* SSLEngineResult$Status::BUFFER_UNDERFLOW = nullptr;
SSLEngineResult$Status* SSLEngineResult$Status::BUFFER_OVERFLOW = nullptr;
SSLEngineResult$Status* SSLEngineResult$Status::OK = nullptr;
SSLEngineResult$Status* SSLEngineResult$Status::CLOSED = nullptr;
$SSLEngineResult$StatusArray* SSLEngineResult$Status::$VALUES = nullptr;

$SSLEngineResult$StatusArray* SSLEngineResult$Status::$values() {
	$init(SSLEngineResult$Status);
	return $new($SSLEngineResult$StatusArray, {
		SSLEngineResult$Status::BUFFER_UNDERFLOW,
		SSLEngineResult$Status::BUFFER_OVERFLOW,
		SSLEngineResult$Status::OK,
		SSLEngineResult$Status::CLOSED
	});
}

$SSLEngineResult$StatusArray* SSLEngineResult$Status::values() {
	$init(SSLEngineResult$Status);
	return $cast($SSLEngineResult$StatusArray, SSLEngineResult$Status::$VALUES->clone());
}

SSLEngineResult$Status* SSLEngineResult$Status::valueOf($String* name) {
	$init(SSLEngineResult$Status);
	return $cast(SSLEngineResult$Status, $Enum::valueOf(SSLEngineResult$Status::class$, name));
}

void SSLEngineResult$Status::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$SSLEngineResult$Status($Class* class$) {
	$assignStatic(SSLEngineResult$Status::BUFFER_UNDERFLOW, $new(SSLEngineResult$Status, "BUFFER_UNDERFLOW"_s, 0));
	$assignStatic(SSLEngineResult$Status::BUFFER_OVERFLOW, $new(SSLEngineResult$Status, "BUFFER_OVERFLOW"_s, 1));
	$assignStatic(SSLEngineResult$Status::OK, $new(SSLEngineResult$Status, "OK"_s, 2));
	$assignStatic(SSLEngineResult$Status::CLOSED, $new(SSLEngineResult$Status, "CLOSED"_s, 3));
	$assignStatic(SSLEngineResult$Status::$VALUES, SSLEngineResult$Status::$values());
}

SSLEngineResult$Status::SSLEngineResult$Status() {
}

$Class* SSLEngineResult$Status::load$($String* name, bool initialize) {
	$loadClass(SSLEngineResult$Status, name, initialize, &_SSLEngineResult$Status_ClassInfo_, clinit$SSLEngineResult$Status, allocate$SSLEngineResult$Status);
	return class$;
}

$Class* SSLEngineResult$Status::class$ = nullptr;

		} // ssl
	} // net
} // javax