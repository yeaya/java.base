#include <javax/security/auth/callback/TextInputCallback.h>
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

int32_t TextInputCallback::hashCode() {
	 return this->$Callback::hashCode();
}

bool TextInputCallback::equals(Object$* obj) {
	 return this->$Callback::equals(obj);
}

$Object* TextInputCallback::clone() {
	 return this->$Callback::clone();
}

$String* TextInputCallback::toString() {
	 return this->$Callback::toString();
}

void TextInputCallback::finalize() {
	this->$Callback::finalize();
}

void TextInputCallback::init$($String* prompt) {
	if (prompt == nullptr || prompt->isEmpty()) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, prompt, prompt);
}

void TextInputCallback::init$($String* prompt, $String* defaultText) {
	bool var$0 = prompt == nullptr || prompt->isEmpty() || defaultText == nullptr;
	if (var$0 || defaultText->isEmpty()) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, prompt, prompt);
	$set(this, defaultText, defaultText);
}

$String* TextInputCallback::getPrompt() {
	return this->prompt;
}

$String* TextInputCallback::getDefaultText() {
	return this->defaultText;
}

void TextInputCallback::setText($String* text) {
	$set(this, inputText, text);
}

$String* TextInputCallback::getText() {
	return this->inputText;
}

TextInputCallback::TextInputCallback() {
}

$Class* TextInputCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextInputCallback, serialVersionUID)},
		{"prompt", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TextInputCallback, prompt)},
		{"defaultText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TextInputCallback, defaultText)},
		{"inputText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TextInputCallback, inputText)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TextInputCallback, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TextInputCallback, init$, void, $String*, $String*)},
		{"getDefaultText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TextInputCallback, getDefaultText, $String*)},
		{"getPrompt", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TextInputCallback, getPrompt, $String*)},
		{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TextInputCallback, getText, $String*)},
		{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TextInputCallback, setText, void, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.callback.TextInputCallback",
		"java.lang.Object",
		"javax.security.auth.callback.Callback,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TextInputCallback, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TextInputCallback));
	});
	return class$;
}

$Class* TextInputCallback::class$ = nullptr;

			} // callback
		} // auth
	} // security
} // javax