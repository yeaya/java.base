#include <java/lang/Integer$IntegerCache.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/CDS.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

#undef MAX_VALUE

using $IntegerArray = $Array<::java::lang::Integer>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $CDS = ::jdk::internal::misc::CDS;
using $VM = ::jdk::internal::misc::VM;

namespace java {
	namespace lang {

$FieldInfo _Integer$IntegerCache_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Integer$IntegerCache, $assertionsDisabled)},
	{"low", "I", nullptr, $STATIC | $FINAL, $constField(Integer$IntegerCache, low)},
	{"high", "I", nullptr, $STATIC | $FINAL, $staticField(Integer$IntegerCache, high)},
	{"cache", "[Ljava/lang/Integer;", nullptr, $STATIC | $FINAL, $staticField(Integer$IntegerCache, cache)},
	{"archivedCache", "[Ljava/lang/Integer;", nullptr, $STATIC, $staticField(Integer$IntegerCache, archivedCache)},
	{}
};

$MethodInfo _Integer$IntegerCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Integer$IntegerCache::*)()>(&Integer$IntegerCache::init$))},
	{}
};

$InnerClassInfo _Integer$IntegerCache_InnerClassesInfo_[] = {
	{"java.lang.Integer$IntegerCache", "java.lang.Integer", "IntegerCache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Integer$IntegerCache_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Integer$IntegerCache",
	"java.lang.Object",
	nullptr,
	_Integer$IntegerCache_FieldInfo_,
	_Integer$IntegerCache_MethodInfo_,
	nullptr,
	nullptr,
	_Integer$IntegerCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Integer"
};

$Object* allocate$Integer$IntegerCache($Class* clazz) {
	return $of($alloc(Integer$IntegerCache));
}

bool Integer$IntegerCache::$assertionsDisabled = false;
int32_t Integer$IntegerCache::high = 0;
$IntegerArray* Integer$IntegerCache::cache = nullptr;
$IntegerArray* Integer$IntegerCache::archivedCache = nullptr;

void Integer$IntegerCache::init$() {
}

void clinit$Integer$IntegerCache($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$load($Integer);
	Integer$IntegerCache::$assertionsDisabled = !$Integer::class$->desiredAssertionStatus();
	{
		int32_t h = 127;
		$var($String, integerCacheHighPropValue, $VM::getSavedProperty("java.lang.Integer.IntegerCache.high"_s));
		if (integerCacheHighPropValue != nullptr) {
			try {
				h = $Math::max($Integer::parseInt(integerCacheHighPropValue), 127);
				h = $Math::min(h, $Integer::MAX_VALUE - (-Integer$IntegerCache::low) - 1);
			} catch ($NumberFormatException&) {
				$catch();
			}
		}
		Integer$IntegerCache::high = h;
		$CDS::initializeFromArchive(Integer$IntegerCache::class$);
		int32_t size = (Integer$IntegerCache::high - Integer$IntegerCache::low) + 1;
		if (Integer$IntegerCache::archivedCache == nullptr || size > $nc(Integer$IntegerCache::archivedCache)->length) {
			$var($IntegerArray, c, $new($IntegerArray, size));
			int32_t j = Integer$IntegerCache::low;
			for (int32_t i = 0; i < c->length; ++i) {
				c->set(i, $$new($Integer, j++));
			}
			$assignStatic(Integer$IntegerCache::archivedCache, c);
		}
		$assignStatic(Integer$IntegerCache::cache, Integer$IntegerCache::archivedCache);
		if (!Integer$IntegerCache::$assertionsDisabled && !(Integer$IntegerCache::high >= 127)) {
			$throwNew($AssertionError);
		}
	}
}

Integer$IntegerCache::Integer$IntegerCache() {
}

$Class* Integer$IntegerCache::load$($String* name, bool initialize) {
	$loadClass(Integer$IntegerCache, name, initialize, &_Integer$IntegerCache_ClassInfo_, clinit$Integer$IntegerCache, allocate$Integer$IntegerCache);
	return class$;
}

$Class* Integer$IntegerCache::class$ = nullptr;

	} // lang
} // java