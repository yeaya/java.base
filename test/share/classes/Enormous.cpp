#include <Enormous.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Base64.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Base64 = ::java::util::Base64;

void Enormous::init$() {
}

void Enormous::main($StringArray* args) {
	$useLocalObjectStack();
	$$new($String, $$new($chars, 0x01000001))->getBytes("ASCII"_s);
	$var($bytes, bytes, $new($bytes, 0x01000001));
	$new($String, bytes, "ASCII"_s);
	$$nc($Base64::getEncoder())->encodeToString(bytes);
}

Enormous::Enormous() {
}

$Class* Enormous::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Enormous, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Enormous, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Enormous",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Enormous, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Enormous);
	});
	return class$;
}

$Class* Enormous::class$ = nullptr;