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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SmtpProtocolException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(SmtpProtocolException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.smtp.SmtpProtocolException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SmtpProtocolException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SmtpProtocolException);
	});
	return class$;
}

$Class* SmtpProtocolException::class$ = nullptr;

		} // smtp
	} // net
} // sun