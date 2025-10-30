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

$FieldInfo _ParsingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ParsingException, serialVersionUID)},
	{}
};

$MethodInfo _ParsingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ParsingException::*)()>(&ParsingException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ParsingException::*)($String*)>(&ParsingException::init$))},
	{}
};

$ClassInfo _ParsingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.pkcs.ParsingException",
	"java.io.IOException",
	nullptr,
	_ParsingException_FieldInfo_,
	_ParsingException_MethodInfo_
};

$Object* allocate$ParsingException($Class* clazz) {
	return $of($alloc(ParsingException));
}

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
	$loadClass(ParsingException, name, initialize, &_ParsingException_ClassInfo_, allocate$ParsingException);
	return class$;
}

$Class* ParsingException::class$ = nullptr;

		} // pkcs
	} // security
} // sun