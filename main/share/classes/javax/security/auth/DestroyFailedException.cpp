#include <javax/security/auth/DestroyFailedException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace security {
		namespace auth {

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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DestroyFailedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DestroyFailedException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DestroyFailedException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.DestroyFailedException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DestroyFailedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DestroyFailedException);
	});
	return class$;
}

$Class* DestroyFailedException::class$ = nullptr;

		} // auth
	} // security
} // javax