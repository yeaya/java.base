#include <javax/security/auth/callback/ConfirmationCallback.h>

#include <javax/security/auth/callback/Callback.h>
#include <jcpp.h>

#undef CANCEL
#undef ERROR
#undef INFORMATION
#undef NO
#undef OK
#undef OK_CANCEL_OPTION
#undef UNSPECIFIED_OPTION
#undef WARNING
#undef YES
#undef YES_NO_CANCEL_OPTION
#undef YES_NO_OPTION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callback = ::javax::security::auth::callback::Callback;

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

$FieldInfo _ConfirmationCallback_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConfirmationCallback, serialVersionUID)},
	{"UNSPECIFIED_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ConfirmationCallback, UNSPECIFIED_OPTION)},
	{"YES_NO_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ConfirmationCallback, YES_NO_OPTION)},
	{"YES_NO_CANCEL_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ConfirmationCallback, YES_NO_CANCEL_OPTION)},
	{"OK_CANCEL_OPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ConfirmationCallback, OK_CANCEL_OPTION)},
	{"YES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ConfirmationCallback, YES)},
	{"NO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ConfirmationCallback, NO)},
	{"CANCEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ConfirmationCallback, CANCEL)},
	{"OK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ConfirmationCallback, OK)},
	{"INFORMATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ConfirmationCallback, INFORMATION)},
	{"WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ConfirmationCallback, WARNING)},
	{"ERROR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ConfirmationCallback, ERROR)},
	{"prompt", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ConfirmationCallback, prompt)},
	{"messageType", "I", nullptr, $PRIVATE | $FINAL, $field(ConfirmationCallback, messageType)},
	{"optionType", "I", nullptr, $PRIVATE | $FINAL, $field(ConfirmationCallback, optionType)},
	{"defaultOption", "I", nullptr, $PRIVATE | $FINAL, $field(ConfirmationCallback, defaultOption)},
	{"options", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ConfirmationCallback, options)},
	{"selection", "I", nullptr, $PRIVATE, $field(ConfirmationCallback, selection)},
	{}
};

$MethodInfo _ConfirmationCallback_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(ConfirmationCallback, init$, void, int32_t, int32_t, int32_t)},
	{"<init>", "(I[Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(ConfirmationCallback, init$, void, int32_t, $StringArray*, int32_t)},
	{"<init>", "(Ljava/lang/String;III)V", nullptr, $PUBLIC, $method(ConfirmationCallback, init$, void, $String*, int32_t, int32_t, int32_t)},
	{"<init>", "(Ljava/lang/String;I[Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(ConfirmationCallback, init$, void, $String*, int32_t, $StringArray*, int32_t)},
	{"getDefaultOption", "()I", nullptr, $PUBLIC, $virtualMethod(ConfirmationCallback, getDefaultOption, int32_t)},
	{"getMessageType", "()I", nullptr, $PUBLIC, $virtualMethod(ConfirmationCallback, getMessageType, int32_t)},
	{"getOptionType", "()I", nullptr, $PUBLIC, $virtualMethod(ConfirmationCallback, getOptionType, int32_t)},
	{"getOptions", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConfirmationCallback, getOptions, $StringArray*)},
	{"getPrompt", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ConfirmationCallback, getPrompt, $String*)},
	{"getSelectedIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ConfirmationCallback, getSelectedIndex, int32_t)},
	{"setSelectedIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(ConfirmationCallback, setSelectedIndex, void, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ConfirmationCallback_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.callback.ConfirmationCallback",
	"java.lang.Object",
	"javax.security.auth.callback.Callback,java.io.Serializable",
	_ConfirmationCallback_FieldInfo_,
	_ConfirmationCallback_MethodInfo_
};

$Object* allocate$ConfirmationCallback($Class* clazz) {
	return $of($alloc(ConfirmationCallback));
}

int32_t ConfirmationCallback::hashCode() {
	 return this->$Callback::hashCode();
}

bool ConfirmationCallback::equals(Object$* obj) {
	 return this->$Callback::equals(obj);
}

$Object* ConfirmationCallback::clone() {
	 return this->$Callback::clone();
}

$String* ConfirmationCallback::toString() {
	 return this->$Callback::toString();
}

void ConfirmationCallback::finalize() {
	this->$Callback::finalize();
}

void ConfirmationCallback::init$(int32_t messageType, int32_t optionType, int32_t defaultOption) {
	if (messageType < ConfirmationCallback::INFORMATION || messageType > ConfirmationCallback::ERROR || optionType < ConfirmationCallback::YES_NO_OPTION || optionType > ConfirmationCallback::OK_CANCEL_OPTION) {
		$throwNew($IllegalArgumentException);
	}
	switch (optionType) {
	case ConfirmationCallback::YES_NO_OPTION:
		{
			if (defaultOption != ConfirmationCallback::YES && defaultOption != ConfirmationCallback::NO) {
				$throwNew($IllegalArgumentException);
			}
			break;
		}
	case ConfirmationCallback::YES_NO_CANCEL_OPTION:
		{
			if (defaultOption != ConfirmationCallback::YES && defaultOption != ConfirmationCallback::NO && defaultOption != ConfirmationCallback::CANCEL) {
				$throwNew($IllegalArgumentException);
			}
			break;
		}
	case ConfirmationCallback::OK_CANCEL_OPTION:
		{
			if (defaultOption != ConfirmationCallback::OK && defaultOption != ConfirmationCallback::CANCEL) {
				$throwNew($IllegalArgumentException);
			}
			break;
		}
	}
	$set(this, prompt, nullptr);
	this->messageType = messageType;
	this->optionType = optionType;
	$set(this, options, nullptr);
	this->defaultOption = defaultOption;
}

void ConfirmationCallback::init$(int32_t messageType, $StringArray* options, int32_t defaultOption) {
	if (messageType < ConfirmationCallback::INFORMATION || messageType > ConfirmationCallback::ERROR || options == nullptr || $nc(options)->length == 0 || defaultOption < 0 || defaultOption >= $nc(options)->length) {
		$throwNew($IllegalArgumentException);
	}
	for (int32_t i = 0; i < $nc(options)->length; ++i) {
		if (options->get(i) == nullptr || $nc(options->get(i))->isEmpty()) {
			$throwNew($IllegalArgumentException);
		}
	}
	$set(this, prompt, nullptr);
	this->messageType = messageType;
	this->optionType = ConfirmationCallback::UNSPECIFIED_OPTION;
	$set(this, options, $cast($StringArray, $nc(options)->clone()));
	this->defaultOption = defaultOption;
}

void ConfirmationCallback::init$($String* prompt, int32_t messageType, int32_t optionType, int32_t defaultOption) {
	if (prompt == nullptr || $nc(prompt)->isEmpty() || messageType < ConfirmationCallback::INFORMATION || messageType > ConfirmationCallback::ERROR || optionType < ConfirmationCallback::YES_NO_OPTION || optionType > ConfirmationCallback::OK_CANCEL_OPTION) {
		$throwNew($IllegalArgumentException);
	}
	switch (optionType) {
	case ConfirmationCallback::YES_NO_OPTION:
		{
			if (defaultOption != ConfirmationCallback::YES && defaultOption != ConfirmationCallback::NO) {
				$throwNew($IllegalArgumentException);
			}
			break;
		}
	case ConfirmationCallback::YES_NO_CANCEL_OPTION:
		{
			if (defaultOption != ConfirmationCallback::YES && defaultOption != ConfirmationCallback::NO && defaultOption != ConfirmationCallback::CANCEL) {
				$throwNew($IllegalArgumentException);
			}
			break;
		}
	case ConfirmationCallback::OK_CANCEL_OPTION:
		{
			if (defaultOption != ConfirmationCallback::OK && defaultOption != ConfirmationCallback::CANCEL) {
				$throwNew($IllegalArgumentException);
			}
			break;
		}
	}
	$set(this, prompt, prompt);
	this->messageType = messageType;
	this->optionType = optionType;
	$set(this, options, nullptr);
	this->defaultOption = defaultOption;
}

void ConfirmationCallback::init$($String* prompt, int32_t messageType, $StringArray* options, int32_t defaultOption) {
	if (prompt == nullptr || $nc(prompt)->isEmpty() || messageType < ConfirmationCallback::INFORMATION || messageType > ConfirmationCallback::ERROR || options == nullptr || $nc(options)->length == 0 || defaultOption < 0 || defaultOption >= $nc(options)->length) {
		$throwNew($IllegalArgumentException);
	}
	for (int32_t i = 0; i < $nc(options)->length; ++i) {
		if (options->get(i) == nullptr || $nc(options->get(i))->isEmpty()) {
			$throwNew($IllegalArgumentException);
		}
	}
	$set(this, prompt, prompt);
	this->messageType = messageType;
	this->optionType = ConfirmationCallback::UNSPECIFIED_OPTION;
	$set(this, options, $cast($StringArray, $nc(options)->clone()));
	this->defaultOption = defaultOption;
}

$String* ConfirmationCallback::getPrompt() {
	return this->prompt;
}

int32_t ConfirmationCallback::getMessageType() {
	return this->messageType;
}

int32_t ConfirmationCallback::getOptionType() {
	return this->optionType;
}

$StringArray* ConfirmationCallback::getOptions() {
	return this->options == nullptr ? ($StringArray*)nullptr : $cast($StringArray, $nc(this->options)->clone());
}

int32_t ConfirmationCallback::getDefaultOption() {
	return this->defaultOption;
}

void ConfirmationCallback::setSelectedIndex(int32_t selection) {
	this->selection = selection;
}

int32_t ConfirmationCallback::getSelectedIndex() {
	return this->selection;
}

ConfirmationCallback::ConfirmationCallback() {
}

$Class* ConfirmationCallback::load$($String* name, bool initialize) {
	$loadClass(ConfirmationCallback, name, initialize, &_ConfirmationCallback_ClassInfo_, allocate$ConfirmationCallback);
	return class$;
}

$Class* ConfirmationCallback::class$ = nullptr;

			} // callback
		} // auth
	} // security
} // javax