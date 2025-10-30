#include <LocalizedMessage$LocalizedException.h>

#include <LocalizedMessage.h>
#include <jcpp.h>

using $LocalizedMessage = ::LocalizedMessage;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _LocalizedMessage$LocalizedException_FieldInfo_[] = {
	{"localizedMessageCalled", "Z", nullptr, 0, $field(LocalizedMessage$LocalizedException, localizedMessageCalled)},
	{}
};

$MethodInfo _LocalizedMessage$LocalizedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LocalizedMessage$LocalizedException::*)()>(&LocalizedMessage$LocalizedException::init$))},
	{"getLocalizedMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LocalizedMessage$LocalizedException_InnerClassesInfo_[] = {
	{"LocalizedMessage$LocalizedException", "LocalizedMessage", "LocalizedException", $STATIC},
	{}
};

$ClassInfo _LocalizedMessage$LocalizedException_ClassInfo_ = {
	$ACC_SUPER,
	"LocalizedMessage$LocalizedException",
	"java.lang.Throwable",
	nullptr,
	_LocalizedMessage$LocalizedException_FieldInfo_,
	_LocalizedMessage$LocalizedException_MethodInfo_,
	nullptr,
	nullptr,
	_LocalizedMessage$LocalizedException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"LocalizedMessage"
};

$Object* allocate$LocalizedMessage$LocalizedException($Class* clazz) {
	return $of($alloc(LocalizedMessage$LocalizedException));
}

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
	$loadClass(LocalizedMessage$LocalizedException, name, initialize, &_LocalizedMessage$LocalizedException_ClassInfo_, allocate$LocalizedMessage$LocalizedException);
	return class$;
}

$Class* LocalizedMessage$LocalizedException::class$ = nullptr;