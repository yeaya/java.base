#include <javax/security/auth/RefreshFailedException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace security {
		namespace auth {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RefreshFailedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RefreshFailedException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(RefreshFailedException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.RefreshFailedException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RefreshFailedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RefreshFailedException);
	});
	return class$;
}

$Class* RefreshFailedException::class$ = nullptr;

		} // auth
	} // security
} // javax