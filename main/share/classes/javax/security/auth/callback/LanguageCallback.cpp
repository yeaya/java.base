#include <javax/security/auth/callback/LanguageCallback.h>
#include <java/util/Locale.h>
#include <javax/security/auth/callback/Callback.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Callback = ::javax::security::auth::callback::Callback;

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

int32_t LanguageCallback::hashCode() {
	 return this->$Callback::hashCode();
}

bool LanguageCallback::equals(Object$* obj) {
	 return this->$Callback::equals(obj);
}

$Object* LanguageCallback::clone() {
	 return this->$Callback::clone();
}

$String* LanguageCallback::toString() {
	 return this->$Callback::toString();
}

void LanguageCallback::finalize() {
	this->$Callback::finalize();
}

void LanguageCallback::init$() {
}

void LanguageCallback::setLocale($Locale* locale) {
	$set(this, locale, locale);
}

$Locale* LanguageCallback::getLocale() {
	return this->locale;
}

LanguageCallback::LanguageCallback() {
}

$Class* LanguageCallback::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LanguageCallback, serialVersionUID)},
		{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(LanguageCallback, locale)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(LanguageCallback, init$, void)},
		{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(LanguageCallback, getLocale, $Locale*)},
		{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(LanguageCallback, setLocale, void, $Locale*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.security.auth.callback.LanguageCallback",
		"java.lang.Object",
		"javax.security.auth.callback.Callback,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LanguageCallback, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LanguageCallback));
	});
	return class$;
}

$Class* LanguageCallback::class$ = nullptr;

			} // callback
		} // auth
	} // security
} // javax