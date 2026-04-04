#include <sun/net/TelnetProtocolException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {

void TelnetProtocolException::init$($String* s) {
	$IOException::init$(s);
}

TelnetProtocolException::TelnetProtocolException() {
}

TelnetProtocolException::TelnetProtocolException(const TelnetProtocolException& e) : $IOException(e) {
}

void TelnetProtocolException::throw$() {
	throw *this;
}

$Class* TelnetProtocolException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TelnetProtocolException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TelnetProtocolException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.TelnetProtocolException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TelnetProtocolException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TelnetProtocolException);
	});
	return class$;
}

$Class* TelnetProtocolException::class$ = nullptr;

	} // net
} // sun