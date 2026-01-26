#include <ByteSwap.h>

#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;

$MethodInfo _ByteSwap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ByteSwap, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ByteSwap, main, void, $StringArray*)},
	{}
};

$ClassInfo _ByteSwap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ByteSwap",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ByteSwap_MethodInfo_
};

$Object* allocate$ByteSwap($Class* clazz) {
	return $of($alloc(ByteSwap));
}

void ByteSwap::init$() {
}

void ByteSwap::main($StringArray* args) {
	if ($Short::reverseBytes((int16_t)0x0000AABB) != (int16_t)0x0000BBAA) {
		$throwNew($RuntimeException, "short"_s);
	}
	if ($Character::reverseBytes((char16_t)0x0000AABB) != (char16_t)0x0000BBAA) {
		$throwNew($RuntimeException, "char"_s);
	}
}

ByteSwap::ByteSwap() {
}

$Class* ByteSwap::load$($String* name, bool initialize) {
	$loadClass(ByteSwap, name, initialize, &_ByteSwap_ClassInfo_, allocate$ByteSwap);
	return class$;
}

$Class* ByteSwap::class$ = nullptr;