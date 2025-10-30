#include <javax/security/auth/DestroyFailedException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace security {
		namespace auth {

$FieldInfo _DestroyFailedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DestroyFailedException, serialVersionUID)},
	{}
};

$MethodInfo _DestroyFailedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DestroyFailedException::*)()>(&DestroyFailedException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DestroyFailedException::*)($String*)>(&DestroyFailedException::init$))},
	{}
};

$ClassInfo _DestroyFailedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.DestroyFailedException",
	"java.lang.Exception",
	nullptr,
	_DestroyFailedException_FieldInfo_,
	_DestroyFailedException_MethodInfo_
};

$Object* allocate$DestroyFailedException($Class* clazz) {
	return $of($alloc(DestroyFailedException));
}

void DestroyFailedException::init$() {
	$Exception::init$();
}

void DestroyFailedException::init$($String* msg) {
	$Exception::init$(msg);
}

DestroyFailedException::DestroyFailedException() {
}

DestroyFailedException::DestroyFailedException(const DestroyFailedException& e) : $Exception(e) {
}

void DestroyFailedException::throw$() {
	throw *this;
}

$Class* DestroyFailedException::load$($String* name, bool initialize) {
	$loadClass(DestroyFailedException, name, initialize, &_DestroyFailedException_ClassInfo_, allocate$DestroyFailedException);
	return class$;
}

$Class* DestroyFailedException::class$ = nullptr;

		} // auth
	} // security
} // javax