#include <AllocateDirectInit.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;

void AllocateDirectInit::init$() {
}

void AllocateDirectInit::main($StringArray* args) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < 1024; ++i) {
		$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(1024));
		for ($nc(bb)->position(0);;) {
			int32_t var$0 = bb->position();
			if (!(var$0 < bb->limit())) {
				break;
			}
			{
				if ((bb->get() & 0xff) != 0) {
					$throwNew($RuntimeException, $$str({"uninitialized buffer, position = "_s, $$str(bb->position())}));
				}
			}
		}
	}
}

void AllocateDirectInit::printByteBuffer($ByteBuffer* bb) {
	$useLocalObjectStack();
	$nc($System::out)->print("byte ["_s);
	for ($nc(bb)->position(0);;) {
		int32_t var$0 = bb->position();
		if (!(var$0 < bb->limit())) {
			break;
		}
		{
			$System::out->print($$str({" "_s, $($Integer::toHexString(bb->get() & 0xff))}));
		}
	}
	$System::out->println(" ]"_s);
}

AllocateDirectInit::AllocateDirectInit() {
}

$Class* AllocateDirectInit::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AllocateDirectInit, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(AllocateDirectInit, main, void, $StringArray*)},
		{"printByteBuffer", "(Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(AllocateDirectInit, printByteBuffer, void, $ByteBuffer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"AllocateDirectInit",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AllocateDirectInit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AllocateDirectInit);
	});
	return class$;
}

$Class* AllocateDirectInit::class$ = nullptr;