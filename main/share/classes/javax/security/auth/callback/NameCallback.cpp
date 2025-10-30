#include <javax/security/auth/callback/NameCallback.h>

#include <javax/security/auth/callback/Callback.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callback = ::javax::security::auth::callback::Callback;

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

$FieldInfo _NameCallback_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameCallback, serialVersionUID)},
	{"prompt", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameCallback, prompt)},
	{"defaultName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameCallback, defaultName)},
	{"inputName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameCallback, inputName)},
	{}
};

$MethodInfo _NameCallback_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NameCallback::*)($String*)>(&NameCallback::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NameCallback::*)($String*,$String*)>(&NameCallback::init$))},
	{"getDefaultName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrompt", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NameCallback_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.callback.NameCallback",
	"java.lang.Object",
	"javax.security.auth.callback.Callback,java.io.Serializable",
	_NameCallback_FieldInfo_,
	_NameCallback_MethodInfo_
};

$Object* allocate$NameCallback($Class* clazz) {
	return $of($alloc(NameCallback));
}

int32_t NameCallback::hashCode() {
	 return this->$Callback::hashCode();
}

bool NameCallback::equals(Object$* obj) {
	 return this->$Callback::equals(obj);
}

$Object* NameCallback::clone() {
	 return this->$Callback::clone();
}

$String* NameCallback::toString() {
	 return this->$Callback::toString();
}

void NameCallback::finalize() {
	this->$Callback::finalize();
}

void NameCallback::init$($String* prompt) {
	if (prompt == nullptr || $nc(prompt)->isEmpty()) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, prompt, prompt);
}

void NameCallback::init$($String* prompt, $String* defaultName) {
	bool var$0 = prompt == nullptr || $nc(prompt)->isEmpty() || defaultName == nullptr;
	if (var$0 || $nc(defaultName)->isEmpty()) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, prompt, prompt);
	$set(this, defaultName, defaultName);
}

$String* NameCallback::getPrompt() {
	return this->prompt;
}

$String* NameCallback::getDefaultName() {
	return this->defaultName;
}

void NameCallback::setName($String* name) {
	$set(this, inputName, name);
}

$String* NameCallback::getName() {
	return this->inputName;
}

NameCallback::NameCallback() {
}

$Class* NameCallback::load$($String* name, bool initialize) {
	$loadClass(NameCallback, name, initialize, &_NameCallback_ClassInfo_, allocate$NameCallback);
	return class$;
}

$Class* NameCallback::class$ = nullptr;

			} // callback
		} // auth
	} // security
} // javax