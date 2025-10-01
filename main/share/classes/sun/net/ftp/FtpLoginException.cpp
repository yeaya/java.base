#include <sun/net/ftp/FtpLoginException.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace ftp {

$FieldInfo _FtpLoginException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FtpLoginException, serialVersionUID)},
	{}
};

$MethodInfo _FtpLoginException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FtpLoginException::*)($String*)>(&FtpLoginException::init$))},
	{}
};

$ClassInfo _FtpLoginException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.ftp.FtpLoginException",
	"java.io.IOException",
	nullptr,
	_FtpLoginException_FieldInfo_,
	_FtpLoginException_MethodInfo_
};

$Object* allocate$FtpLoginException($Class* clazz) {
	return $of($alloc(FtpLoginException));
}

void FtpLoginException::init$($String* s) {
	$IOException::init$(s);
}

FtpLoginException::FtpLoginException() {
}

FtpLoginException::FtpLoginException(const FtpLoginException& e) {
}

FtpLoginException FtpLoginException::wrapper$() {
	$pendingException(this);
	return *this;
}

void FtpLoginException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* FtpLoginException::load$($String* name, bool initialize) {
	$loadClass(FtpLoginException, name, initialize, &_FtpLoginException_ClassInfo_, allocate$FtpLoginException);
	return class$;
}

$Class* FtpLoginException::class$ = nullptr;

		} // ftp
	} // net
} // sun