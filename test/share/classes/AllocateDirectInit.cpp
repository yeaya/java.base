#include <AllocateDirectInit.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;

$MethodInfo _AllocateDirectInit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AllocateDirectInit::*)()>(&AllocateDirectInit::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AllocateDirectInit::main))},
	{"printByteBuffer", "(Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ByteBuffer*)>(&AllocateDirectInit::printByteBuffer))},
	{}
};

$ClassInfo _AllocateDirectInit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AllocateDirectInit",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AllocateDirectInit_MethodInfo_
};

$Object* allocate$AllocateDirectInit($Class* clazz) {
	return $of($alloc(AllocateDirectInit));
}

void AllocateDirectInit::init$() {
}

void AllocateDirectInit::main($StringArray* args) {
	for (int32_t i = 0; i < 1024; ++i) {
		$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(1024));
		{
			$nc(bb)->position(0);
			for (;;) {
				int32_t var$0 = bb->position();
				if (!(var$0 < bb->limit())) {
					break;
				}
				{
					if (((int32_t)(bb->get() & (uint32_t)255)) != 0) {
						$throwNew($RuntimeException, $$str({"uninitialized buffer, position = "_s, $$str(bb->position())}));
					}
				}
			}
		}
	}
}

void AllocateDirectInit::printByteBuffer($ByteBuffer* bb) {
	$init($System);
	$nc($System::out)->print("byte ["_s);
	{
		$nc(bb)->position(0);
		for (;;) {
			int32_t var$0 = bb->position();
			if (!(var$0 < bb->limit())) {
				break;
			}
			{
				$nc($System::out)->print($$str({" "_s, $($Integer::toHexString((int32_t)(bb->get() & (uint32_t)255)))}));
			}
		}
	}
	$nc($System::out)->println(" ]"_s);
}

AllocateDirectInit::AllocateDirectInit() {
}

$Class* AllocateDirectInit::load$($String* name, bool initialize) {
	$loadClass(AllocateDirectInit, name, initialize, &_AllocateDirectInit_ClassInfo_, allocate$AllocateDirectInit);
	return class$;
}

$Class* AllocateDirectInit::class$ = nullptr;