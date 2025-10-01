#include <sun/net/smtp/SmtpProtocolException.h>

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
		namespace smtp {

$FieldInfo _SmtpProtocolException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SmtpProtocolException, serialVersionUID)},
	{}
};

$MethodInfo _SmtpProtocolException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(SmtpProtocolException::*)($String*)>(&SmtpProtocolException::init$))},
	{}
};

$ClassInfo _SmtpProtocolException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.smtp.SmtpProtocolException",
	"java.io.IOException",
	nullptr,
	_SmtpProtocolException_FieldInfo_,
	_SmtpProtocolException_MethodInfo_
};

$Object* allocate$SmtpProtocolException($Class* clazz) {
	return $of($alloc(SmtpProtocolException));
}

void SmtpProtocolException::init$($String* s) {
	$IOException::init$(s);
}

SmtpProtocolException::SmtpProtocolException() {
}

SmtpProtocolException::SmtpProtocolException(const SmtpProtocolException& e) {
}

SmtpProtocolException SmtpProtocolException::wrapper$() {
	$pendingException(this);
	return *this;
}

void SmtpProtocolException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* SmtpProtocolException::load$($String* name, bool initialize) {
	$loadClass(SmtpProtocolException, name, initialize, &_SmtpProtocolException_ClassInfo_, allocate$SmtpProtocolException);
	return class$;
}

$Class* SmtpProtocolException::class$ = nullptr;

		} // smtp
	} // net
} // sun