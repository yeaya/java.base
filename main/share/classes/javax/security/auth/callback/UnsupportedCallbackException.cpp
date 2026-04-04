#include <javax/security/auth/callback/UnsupportedCallbackException.h>
#include <javax/security/auth/callback/Callback.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callback = ::javax::security::auth::callback::Callback;

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

void UnsupportedCallbackException::init$($Callback* callback) {
	$Exception::init$();
	$set(this, callback, callback);
}

void UnsupportedCallbackException::init$($Callback* callback, $String* msg) {
	$Exception::init$(msg);
	$set(this, callback, callback);
}

$Callback* UnsupportedCallbackException::getCallback() {
	return this->callback;
}

UnsupportedCallbackException::UnsupportedCallbackException() {
}

UnsupportedCallbackException::UnsupportedCallbackException(const UnsupportedCallbackException& e) : $Exception(e) {
}

void UnsupportedCallbackException::throw$() {
	throw *this;
}

$Class* UnsupportedCallbackException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedCallbackException, serialVersionUID)},
		{"callback", "Ljavax/security/auth/callback/Callback;", nullptr, $PRIVATE, $field(UnsupportedCallbackException, callback)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/callback/Callback;)V", nullptr, $PUBLIC, $method(UnsupportedCallbackException, init$, void, $Callback*)},
		{"<init>", "(Ljavax/security/auth/callback/Callback;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnsupportedCallbackException, init$, void, $Callback*, $String*)},
		{"getCallback", "()Ljavax/security/auth/callback/Callback;", nullptr, $PUBLIC, $virtualMethod(UnsupportedCallbackException, getCallback, $Callback*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.callback.UnsupportedCallbackException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnsupportedCallbackException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnsupportedCallbackException);
	});
	return class$;
}

$Class* UnsupportedCallbackException::class$ = nullptr;

			} // callback
		} // auth
	} // security
} // javax