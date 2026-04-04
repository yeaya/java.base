#include <ByteSwap.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;

void ByteSwap::init$() {
}

void ByteSwap::main($StringArray* args) {
	if ($Short::reverseBytes((int16_t)0x0000aabb) != (int16_t)0x0000bbaa) {
		$throwNew($RuntimeException, "short"_s);
	}
	if ($Character::reverseBytes((char16_t)0x0000aabb) != (char16_t)0x0000bbaa) {
		$throwNew($RuntimeException, "char"_s);
	}
}

ByteSwap::ByteSwap() {
}

$Class* ByteSwap::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ByteSwap, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ByteSwap, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ByteSwap",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ByteSwap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ByteSwap);
	});
	return class$;
}

$Class* ByteSwap::class$ = nullptr;