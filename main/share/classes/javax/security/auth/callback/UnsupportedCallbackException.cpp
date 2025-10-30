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

$FieldInfo _UnsupportedCallbackException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedCallbackException, serialVersionUID)},
	{"callback", "Ljavax/security/auth/callback/Callback;", nullptr, $PRIVATE, $field(UnsupportedCallbackException, callback)},
	{}
};

$MethodInfo _UnsupportedCallbackException_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/callback/Callback;)V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedCallbackException::*)($Callback*)>(&UnsupportedCallbackException::init$))},
	{"<init>", "(Ljavax/security/auth/callback/Callback;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedCallbackException::*)($Callback*,$String*)>(&UnsupportedCallbackException::init$))},
	{"getCallback", "()Ljavax/security/auth/callback/Callback;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnsupportedCallbackException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.callback.UnsupportedCallbackException",
	"java.lang.Exception",
	nullptr,
	_UnsupportedCallbackException_FieldInfo_,
	_UnsupportedCallbackException_MethodInfo_
};

$Object* allocate$UnsupportedCallbackException($Class* clazz) {
	return $of($alloc(UnsupportedCallbackException));
}

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
	$loadClass(UnsupportedCallbackException, name, initialize, &_UnsupportedCallbackException_ClassInfo_, allocate$UnsupportedCallbackException);
	return class$;
}

$Class* UnsupportedCallbackException::class$ = nullptr;

			} // callback
		} // auth
	} // security
} // javax