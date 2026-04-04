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
	if (prompt == nullptr || prompt->isEmpty()) {
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
	$set(this, inputPassword, password == nullptr ? ($chars*)nullptr : $cast($chars, password->clone()));
}

$chars* PasswordCallback::getPassword() {
	return (this->inputPassword == nullptr ? ($chars*)nullptr : $cast($chars, this->inputPassword->clone()));
}

void PasswordCallback::clearPassword() {
	if (this->inputPassword != nullptr) {
		for (int32_t i = 0; i < this->inputPassword->length; ++i) {
			this->inputPassword->set(i, u' ');
		}
	}
}

PasswordCallback::PasswordCallback() {
}

$Class* PasswordCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PasswordCallback, serialVersionUID)},
		{"prompt", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PasswordCallback, prompt)},
		{"echoOn", "Z", nullptr, $PRIVATE, $field(PasswordCallback, echoOn)},
		{"inputPassword", "[C", nullptr, $PRIVATE, $field(PasswordCallback, inputPassword)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(PasswordCallback, init$, void, $String*, bool)},
		{"clearPassword", "()V", nullptr, $PUBLIC, $virtualMethod(PasswordCallback, clearPassword, void)},
		{"getPassword", "()[C", nullptr, $PUBLIC, $virtualMethod(PasswordCallback, getPassword, $chars*)},
		{"getPrompt", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PasswordCallback, getPrompt, $String*)},
		{"isEchoOn", "()Z", nullptr, $PUBLIC, $virtualMethod(PasswordCallback, isEchoOn, bool)},
		{"setPassword", "([C)V", nullptr, $PUBLIC, $virtualMethod(PasswordCallback, setPassword, void, $chars*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.callback.PasswordCallback",
		"java.lang.Object",
		"javax.security.auth.callback.Callback,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PasswordCallback, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PasswordCallback));
	});
	return class$;
}

$Class* PasswordCallback::class$ = nullptr;

			} // callback
		} // auth
	} // security
} // javax