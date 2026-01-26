#include <Chew.h>

#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

$MethodInfo _Chew_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Chew, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Chew, main, void, $StringArray*)},
	{}
};

$ClassInfo _Chew_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Chew",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Chew_MethodInfo_
};

$Object* allocate$Chew($Class* clazz) {
	return $of($alloc(Chew));
}

void Chew::init$() {
}

void Chew::main($StringArray* args) {
	for (int32_t i = 0; i < 64; ++i) {
		$ByteBuffer::allocateDirect(1 << 20);
	}
}

Chew::Chew() {
}

$Class* Chew::load$($String* name, bool initialize) {
	$loadClass(Chew, name, initialize, &_Chew_ClassInfo_, allocate$Chew);
	return class$;
}

$Class* Chew::class$ = nullptr;