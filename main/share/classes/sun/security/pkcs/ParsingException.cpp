#include <sun/security/pkcs/ParsingException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace pkcs {

void ParsingException::init$() {
	$IOException::init$();
}

void ParsingException::init$($String* s) {
	$IOException::init$(s);
}

ParsingException::ParsingException() {
}

ParsingException::ParsingException(const ParsingException& e) : $IOException(e) {
}

void ParsingException::throw$() {
	throw *this;
}

$Class* ParsingException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ParsingException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ParsingException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ParsingException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.pkcs.ParsingException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ParsingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParsingException);
	});
	return class$;
}

$Class* ParsingException::class$ = nullptr;

		} // pkcs
	} // security
} // sun