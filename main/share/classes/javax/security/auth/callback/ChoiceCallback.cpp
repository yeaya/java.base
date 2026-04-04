#include <javax/security/auth/callback/ChoiceCallback.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/security/auth/callback/Callback.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Callback = ::javax::security::auth::callback::Callback;

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

int32_t ChoiceCallback::hashCode() {
	 return this->$Callback::hashCode();
}

bool ChoiceCallback::equals(Object$* obj) {
	 return this->$Callback::equals(obj);
}

$Object* ChoiceCallback::clone() {
	 return this->$Callback::clone();
}

$String* ChoiceCallback::toString() {
	 return this->$Callback::toString();
}

void ChoiceCallback::finalize() {
	this->$Callback::finalize();
}

void ChoiceCallback::init$($String* prompt, $StringArray* choices, int32_t defaultChoice, bool multipleSelectionsAllowed) {
	if (prompt == nullptr || prompt->isEmpty() || choices == nullptr || choices->length == 0 || defaultChoice < 0 || defaultChoice >= choices->length) {
		$throwNew($IllegalArgumentException);
	}
	for (int32_t i = 0; i < $nc(choices)->length; ++i) {
		if (choices->get(i) == nullptr || $nc(choices->get(i))->isEmpty()) {
			$throwNew($IllegalArgumentException);
		}
	}
	$set(this, prompt, prompt);
	$set(this, choices, $cast($StringArray, choices->clone()));
	this->defaultChoice = defaultChoice;
	this->multipleSelectionsAllowed = multipleSelectionsAllowed;
}

$String* ChoiceCallback::getPrompt() {
	return this->prompt;
}

$StringArray* ChoiceCallback::getChoices() {
	return $cast($StringArray, $nc(this->choices)->clone());
}

int32_t ChoiceCallback::getDefaultChoice() {
	return this->defaultChoice;
}

bool ChoiceCallback::allowMultipleSelections() {
	return this->multipleSelectionsAllowed;
}

void ChoiceCallback::setSelectedIndex(int32_t selection) {
	$set(this, selections, $new($ints, 1));
	this->selections->set(0, selection);
}

void ChoiceCallback::setSelectedIndexes($ints* selections) {
	if (!this->multipleSelectionsAllowed) {
		$throwNew($UnsupportedOperationException);
	}
	$set(this, selections, selections == nullptr ? ($ints*)nullptr : $cast($ints, selections->clone()));
}

$ints* ChoiceCallback::getSelectedIndexes() {
	return this->selections == nullptr ? ($ints*)nullptr : $cast($ints, this->selections->clone());
}

ChoiceCallback::ChoiceCallback() {
}

$Class* ChoiceCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChoiceCallback, serialVersionUID)},
		{"prompt", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ChoiceCallback, prompt)},
		{"choices", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ChoiceCallback, choices)},
		{"defaultChoice", "I", nullptr, $PRIVATE | $FINAL, $field(ChoiceCallback, defaultChoice)},
		{"multipleSelectionsAllowed", "Z", nullptr, $PRIVATE | $FINAL, $field(ChoiceCallback, multipleSelectionsAllowed)},
		{"selections", "[I", nullptr, $PRIVATE, $field(ChoiceCallback, selections)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;[Ljava/lang/String;IZ)V", nullptr, $PUBLIC, $method(ChoiceCallback, init$, void, $String*, $StringArray*, int32_t, bool)},
		{"allowMultipleSelections", "()Z", nullptr, $PUBLIC, $virtualMethod(ChoiceCallback, allowMultipleSelections, bool)},
		{"getChoices", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ChoiceCallback, getChoices, $StringArray*)},
		{"getDefaultChoice", "()I", nullptr, $PUBLIC, $virtualMethod(ChoiceCallback, getDefaultChoice, int32_t)},
		{"getPrompt", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ChoiceCallback, getPrompt, $String*)},
		{"getSelectedIndexes", "()[I", nullptr, $PUBLIC, $virtualMethod(ChoiceCallback, getSelectedIndexes, $ints*)},
		{"setSelectedIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(ChoiceCallback, setSelectedIndex, void, int32_t)},
		{"setSelectedIndexes", "([I)V", nullptr, $PUBLIC, $virtualMethod(ChoiceCallback, setSelectedIndexes, void, $ints*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.callback.ChoiceCallback",
		"java.lang.Object",
		"javax.security.auth.callback.Callback,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ChoiceCallback, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ChoiceCallback));
	});
	return class$;
}

$Class* ChoiceCallback::class$ = nullptr;

			} // callback
		} // auth
	} // security
} // javax