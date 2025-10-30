#include <java/lang/Long$LongCache.h>

#include <jdk/internal/misc/CDS.h>
#include <jcpp.h>

using $LongArray = $Array<::java::lang::Long>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $CDS = ::jdk::internal::misc::CDS;

namespace java {
	namespace lang {

$FieldInfo _Long$LongCache_FieldInfo_[] = {
	{"cache", "[Ljava/lang/Long;", nullptr, $STATIC | $FINAL, $staticField(Long$LongCache, cache)},
	{"archivedCache", "[Ljava/lang/Long;", nullptr, $STATIC, $staticField(Long$LongCache, archivedCache)},
	{}
};

$MethodInfo _Long$LongCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Long$LongCache::*)()>(&Long$LongCache::init$))},
	{}
};

$InnerClassInfo _Long$LongCache_InnerClassesInfo_[] = {
	{"java.lang.Long$LongCache", "java.lang.Long", "LongCache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Long$LongCache_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Long$LongCache",
	"java.lang.Object",
	nullptr,
	_Long$LongCache_FieldInfo_,
	_Long$LongCache_MethodInfo_,
	nullptr,
	nullptr,
	_Long$LongCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Long"
};

$Object* allocate$Long$LongCache($Class* clazz) {
	return $of($alloc(Long$LongCache));
}

$LongArray* Long$LongCache::cache = nullptr;
$LongArray* Long$LongCache::archivedCache = nullptr;

void Long$LongCache::init$() {
}

void clinit$Long$LongCache($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		int32_t size = -(-128) + 127 + 1;
		$CDS::initializeFromArchive(Long$LongCache::class$);
		if (Long$LongCache::archivedCache == nullptr || $nc(Long$LongCache::archivedCache)->length != size) {
			$var($LongArray, c, $new($LongArray, size));
			int64_t value = -128;
			for (int32_t i = 0; i < size; ++i) {
				c->set(i, $$new($Long, value++));
			}
			$assignStatic(Long$LongCache::archivedCache, c);
		}
		$assignStatic(Long$LongCache::cache, Long$LongCache::archivedCache);
	}
}

Long$LongCache::Long$LongCache() {
}

$Class* Long$LongCache::load$($String* name, bool initialize) {
	$loadClass(Long$LongCache, name, initialize, &_Long$LongCache_ClassInfo_, clinit$Long$LongCache, allocate$Long$LongCache);
	return class$;
}

$Class* Long$LongCache::class$ = nullptr;

	} // lang
} // java