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

$FieldInfo _ChoiceCallback_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChoiceCallback, serialVersionUID)},
	{"prompt", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ChoiceCallback, prompt)},
	{"choices", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ChoiceCallback, choices)},
	{"defaultChoice", "I", nullptr, $PRIVATE | $FINAL, $field(ChoiceCallback, defaultChoice)},
	{"multipleSelectionsAllowed", "Z", nullptr, $PRIVATE | $FINAL, $field(ChoiceCallback, multipleSelectionsAllowed)},
	{"selections", "[I", nullptr, $PRIVATE, $field(ChoiceCallback, selections)},
	{}
};

$MethodInfo _ChoiceCallback_MethodInfo_[] = {
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

$ClassInfo _ChoiceCallback_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.callback.ChoiceCallback",
	"java.lang.Object",
	"javax.security.auth.callback.Callback,java.io.Serializable",
	_ChoiceCallback_FieldInfo_,
	_ChoiceCallback_MethodInfo_
};

$Object* allocate$ChoiceCallback($Class* clazz) {
	return $of($alloc(ChoiceCallback));
}

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
	if (prompt == nullptr || $nc(prompt)->isEmpty() || choices == nullptr || $nc(choices)->length == 0 || defaultChoice < 0 || defaultChoice >= $nc(choices)->length) {
		$throwNew($IllegalArgumentException);
	}
	for (int32_t i = 0; i < $nc(choices)->length; ++i) {
		if (choices->get(i) == nullptr || $nc(choices->get(i))->isEmpty()) {
			$throwNew($IllegalArgumentException);
		}
	}
	$set(this, prompt, prompt);
	$set(this, choices, $cast($StringArray, $nc(choices)->clone()));
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
	$nc(this->selections)->set(0, selection);
}

void ChoiceCallback::setSelectedIndexes($ints* selections) {
	if (!this->multipleSelectionsAllowed) {
		$throwNew($UnsupportedOperationException);
	}
	$set(this, selections, selections == nullptr ? ($ints*)nullptr : $cast($ints, $nc(selections)->clone()));
}

$ints* ChoiceCallback::getSelectedIndexes() {
	return this->selections == nullptr ? ($ints*)nullptr : $cast($ints, $nc(this->selections)->clone());
}

ChoiceCallback::ChoiceCallback() {
}

$Class* ChoiceCallback::load$($String* name, bool initialize) {
	$loadClass(ChoiceCallback, name, initialize, &_ChoiceCallback_ClassInfo_, allocate$ChoiceCallback);
	return class$;
}

$Class* ChoiceCallback::class$ = nullptr;

			} // callback
		} // auth
	} // security
} // javax