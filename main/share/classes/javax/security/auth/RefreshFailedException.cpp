#include <javax/security/auth/RefreshFailedException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace security {
		namespace auth {

$FieldInfo _RefreshFailedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RefreshFailedException, serialVersionUID)},
	{}
};

$MethodInfo _RefreshFailedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RefreshFailedException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RefreshFailedException, init$, void, $String*)},
	{}
};

$ClassInfo _RefreshFailedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.RefreshFailedException",
	"java.lang.Exception",
	nullptr,
	_RefreshFailedException_FieldInfo_,
	_RefreshFailedException_MethodInfo_
};

$Object* allocate$RefreshFailedException($Class* clazz) {
	return $of($alloc(RefreshFailedException));
}

void RefreshFailedException::init$() {
	$Exception::init$();
}

void RefreshFailedException::init$($String* msg) {
	$Exception::init$(msg);
}

RefreshFailedException::RefreshFailedException() {
}

RefreshFailedException::RefreshFailedException(const RefreshFailedException& e) : $Exception(e) {
}

void RefreshFailedException::throw$() {
	throw *this;
}

$Class* RefreshFailedException::load$($String* name, bool initialize) {
	$loadClass(RefreshFailedException, name, initialize, &_RefreshFailedException_ClassInfo_, allocate$RefreshFailedException);
	return class$;
}

$Class* RefreshFailedException::class$ = nullptr;

		} // auth
	} // security
} // javax