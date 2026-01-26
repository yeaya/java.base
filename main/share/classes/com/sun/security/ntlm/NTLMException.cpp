#include <com/sun/security/ntlm/NTLMException.h>

#include <java/security/GeneralSecurityException.h>
#include <jcpp.h>

#undef AUTH_FAILED
#undef BAD_VERSION
#undef NO_DOMAIN_INFO
#undef PACKET_READ_ERROR
#undef PROTOCOL
#undef USER_UNKNOWN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {

$FieldInfo _NTLMException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NTLMException, serialVersionUID)},
	{"PACKET_READ_ERROR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NTLMException, PACKET_READ_ERROR)},
	{"NO_DOMAIN_INFO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NTLMException, NO_DOMAIN_INFO)},
	{"USER_UNKNOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NTLMException, USER_UNKNOWN)},
	{"AUTH_FAILED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NTLMException, AUTH_FAILED)},
	{"BAD_VERSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NTLMException, BAD_VERSION)},
	{"PROTOCOL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NTLMException, PROTOCOL)},
	{"errorCode", "I", nullptr, $PRIVATE, $field(NTLMException, errorCode$)},
	{}
};

$MethodInfo _NTLMException_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(NTLMException, init$, void, int32_t, $String*)},
	{"errorCode", "()I", nullptr, $PUBLIC, $method(NTLMException, errorCode, int32_t)},
	{}
};

$ClassInfo _NTLMException_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.security.ntlm.NTLMException",
	"java.security.GeneralSecurityException",
	nullptr,
	_NTLMException_FieldInfo_,
	_NTLMException_MethodInfo_
};

$Object* allocate$NTLMException($Class* clazz) {
	return $of($alloc(NTLMException));
}

void NTLMException::init$(int32_t errorCode, $String* msg) {
	$GeneralSecurityException::init$(msg);
	this->errorCode$ = errorCode;
}

int32_t NTLMException::errorCode() {
	return this->errorCode$;
}

NTLMException::NTLMException() {
}

NTLMException::NTLMException(const NTLMException& e) : $GeneralSecurityException(e) {
}

void NTLMException::throw$() {
	throw *this;
}

$Class* NTLMException::load$($String* name, bool initialize) {
	$loadClass(NTLMException, name, initialize, &_NTLMException_ClassInfo_, allocate$NTLMException);
	return class$;
}

$Class* NTLMException::class$ = nullptr;

			} // ntlm
		} // security
	} // sun
} // com