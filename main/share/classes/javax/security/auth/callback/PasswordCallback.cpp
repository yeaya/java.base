#include <javax/security/auth/callback/PasswordCallback.h>

#include <javax/security/auth/callback/Callback.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callback = ::javax::security::auth::callback::Callback;

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

$FieldInfo _PasswordCallback_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PasswordCallback, serialVersionUID)},
	{"prompt", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PasswordCallback, prompt)},
	{"echoOn", "Z", nullptr, $PRIVATE, $field(PasswordCallback, echoOn)},
	{"inputPassword", "[C", nullptr, $PRIVATE, $field(PasswordCallback, inputPassword)},
	{}
};

$MethodInfo _PasswordCallback_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(PasswordCallback::*)($String*,bool)>(&PasswordCallback::init$))},
	{"clearPassword", "()V", nullptr, $PUBLIC},
	{"getPassword", "()[C", nullptr, $PUBLIC},
	{"getPrompt", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isEchoOn", "()Z", nullptr, $PUBLIC},
	{"setPassword", "([C)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PasswordCallback_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.callback.PasswordCallback",
	"java.lang.Object",
	"javax.security.auth.callback.Callback,java.io.Serializable",
	_PasswordCallback_FieldInfo_,
	_PasswordCallback_MethodInfo_
};

$Object* allocate$PasswordCallback($Class* clazz) {
	return $of($alloc(PasswordCallback));
}

int32_t PasswordCallback::hashCode() {
	 return this->$Callback::hashCode();
}

bool PasswordCallback::equals(Object$* obj) {
	 return this->$Callback::equals(obj);
}

$Object* PasswordCallback::clone() {
	 return this->$Callback::clone();
}

$String* PasswordCallback::toString() {
	 return this->$Callback::toString();
}

void PasswordCallback::finalize() {
	this->$Callback::finalize();
}

void PasswordCallback::init$($String* prompt, bool echoOn) {
	if (prompt == nullptr || $nc(prompt)->isEmpty()) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, prompt, prompt);
	this->echoOn = echoOn;
}

$String* PasswordCallback::getPrompt() {
	return this->prompt;
}

bool PasswordCallback::isEchoOn() {
	return this->echoOn;
}

void PasswordCallback::setPassword($chars* password) {
	$set(this, inputPassword, password == nullptr ? ($chars*)nullptr : $cast($chars, $nc(password)->clone()));
}

$chars* PasswordCallback::getPassword() {
	return (this->inputPassword == nullptr ? ($chars*)nullptr : $cast($chars, $nc(this->inputPassword)->clone()));
}

void PasswordCallback::clearPassword() {
	if (this->inputPassword != nullptr) {
		for (int32_t i = 0; i < $nc(this->inputPassword)->length; ++i) {
			$nc(this->inputPassword)->set(i, u' ');
		}
	}
}

PasswordCallback::PasswordCallback() {
}

$Class* PasswordCallback::load$($String* name, bool initialize) {
	$loadClass(PasswordCallback, name, initialize, &_PasswordCallback_ClassInfo_, allocate$PasswordCallback);
	return class$;
}

$Class* PasswordCallback::class$ = nullptr;

			} // callback
		} // auth
	} // security
} // javax