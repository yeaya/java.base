#include <sun/net/TelnetProtocolException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {

$FieldInfo _TelnetProtocolException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TelnetProtocolException, serialVersionUID)},
	{}
};

$MethodInfo _TelnetProtocolException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TelnetProtocolException::*)($String*)>(&TelnetProtocolException::init$))},
	{}
};

$ClassInfo _TelnetProtocolException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.TelnetProtocolException",
	"java.io.IOException",
	nullptr,
	_TelnetProtocolException_FieldInfo_,
	_TelnetProtocolException_MethodInfo_
};

$Object* allocate$TelnetProtocolException($Class* clazz) {
	return $of($alloc(TelnetProtocolException));
}

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
	$loadClass(TelnetProtocolException, name, initialize, &_TelnetProtocolException_ClassInfo_, allocate$TelnetProtocolException);
	return class$;
}

$Class* TelnetProtocolException::class$ = nullptr;

	} // net
} // sun