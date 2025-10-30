#include <sun/net/smtp/SmtpProtocolException.h>

#include <java/io/IOException.h>
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

SmtpProtocolException::SmtpProtocolException(const SmtpProtocolException& e) : $IOException(e) {
}

void SmtpProtocolException::throw$() {
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