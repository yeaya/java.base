#include <javax/net/ssl/SSLEngineResult.h>

#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <javax/net/ssl/SSLEngineResult$Status.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLEngineResult$HandshakeStatus = ::javax::net::ssl::SSLEngineResult$HandshakeStatus;
using $SSLEngineResult$Status = ::javax::net::ssl::SSLEngineResult$Status;

namespace javax {
	namespace net {
		namespace ssl {

$FieldInfo _SSLEngineResult_FieldInfo_[] = {
	{"status", "Ljavax/net/ssl/SSLEngineResult$Status;", nullptr, $PRIVATE | $FINAL, $field(SSLEngineResult, status)},
	{"handshakeStatus", "Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, $PRIVATE | $FINAL, $field(SSLEngineResult, handshakeStatus)},
	{"bytesConsumed", "I", nullptr, $PRIVATE | $FINAL, $field(SSLEngineResult, bytesConsumed$)},
	{"bytesProduced", "I", nullptr, $PRIVATE | $FINAL, $field(SSLEngineResult, bytesProduced$)},
	{"sequenceNumber", "J", nullptr, $PRIVATE | $FINAL, $field(SSLEngineResult, sequenceNumber$)},
	{}
};

$MethodInfo _SSLEngineResult_MethodInfo_[] = {
	{"<init>", "(Ljavax/net/ssl/SSLEngineResult$Status;Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;II)V", nullptr, $PUBLIC, $method(static_cast<void(SSLEngineResult::*)($SSLEngineResult$Status*,$SSLEngineResult$HandshakeStatus*,int32_t,int32_t)>(&SSLEngineResult::init$))},
	{"<init>", "(Ljavax/net/ssl/SSLEngineResult$Status;Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;IIJ)V", nullptr, $PUBLIC, $method(static_cast<void(SSLEngineResult::*)($SSLEngineResult$Status*,$SSLEngineResult$HandshakeStatus*,int32_t,int32_t,int64_t)>(&SSLEngineResult::init$))},
	{"bytesConsumed", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(SSLEngineResult::*)()>(&SSLEngineResult::bytesConsumed))},
	{"bytesProduced", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(SSLEngineResult::*)()>(&SSLEngineResult::bytesProduced))},
	{"getHandshakeStatus", "()Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SSLEngineResult$HandshakeStatus*(SSLEngineResult::*)()>(&SSLEngineResult::getHandshakeStatus))},
	{"getStatus", "()Ljavax/net/ssl/SSLEngineResult$Status;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$SSLEngineResult$Status*(SSLEngineResult::*)()>(&SSLEngineResult::getStatus))},
	{"sequenceNumber", "()J", nullptr, $PUBLIC | $FINAL, $method(static_cast<int64_t(SSLEngineResult::*)()>(&SSLEngineResult::sequenceNumber))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SSLEngineResult_InnerClassesInfo_[] = {
	{"javax.net.ssl.SSLEngineResult$HandshakeStatus", "javax.net.ssl.SSLEngineResult", "HandshakeStatus", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"javax.net.ssl.SSLEngineResult$Status", "javax.net.ssl.SSLEngineResult", "Status", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _SSLEngineResult_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.net.ssl.SSLEngineResult",
	"java.lang.Object",
	nullptr,
	_SSLEngineResult_FieldInfo_,
	_SSLEngineResult_MethodInfo_,
	nullptr,
	nullptr,
	_SSLEngineResult_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.net.ssl.SSLEngineResult$HandshakeStatus,javax.net.ssl.SSLEngineResult$Status"
};

$Object* allocate$SSLEngineResult($Class* clazz) {
	return $of($alloc(SSLEngineResult));
}

void SSLEngineResult::init$($SSLEngineResult$Status* status, $SSLEngineResult$HandshakeStatus* handshakeStatus, int32_t bytesConsumed, int32_t bytesProduced) {
	SSLEngineResult::init$(status, handshakeStatus, bytesConsumed, bytesProduced, -1);
}

void SSLEngineResult::init$($SSLEngineResult$Status* status, $SSLEngineResult$HandshakeStatus* handshakeStatus, int32_t bytesConsumed, int32_t bytesProduced, int64_t sequenceNumber) {
	if ((status == nullptr) || (handshakeStatus == nullptr) || (bytesConsumed < 0) || (bytesProduced < 0)) {
		$throwNew($IllegalArgumentException, "Invalid Parameter(s)"_s);
	}
	$set(this, status, status);
	$set(this, handshakeStatus, handshakeStatus);
	this->bytesConsumed$ = bytesConsumed;
	this->bytesProduced$ = bytesProduced;
	this->sequenceNumber$ = sequenceNumber;
}

$SSLEngineResult$Status* SSLEngineResult::getStatus() {
	return this->status;
}

$SSLEngineResult$HandshakeStatus* SSLEngineResult::getHandshakeStatus() {
	return this->handshakeStatus;
}

int32_t SSLEngineResult::bytesConsumed() {
	return this->bytesConsumed$;
}

int32_t SSLEngineResult::bytesProduced() {
	return this->bytesProduced$;
}

int64_t SSLEngineResult::sequenceNumber() {
	return this->sequenceNumber$;
}

$String* SSLEngineResult::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({"Status = "_s, this->status, " HandshakeStatus = "_s, this->handshakeStatus, "\nbytesConsumed = "_s, $$str(this->bytesConsumed$), " bytesProduced = "_s, $$str(this->bytesProduced$)}));
	return ($concat(var$0, (this->sequenceNumber$ == -1 ? ""_s : $$str({" sequenceNumber = "_s, $($Long::toUnsignedString(this->sequenceNumber$))}))));
}

SSLEngineResult::SSLEngineResult() {
}

$Class* SSLEngineResult::load$($String* name, bool initialize) {
	$loadClass(SSLEngineResult, name, initialize, &_SSLEngineResult_ClassInfo_, allocate$SSLEngineResult);
	return class$;
}

$Class* SSLEngineResult::class$ = nullptr;

		} // ssl
	} // net
} // javax