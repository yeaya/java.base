#include <jdk/internal/misc/UnsafeConstants.h>

#include <jcpp.h>

#include "Platform.h"
using ::java::lang::Platform;

#undef ADDRESS_SIZE0
#undef BIG_ENDIAN
#undef DATA_CACHE_LINE_FLUSH_SIZE
#undef PAGE_SIZE
#undef UNALIGNED_ACCESS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace misc {

$FieldInfo _UnsafeConstants_FieldInfo_[] = {
	{"ADDRESS_SIZE0", "I", nullptr, $STATIC | $FINAL, $staticField(UnsafeConstants, ADDRESS_SIZE0)},
	{"PAGE_SIZE", "I", nullptr, $STATIC | $FINAL, $staticField(UnsafeConstants, PAGE_SIZE)},
	{"BIG_ENDIAN", "Z", nullptr, $STATIC | $FINAL, $staticField(UnsafeConstants, BIG_ENDIAN)},
	{"UNALIGNED_ACCESS", "Z", nullptr, $STATIC | $FINAL, $staticField(UnsafeConstants, UNALIGNED_ACCESS)},
	{"DATA_CACHE_LINE_FLUSH_SIZE", "I", nullptr, $STATIC | $FINAL, $staticField(UnsafeConstants, DATA_CACHE_LINE_FLUSH_SIZE)},
	{}
};

$MethodInfo _UnsafeConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(UnsafeConstants, init$, void)},
	{}
};

$ClassInfo _UnsafeConstants_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.misc.UnsafeConstants",
	"java.lang.Object",
	nullptr,
	_UnsafeConstants_FieldInfo_,
	_UnsafeConstants_MethodInfo_
};

$Object* allocate$UnsafeConstants($Class* clazz) {
	return $of($alloc(UnsafeConstants));
}

int32_t UnsafeConstants::ADDRESS_SIZE0 = 0;
int32_t UnsafeConstants::PAGE_SIZE = 0;
bool UnsafeConstants::BIG_ENDIAN = false;
bool UnsafeConstants::UNALIGNED_ACCESS = false;
int32_t UnsafeConstants::DATA_CACHE_LINE_FLUSH_SIZE = 0;

void UnsafeConstants::init$() {
}

void clinit$UnsafeConstants($Class* class$) {
	UnsafeConstants::ADDRESS_SIZE0 = Platform::getAddressSize();
	UnsafeConstants::PAGE_SIZE = Platform::getPageSize();
	UnsafeConstants::BIG_ENDIAN = Platform::isBigEndian();
	UnsafeConstants::UNALIGNED_ACCESS = Platform::isUnalignedAccess();
	UnsafeConstants::DATA_CACHE_LINE_FLUSH_SIZE = Platform::getDataCacheLineFlushSize();
}

UnsafeConstants::UnsafeConstants() {
}

$Class* UnsafeConstants::load$($String* name, bool initialize) {
	$loadClass(UnsafeConstants, name, initialize, &_UnsafeConstants_ClassInfo_, clinit$UnsafeConstants, allocate$UnsafeConstants);
	return class$;
}

$Class* UnsafeConstants::class$ = nullptr;

		} // misc
	} // internal
} // jdk