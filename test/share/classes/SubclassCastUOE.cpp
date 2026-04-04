#include <SubclassCastUOE.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/MappedByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;

void SubclassCastUOE::init$() {
}

void SubclassCastUOE::main($StringArray* args) {
	$var($ByteBuffer, buf, $ByteBuffer::allocateDirect(37));
	if (!($instanceOf($MappedByteBuffer, buf))) {
		$throwNew($RuntimeException, "Direct buffer not a MappedByteBuffer"_s);
	}
	if (!$equals($nc($cast($MappedByteBuffer, buf))->load(), buf)) {
		$throwNew($RuntimeException, "load() did not return same buffer"_s);
	}
	if (!$cast($MappedByteBuffer, buf)->isLoaded()) {
		$throwNew($RuntimeException, "isLoaded() returned false"_s);
	}
	if (!$equals($cast($MappedByteBuffer, buf)->force(), buf)) {
		$throwNew($RuntimeException, "force() did not return same buffer"_s);
	}
}

SubclassCastUOE::SubclassCastUOE() {
}

$Class* SubclassCastUOE::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SubclassCastUOE, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SubclassCastUOE, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SubclassCastUOE",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SubclassCastUOE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SubclassCastUOE);
	});
	return class$;
}

$Class* SubclassCastUOE::class$ = nullptr;