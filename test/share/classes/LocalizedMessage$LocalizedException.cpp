#include <LocalizedMessage$LocalizedException.h>
#include <LocalizedMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LocalizedMessage$LocalizedException::init$() {
	$Throwable::init$();
	this->localizedMessageCalled = false;
	this->localizedMessageCalled = false;
}

$String* LocalizedMessage$LocalizedException::getLocalizedMessage() {
	this->localizedMessageCalled = true;
	return $new($String, "FOOBAR"_s);
}

LocalizedMessage$LocalizedException::LocalizedMessage$LocalizedException() {
}

LocalizedMessage$LocalizedException::LocalizedMessage$LocalizedException(const LocalizedMessage$LocalizedException& e) : $Throwable(e) {
}

void LocalizedMessage$LocalizedException::throw$() {
	throw *this;
}

$Class* LocalizedMessage$LocalizedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"localizedMessageCalled", "Z", nullptr, 0, $field(LocalizedMessage$LocalizedException, localizedMessageCalled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LocalizedMessage$LocalizedException, init$, void)},
		{"getLocalizedMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocalizedMessage$LocalizedException, getLocalizedMessage, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LocalizedMessage$LocalizedException", "LocalizedMessage", "LocalizedException", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LocalizedMessage$LocalizedException",
		"java.lang.Throwable",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"LocalizedMessage"
	};
	$loadClass(LocalizedMessage$LocalizedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocalizedMessage$LocalizedException);
	});
	return class$;
}

$Class* LocalizedMessage$LocalizedException::class$ = nullptr;