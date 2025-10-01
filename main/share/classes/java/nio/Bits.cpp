#include <java/nio/Bits.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Bits$1.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <jdk/internal/access/JavaLangRefAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jdk/internal/misc/VM$BufferPool.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

#undef MEMORY_LIMIT_SET
#undef MAX_SLEEPS
#undef BUFFER_POOL
#undef JNI_COPY_TO_ARRAY_THRESHOLD
#undef PAGE_SIZE
#undef MAX_MEMORY
#undef RESERVED_MEMORY
#undef COUNT
#undef UNSAFE
#undef UNALIGNED
#undef TOTAL_CAPACITY
#undef JNI_COPY_FROM_ARRAY_THRESHOLD

using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $Short = ::java::lang::Short;
using $Bits$1 = ::java::nio::Bits$1;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $JavaLangRefAccess = ::jdk::internal::access::JavaLangRefAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $VM = ::jdk::internal::misc::VM;
using $VM$BufferPool = ::jdk::internal::misc::VM$BufferPool;

namespace java {
	namespace nio {

$FieldInfo _Bits_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Bits, $assertionsDisabled)},
	{"UNSAFE", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bits, UNSAFE)},
	{"PAGE_SIZE", "I", nullptr, $PRIVATE | $STATIC, $staticField(Bits, PAGE_SIZE)},
	{"UNALIGNED", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Bits, UNALIGNED)},
	{"MAX_MEMORY", "J", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Bits, MAX_MEMORY)},
	{"RESERVED_MEMORY", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bits, RESERVED_MEMORY)},
	{"TOTAL_CAPACITY", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bits, TOTAL_CAPACITY)},
	{"COUNT", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Bits, COUNT)},
	{"MEMORY_LIMIT_SET", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Bits, MEMORY_LIMIT_SET)},
	{"MAX_SLEEPS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Bits, MAX_SLEEPS)},
	{"BUFFER_POOL", "Ljdk/internal/misc/VM$BufferPool;", nullptr, $STATIC | $FINAL, $staticField(Bits, BUFFER_POOL)},
	{"JNI_COPY_TO_ARRAY_THRESHOLD", "I", nullptr, $STATIC | $FINAL, $constField(Bits, JNI_COPY_TO_ARRAY_THRESHOLD)},
	{"JNI_COPY_FROM_ARRAY_THRESHOLD", "I", nullptr, $STATIC | $FINAL, $constField(Bits, JNI_COPY_FROM_ARRAY_THRESHOLD)},
	{}
};

$MethodInfo _Bits_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Bits::*)()>(&Bits::init$))},
	{"pageCount", "(J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&Bits::pageCount))},
	{"pageSize", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&Bits::pageSize))},
	{"reserveMemory", "(JJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int64_t)>(&Bits::reserveMemory))},
	{"swap", "(S)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(int16_t)>(&Bits::swap))},
	{"swap", "(C)C", nullptr, $STATIC, $method(static_cast<char16_t(*)(char16_t)>(&Bits::swap))},
	{"swap", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Bits::swap))},
	{"swap", "(J)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&Bits::swap))},
	{"tryReserveMemory", "(JJ)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int64_t,int64_t)>(&Bits::tryReserveMemory))},
	{"unaligned", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&Bits::unaligned))},
	{"unreserveMemory", "(JJ)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t,int64_t)>(&Bits::unreserveMemory))},
	{}
};

$InnerClassInfo _Bits_InnerClassesInfo_[] = {
	{"java.nio.Bits$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Bits_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.Bits",
	"java.lang.Object",
	nullptr,
	_Bits_FieldInfo_,
	_Bits_MethodInfo_,
	nullptr,
	nullptr,
	_Bits_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.Bits$1"
};

$Object* allocate$Bits($Class* clazz) {
	return $of($alloc(Bits));
}

bool Bits::$assertionsDisabled = false;
$Unsafe* Bits::UNSAFE = nullptr;
int32_t Bits::PAGE_SIZE = 0;
bool Bits::UNALIGNED = false;
$volatile(int64_t) Bits::MAX_MEMORY = 0;
$AtomicLong* Bits::RESERVED_MEMORY = nullptr;
$AtomicLong* Bits::TOTAL_CAPACITY = nullptr;
$AtomicLong* Bits::COUNT = nullptr;
$volatile(bool) Bits::MEMORY_LIMIT_SET = false;
$VM$BufferPool* Bits::BUFFER_POOL = nullptr;

void Bits::init$() {
}

int16_t Bits::swap(int16_t x) {
	$init(Bits);
	return $Short::reverseBytes(x);
}

char16_t Bits::swap(char16_t x) {
	$init(Bits);
	return $Character::reverseBytes(x);
}

int32_t Bits::swap(int32_t x) {
	$init(Bits);
	return $Integer::reverseBytes(x);
}

int64_t Bits::swap(int64_t x) {
	$init(Bits);
	return $Long::reverseBytes(x);
}

int32_t Bits::pageSize() {
	$init(Bits);
	if (Bits::PAGE_SIZE == -1) {
		Bits::PAGE_SIZE = $nc(Bits::UNSAFE)->pageSize();
	}
	return Bits::PAGE_SIZE;
}

int64_t Bits::pageCount(int64_t size) {
	$init(Bits);
	int64_t var$0 = (size + (int64_t)pageSize() - (int64_t)1);
	return $div(var$0, pageSize());
}

bool Bits::unaligned() {
	$init(Bits);
	return Bits::UNALIGNED;
}

void Bits::reserveMemory(int64_t size, int64_t cap) {
	$init(Bits);
	if (!Bits::MEMORY_LIMIT_SET && $VM::initLevel() >= 1) {
		Bits::MAX_MEMORY = $VM::maxDirectMemory();
		Bits::MEMORY_LIMIT_SET = true;
	}
	if (tryReserveMemory(size, cap)) {
		return;
	}
	$var($JavaLangRefAccess, jlra, $SharedSecrets::getJavaLangRefAccess());
	bool interrupted = false;
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			bool refprocActive = false;
			do {
				try {
					refprocActive = $nc(jlra)->waitForReferenceProcessing();
				} catch ($InterruptedException&) {
					$var($InterruptedException, e, $catch());
					interrupted = true;
					refprocActive = true;
				}
				if (tryReserveMemory(size, cap)) {
					return$1 = true;
					goto $finally;
				}
			} while (refprocActive);
			$System::gc();
			int64_t sleepTime = 1;
			int32_t sleeps = 0;
			while (true) {
				if (tryReserveMemory(size, cap)) {
					return$1 = true;
					goto $finally;
				}
				if (sleeps >= Bits::MAX_SLEEPS) {
					break;
				}
				try {
					if (!$nc(jlra)->waitForReferenceProcessing()) {
						$Thread::sleep(sleepTime);
						sleepTime <<= 1;
						++sleeps;
					}
				} catch ($InterruptedException&) {
					$var($InterruptedException, e, $catch());
					interrupted = true;
				}
			}
			$throwNew($OutOfMemoryError, $$str({"Cannot reserve "_s, $$str(size), " bytes of direct buffer memory (allocated: "_s, $$str($nc(Bits::RESERVED_MEMORY)->get()), ", limit: "_s, $$str(Bits::MAX_MEMORY), ")"_s}));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			if (interrupted) {
				$($Thread::currentThread())->interrupt();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

bool Bits::tryReserveMemory(int64_t size, int64_t cap) {
	$init(Bits);
	int64_t totalCap = 0;
	while (cap <= Bits::MAX_MEMORY - (totalCap = $nc(Bits::TOTAL_CAPACITY)->get())) {
		if ($nc(Bits::TOTAL_CAPACITY)->compareAndSet(totalCap, totalCap + cap)) {
			$nc(Bits::RESERVED_MEMORY)->addAndGet(size);
			$nc(Bits::COUNT)->incrementAndGet();
			return true;
		}
	}
	return false;
}

void Bits::unreserveMemory(int64_t size, int64_t cap) {
	$init(Bits);
	int64_t cnt = $nc(Bits::COUNT)->decrementAndGet();
	int64_t reservedMem = $nc(Bits::RESERVED_MEMORY)->addAndGet(-size);
	int64_t totalCap = $nc(Bits::TOTAL_CAPACITY)->addAndGet(-cap);
	if (!Bits::$assertionsDisabled && !(cnt >= 0 && reservedMem >= 0 && totalCap >= 0)) {
		$throwNew($AssertionError);
	}
}

void clinit$Bits($Class* class$) {
	Bits::$assertionsDisabled = !Bits::class$->desiredAssertionStatus();
	$assignStatic(Bits::UNSAFE, $Unsafe::getUnsafe());
	Bits::PAGE_SIZE = -1;
	Bits::UNALIGNED = $nc(Bits::UNSAFE)->unalignedAccess();
	Bits::MAX_MEMORY = $VM::maxDirectMemory();
	$assignStatic(Bits::RESERVED_MEMORY, $new($AtomicLong));
	$assignStatic(Bits::TOTAL_CAPACITY, $new($AtomicLong));
	$assignStatic(Bits::COUNT, $new($AtomicLong));
	$assignStatic(Bits::BUFFER_POOL, $new($Bits$1));
}

Bits::Bits() {
}

$Class* Bits::load$($String* name, bool initialize) {
	$loadClass(Bits, name, initialize, &_Bits_ClassInfo_, clinit$Bits, allocate$Bits);
	return class$;
}

$Class* Bits::class$ = nullptr;

	} // nio
} // java