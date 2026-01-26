#include <java/util/UUID$Holder.h>

#include <java/security/SecureRandom.h>
#include <java/util/UUID.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecureRandom = ::java::security::SecureRandom;

namespace java {
	namespace util {

$FieldInfo _UUID$Holder_FieldInfo_[] = {
	{"numberGenerator", "Ljava/security/SecureRandom;", nullptr, $STATIC | $FINAL, $staticField(UUID$Holder, numberGenerator)},
	{}
};

$MethodInfo _UUID$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(UUID$Holder, init$, void)},
	{}
};

$InnerClassInfo _UUID$Holder_InnerClassesInfo_[] = {
	{"java.util.UUID$Holder", "java.util.UUID", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _UUID$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.UUID$Holder",
	"java.lang.Object",
	nullptr,
	_UUID$Holder_FieldInfo_,
	_UUID$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_UUID$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.UUID"
};

$Object* allocate$UUID$Holder($Class* clazz) {
	return $of($alloc(UUID$Holder));
}

$SecureRandom* UUID$Holder::numberGenerator = nullptr;

void UUID$Holder::init$() {
}

void clinit$UUID$Holder($Class* class$) {
	$assignStatic(UUID$Holder::numberGenerator, $new($SecureRandom));
}

UUID$Holder::UUID$Holder() {
}

$Class* UUID$Holder::load$($String* name, bool initialize) {
	$loadClass(UUID$Holder, name, initialize, &_UUID$Holder_ClassInfo_, clinit$UUID$Holder, allocate$UUID$Holder);
	return class$;
}

$Class* UUID$Holder::class$ = nullptr;

	} // util
} // java