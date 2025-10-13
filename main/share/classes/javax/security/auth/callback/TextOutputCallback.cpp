#include <javax/security/auth/callback/TextOutputCallback.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/auth/callback/Callback.h>
#include <jcpp.h>

#undef ERROR
#undef INFORMATION
#undef WARNING

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

$FieldInfo _TextOutputCallback_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextOutputCallback, serialVersionUID)},
	{"INFORMATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextOutputCallback, INFORMATION)},
	{"WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextOutputCallback, WARNING)},
	{"ERROR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TextOutputCallback, ERROR)},
	{"messageType", "I", nullptr, $PRIVATE, $field(TextOutputCallback, messageType)},
	{"message", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TextOutputCallback, message)},
	{}
};

$MethodInfo _TextOutputCallback_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TextOutputCallback::*)(int32_t,$String*)>(&TextOutputCallback::init$))},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessageType", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TextOutputCallback_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.callback.TextOutputCallback",
	"java.lang.Object",
	"javax.security.auth.callback.Callback,java.io.Serializable",
	_TextOutputCallback_FieldInfo_,
	_TextOutputCallback_MethodInfo_
};

$Object* allocate$TextOutputCallback($Class* clazz) {
	return $of($alloc(TextOutputCallback));
}

int32_t TextOutputCallback::hashCode() {
	 return this->$Callback::hashCode();
}

bool TextOutputCallback::equals(Object$* obj) {
	 return this->$Callback::equals(obj);
}

$Object* TextOutputCallback::clone() {
	 return this->$Callback::clone();
}

$String* TextOutputCallback::toString() {
	 return this->$Callback::toString();
}

void TextOutputCallback::finalize() {
	this->$Callback::finalize();
}

void TextOutputCallback::init$(int32_t messageType, $String* message) {
	if ((messageType != TextOutputCallback::INFORMATION && messageType != TextOutputCallback::WARNING && messageType != TextOutputCallback::ERROR) || message == nullptr || $nc(message)->isEmpty()) {
		$throwNew($IllegalArgumentException);
	}
	this->messageType = messageType;
	$set(this, message, message);
}

int32_t TextOutputCallback::getMessageType() {
	return this->messageType;
}

$String* TextOutputCallback::getMessage() {
	return this->message;
}

TextOutputCallback::TextOutputCallback() {
}

$Class* TextOutputCallback::load$($String* name, bool initialize) {
	$loadClass(TextOutputCallback, name, initialize, &_TextOutputCallback_ClassInfo_, allocate$TextOutputCallback);
	return class$;
}

$Class* TextOutputCallback::class$ = nullptr;

			} // callback
		} // auth
	} // security
} // javax