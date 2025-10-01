#include <LocalizedMessage.h>

#include <LocalizedMessage$LocalizedException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $LocalizedMessage$LocalizedException = ::LocalizedMessage$LocalizedException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _LocalizedMessage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LocalizedMessage::*)()>(&LocalizedMessage::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LocalizedMessage::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _LocalizedMessage_InnerClassesInfo_[] = {
	{"LocalizedMessage$LocalizedException", "LocalizedMessage", "LocalizedException", $STATIC},
	{}
};

$ClassInfo _LocalizedMessage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LocalizedMessage",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LocalizedMessage_MethodInfo_,
	nullptr,
	nullptr,
	_LocalizedMessage_InnerClassesInfo_,
	nullptr,
	nullptr,
	"LocalizedMessage$LocalizedException"
};

$Object* allocate$LocalizedMessage($Class* clazz) {
	return $of($alloc(LocalizedMessage));
}

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
	$loadClass(LocalizedMessage, name, initialize, &_LocalizedMessage_ClassInfo_, allocate$LocalizedMessage);
	return class$;
}

$Class* LocalizedMessage::class$ = nullptr;