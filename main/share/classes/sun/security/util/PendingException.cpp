#include <sun/security/util/PendingException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _PendingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PendingException, serialVersionUID)},
	{}
};

$MethodInfo _PendingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PendingException::*)()>(&PendingException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PendingException::*)($String*)>(&PendingException::init$))},
	{}
};

$ClassInfo _PendingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.PendingException",
	"java.lang.RuntimeException",
	nullptr,
	_PendingException_FieldInfo_,
	_PendingException_MethodInfo_
};

$Object* allocate$PendingException($Class* clazz) {
	return $of($alloc(PendingException));
}

void PendingException::init$() {
	$RuntimeException::init$();
}

void PendingException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

PendingException::PendingException() {
}

PendingException::PendingException(const PendingException& e) : $RuntimeException(e) {
}

void PendingException::throw$() {
	throw *this;
}

$Class* PendingException::load$($String* name, bool initialize) {
	$loadClass(PendingException, name, initialize, &_PendingException_ClassInfo_, allocate$PendingException);
	return class$;
}

$Class* PendingException::class$ = nullptr;

		} // util
	} // security
} // sun