#include <LocalizedMessage.h>
#include <LocalizedMessage$LocalizedException.h>
#include <jcpp.h>

using $LocalizedMessage$LocalizedException = ::LocalizedMessage$LocalizedException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void LocalizedMessage::init$() {
}

void LocalizedMessage::main($StringArray* args) {
	$var($LocalizedMessage$LocalizedException, e, $new($LocalizedMessage$LocalizedException));
	e->toString();
	if (!e->localizedMessageCalled) {
		$throwNew($Exception, "Throwable.toString() must call getLocalizedMessage()"_s);
	}
}

LocalizedMessage::LocalizedMessage() {
}

$Class* LocalizedMessage::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocalizedMessage, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LocalizedMessage, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"LocalizedMessage$LocalizedException", "LocalizedMessage", "LocalizedException", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"LocalizedMessage",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"LocalizedMessage$LocalizedException"
	};
	$loadClass(LocalizedMessage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocalizedMessage);
	});
	return class$;
}

$Class* LocalizedMessage::class$ = nullptr;