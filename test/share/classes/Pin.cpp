#include <Pin.h>

#include <java/lang/OutOfMemoryError.h>
#include <java/lang/ref/SoftReference.h>
#include <java/util/Vector.h>
#include <jcpp.h>

#undef BLOCK_SIZE
#undef NUM_BLOCKS

using $SoftReferenceArray = $Array<::java::lang::ref::SoftReference>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Vector = ::java::util::Vector;

$FieldInfo _Pin_FieldInfo_[] = {
	{"NUM_BLOCKS", "I", nullptr, $STATIC | $FINAL, $constField(Pin, NUM_BLOCKS)},
	{"BLOCK_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(Pin, BLOCK_SIZE)},
	{}
};

$MethodInfo _Pin_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Pin::*)()>(&Pin::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Pin::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Pin_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Pin",
	"java.lang.Object",
	nullptr,
	_Pin_FieldInfo_,
	_Pin_MethodInfo_
};

$Object* allocate$Pin($Class* clazz) {
	return $of($alloc(Pin));
}

void Pin::init$() {
}

void Pin::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($SoftReferenceArray, blocks, $new($SoftReferenceArray, Pin::NUM_BLOCKS));
	$var($bytes, block, nullptr);
	$nc($System::err)->println($$str({"Filling array with "_s, $$str(Pin::NUM_BLOCKS), " SoftReferences to blocks of "_s, $$str(Pin::BLOCK_SIZE), " bytes."_s}));
	for (int32_t i = 0; i < Pin::NUM_BLOCKS; ++i) {
		$assign(block, $new($bytes, Pin::BLOCK_SIZE));
		$var($SoftReference, ref, $new($SoftReference, block));
		blocks->set(i, ref);
	}
	$assign(block, nullptr);
	$nc($System::err)->println("Allowing SoftReferences to be enqueued."_s);
	$System::gc();
	$Thread::sleep(1000);
	$nc($System::err)->println("Invoking get() on SoftReferences."_s);
	for (int32_t i = 0; i < Pin::NUM_BLOCKS; ++i) {
		$assign(block, $cast($bytes, $nc(blocks->get(i))->get()));
	}
	$assign(block, nullptr);
	$nc($System::err)->println("Forcing desperate garbage collection..."_s);
	$var($Vector, chain, $new($Vector));
	try {
		while (true) {
			$var($ints, hungry, $new($ints, 0x00010000));
			chain->addElement(hungry);
		}
	} catch ($OutOfMemoryError& e) {
		$assign(chain, nullptr);
		$nc($System::err)->println("Got OutOfMemoryError, as expected."_s);
	}
	int32_t emptyCount = 0;
	int32_t fullCount = 0;
	$nc($System::err)->print("Examining contents of array:"_s);
	for (int32_t i = 0; i < Pin::NUM_BLOCKS; ++i) {
		$assign(block, $cast($bytes, $nc(blocks->get(i))->get()));
		if (block == nullptr) {
			++emptyCount;
		} else {
			++fullCount;
		}
	}
	$nc($System::err)->println($$str({" "_s, $$str(emptyCount), " empty, "_s, $$str(fullCount), " full."_s}));
	if (emptyCount == 0) {
		$throwNew($Exception, "No SoftReference instances were cleared"_s);
	}
}

Pin::Pin() {
}

$Class* Pin::load$($String* name, bool initialize) {
	$loadClass(Pin, name, initialize, &_Pin_ClassInfo_, allocate$Pin);
	return class$;
}

$Class* Pin::class$ = nullptr;