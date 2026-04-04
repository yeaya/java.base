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

$SecureRandom* UUID$Holder::numberGenerator = nullptr;

void UUID$Holder::init$() {
}

void UUID$Holder::clinit$($Class* clazz) {
	$assignStatic(UUID$Holder::numberGenerator, $new($SecureRandom));
}

UUID$Holder::UUID$Holder() {
}

$Class* UUID$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"numberGenerator", "Ljava/security/SecureRandom;", nullptr, $STATIC | $FINAL, $staticField(UUID$Holder, numberGenerator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(UUID$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.UUID$Holder", "java.util.UUID", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.UUID$Holder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.UUID"
	};
	$loadClass(UUID$Holder, name, initialize, &classInfo$$, UUID$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UUID$Holder);
	});
	return class$;
}

$Class* UUID$Holder::class$ = nullptr;

	} // util
} // java