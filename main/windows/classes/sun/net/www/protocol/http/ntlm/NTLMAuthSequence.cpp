#include <sun/net/www/protocol/http/ntlm/NTLMAuthSequence.h>

#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/util/Base64$Decoder.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Base64.h>
#include <sun/net/www/protocol/http/ntlm/NTLMAuthSequence$Status.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Base64 = ::java::util::Base64;
using $Base64$Decoder = ::java::util::Base64$Decoder;
using $Base64$Encoder = ::java::util::Base64$Encoder;
using $NTLMAuthSequence$Status = ::sun::net::www::protocol::http::ntlm::NTLMAuthSequence$Status;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {
					namespace ntlm {

$FieldInfo _NTLMAuthSequence_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NTLMAuthSequence, $assertionsDisabled)},
	{"username", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NTLMAuthSequence, username)},
	{"password", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NTLMAuthSequence, password)},
	{"ntdomain", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NTLMAuthSequence, ntdomain)},
	{"state", "I", nullptr, $PRIVATE, $field(NTLMAuthSequence, state)},
	{"crdHandle", "J", nullptr, $PRIVATE, $field(NTLMAuthSequence, crdHandle)},
	{"ctxHandle", "J", nullptr, $PRIVATE, $field(NTLMAuthSequence, ctxHandle)},
	{"status", "Lsun/net/www/protocol/http/ntlm/NTLMAuthSequence$Status;", nullptr, 0, $field(NTLMAuthSequence, status)},
	{}
};

$MethodInfo _NTLMAuthSequence_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(NTLMAuthSequence::*)($String*,$String*,$String*)>(&NTLMAuthSequence::init$)), "java.io.IOException"},
	{"getAuthHeader", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getCredentialsHandle", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(NTLMAuthSequence::*)($String*,$String*,$String*)>(&NTLMAuthSequence::getCredentialsHandle))},
	{"getNextToken", "(J[BLsun/net/www/protocol/http/ntlm/NTLMAuthSequence$Status;)[B", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$bytes*(NTLMAuthSequence::*)(int64_t,$bytes*,$NTLMAuthSequence$Status*)>(&NTLMAuthSequence::getNextToken))},
	{"initFirst", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<Lsun/net/www/protocol/http/ntlm/NTLMAuthSequence$Status;>;)V", $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($Class*)>(&NTLMAuthSequence::initFirst))},
	{"isComplete", "()Z", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_getCredentialsHandle 2
#define _METHOD_INDEX_getNextToken 3
#define _METHOD_INDEX_initFirst 4

$InnerClassInfo _NTLMAuthSequence_InnerClassesInfo_[] = {
	{"sun.net.www.protocol.http.ntlm.NTLMAuthSequence$Status", "sun.net.www.protocol.http.ntlm.NTLMAuthSequence", "Status", $STATIC},
	{}
};

$ClassInfo _NTLMAuthSequence_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.protocol.http.ntlm.NTLMAuthSequence",
	"java.lang.Object",
	nullptr,
	_NTLMAuthSequence_FieldInfo_,
	_NTLMAuthSequence_MethodInfo_,
	nullptr,
	nullptr,
	_NTLMAuthSequence_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.www.protocol.http.ntlm.NTLMAuthSequence$Status"
};

$Object* allocate$NTLMAuthSequence($Class* clazz) {
	return $of($alloc(NTLMAuthSequence));
}

bool NTLMAuthSequence::$assertionsDisabled = false;

void NTLMAuthSequence::init$($String* username, $String* password, $String* ntdomain) {
	$set(this, username, username);
	$set(this, password, password);
	$set(this, ntdomain, ntdomain);
	$set(this, status, $new($NTLMAuthSequence$Status));
	this->state = 0;
	this->crdHandle = getCredentialsHandle(username, ntdomain, password);
	if (this->crdHandle == 0) {
		$throwNew($IOException, "could not get credentials handle"_s);
	}
}

$String* NTLMAuthSequence::getAuthHeader($String* token) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, input, nullptr);
	if (!NTLMAuthSequence::$assertionsDisabled && ! !$nc(this->status)->sequenceComplete) {
		$throwNew($AssertionError);
	}
	if (token != nullptr) {
		$assign(input, $nc($($Base64::getDecoder()))->decode(token));
	}
	$var($bytes, b, getNextToken(this->crdHandle, input, this->status));
	if (b == nullptr) {
		$throwNew($IOException, "Internal authentication error"_s);
	}
	return $nc($($Base64::getEncoder()))->encodeToString(b);
}

bool NTLMAuthSequence::isComplete() {
	return $nc(this->status)->sequenceComplete;
}

void NTLMAuthSequence::initFirst($Class* clazz) {
	$init(NTLMAuthSequence);
	$prepareNativeStatic(NTLMAuthSequence, initFirst, void, $Class* clazz);
	$invokeNativeStatic(clazz);
	$finishNativeStatic();
}

int64_t NTLMAuthSequence::getCredentialsHandle($String* user, $String* domain, $String* password) {
	int64_t $ret = 0;
	$prepareNative(NTLMAuthSequence, getCredentialsHandle, int64_t, $String* user, $String* domain, $String* password);
	$ret = $invokeNative(user, domain, password);
	$finishNative();
	return $ret;
}

$bytes* NTLMAuthSequence::getNextToken(int64_t crdHandle, $bytes* lastToken, $NTLMAuthSequence$Status* returned) {
	$var($bytes, $ret, nullptr);
	$prepareNative(NTLMAuthSequence, getNextToken, $bytes*, int64_t crdHandle, $bytes* lastToken, $NTLMAuthSequence$Status* returned);
	$assign($ret, $invokeNativeObject(crdHandle, lastToken, returned));
	$finishNative();
	return $ret;
}

void clinit$NTLMAuthSequence($Class* class$) {
	NTLMAuthSequence::$assertionsDisabled = !NTLMAuthSequence::class$->desiredAssertionStatus();
	{
		$load($NTLMAuthSequence$Status);
		NTLMAuthSequence::initFirst($NTLMAuthSequence$Status::class$);
	}
}

NTLMAuthSequence::NTLMAuthSequence() {
}

$Class* NTLMAuthSequence::load$($String* name, bool initialize) {
	$loadClass(NTLMAuthSequence, name, initialize, &_NTLMAuthSequence_ClassInfo_, clinit$NTLMAuthSequence, allocate$NTLMAuthSequence);
	return class$;
}

$Class* NTLMAuthSequence::class$ = nullptr;

					} // ntlm
				} // http
			} // protocol
		} // www
	} // net
} // sun