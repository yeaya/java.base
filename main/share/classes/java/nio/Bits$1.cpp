#include <java/nio/Bits$1.h>

#include <java/nio/Bits.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <jcpp.h>

#undef COUNT
#undef RESERVED_MEMORY
#undef TOTAL_CAPACITY

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Bits = ::java::nio::Bits;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;

namespace java {
	namespace nio {

$MethodInfo _Bits$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Bits$1, init$, void)},
	{"getCount", "()J", nullptr, $PUBLIC, $virtualMethod(Bits$1, getCount, int64_t)},
	{"getMemoryUsed", "()J", nullptr, $PUBLIC, $virtualMethod(Bits$1, getMemoryUsed, int64_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Bits$1, getName, $String*)},
	{"getTotalCapacity", "()J", nullptr, $PUBLIC, $virtualMethod(Bits$1, getTotalCapacity, int64_t)},
	{}
};

$EnclosingMethodInfo _Bits$1_EnclosingMethodInfo_ = {
	"java.nio.Bits",
	nullptr,
	nullptr
};

$InnerClassInfo _Bits$1_InnerClassesInfo_[] = {
	{"java.nio.Bits$1", nullptr, nullptr, 0},
	{"jdk.internal.misc.VM$BufferPool", "jdk.internal.misc.VM", "BufferPool", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Bits$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.Bits$1",
	"java.lang.Object",
	"jdk.internal.misc.VM$BufferPool",
	nullptr,
	_Bits$1_MethodInfo_,
	nullptr,
	&_Bits$1_EnclosingMethodInfo_,
	_Bits$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.Bits"
};

$Object* allocate$Bits$1($Class* clazz) {
	return $of($alloc(Bits$1));
}

void Bits$1::init$() {
}

$String* Bits$1::getName() {
	return "direct"_s;
}

int64_t Bits$1::getCount() {
	$init($Bits);
	return $nc($Bits::COUNT)->get();
}

int64_t Bits$1::getTotalCapacity() {
	$init($Bits);
	return $nc($Bits::TOTAL_CAPACITY)->get();
}

int64_t Bits$1::getMemoryUsed() {
	$init($Bits);
	return $nc($Bits::RESERVED_MEMORY)->get();
}

Bits$1::Bits$1() {
}

$Class* Bits$1::load$($String* name, bool initialize) {
	$loadClass(Bits$1, name, initialize, &_Bits$1_ClassInfo_, allocate$Bits$1);
	return class$;
}

$Class* Bits$1::class$ = nullptr;

	} // nio
} // java