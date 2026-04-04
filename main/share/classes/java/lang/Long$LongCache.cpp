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

$LongArray* Long$LongCache::cache = nullptr;
$LongArray* Long$LongCache::archivedCache = nullptr;

void Long$LongCache::init$() {
}

void Long$LongCache::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		int32_t size = -(-128) + 127 + 1;
		$CDS::initializeFromArchive(Long$LongCache::class$);
		if (Long$LongCache::archivedCache == nullptr || Long$LongCache::archivedCache->length != size) {
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
	$FieldInfo fieldInfos$$[] = {
		{"cache", "[Ljava/lang/Long;", nullptr, $STATIC | $FINAL, $staticField(Long$LongCache, cache)},
		{"archivedCache", "[Ljava/lang/Long;", nullptr, $STATIC, $staticField(Long$LongCache, archivedCache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Long$LongCache, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Long$LongCache", "java.lang.Long", "LongCache", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Long$LongCache",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.Long"
	};
	$loadClass(Long$LongCache, name, initialize, &classInfo$$, Long$LongCache::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Long$LongCache);
	});
	return class$;
}

$Class* Long$LongCache::class$ = nullptr;

	} // lang
} // java