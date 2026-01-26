#include <sun/net/ftp/FtpProtocolException.h>

#include <sun/net/ftp/FtpReplyCode.h>
#include <jcpp.h>

#undef UNKNOWN_ERROR

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FtpReplyCode = ::sun::net::ftp::FtpReplyCode;

namespace sun {
	namespace net {
		namespace ftp {

$FieldInfo _FtpProtocolException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FtpProtocolException, serialVersionUID)},
	{"code", "Lsun/net/ftp/FtpReplyCode;", nullptr, $PRIVATE | $FINAL, $field(FtpProtocolException, code)},
	{}
};

$MethodInfo _FtpProtocolException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FtpProtocolException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Lsun/net/ftp/FtpReplyCode;)V", nullptr, $PUBLIC, $method(FtpProtocolException, init$, void, $String*, $FtpReplyCode*)},
	{"getReplyCode", "()Lsun/net/ftp/FtpReplyCode;", nullptr, $PUBLIC, $virtualMethod(FtpProtocolException, getReplyCode, $FtpReplyCode*)},
	{}
};

$ClassInfo _FtpProtocolException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.ftp.FtpProtocolException",
	"java.lang.Exception",
	nullptr,
	_FtpProtocolException_FieldInfo_,
	_FtpProtocolException_MethodInfo_
};

$Object* allocate$FtpProtocolException($Class* clazz) {
	return $of($alloc(FtpProtocolException));
}

void FtpProtocolException::init$($String* detail) {
	$Exception::init$(detail);
	$init($FtpReplyCode);
	$set(this, code, $FtpReplyCode::UNKNOWN_ERROR);
}

void FtpProtocolException::init$($String* detail, $FtpReplyCode* code) {
	$Exception::init$(detail);
	$set(this, code, code);
}

$FtpReplyCode* FtpProtocolException::getReplyCode() {
	return this->code;
}

FtpProtocolException::FtpProtocolException() {
}

FtpProtocolException::FtpProtocolException(const FtpProtocolException& e) : $Exception(e) {
}

void FtpProtocolException::throw$() {
	throw *this;
}

$Class* FtpProtocolException::load$($String* name, bool initialize) {
	$loadClass(FtpProtocolException, name, initialize, &_FtpProtocolException_ClassInfo_, allocate$FtpProtocolException);
	return class$;
}

$Class* FtpProtocolException::class$ = nullptr;

		} // ftp
	} // net
} // sun