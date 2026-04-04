#include <java/lang/Short$ShortCache.h>
#include <jdk/internal/misc/CDS.h>
#include <jcpp.h>

using $ShortArray = $Array<::java::lang::Short>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $CDS = ::jdk::internal::misc::CDS;

namespace java {
	namespace lang {

$ShortArray* Short$ShortCache::cache = nullptr;
$ShortArray* Short$ShortCache::archivedCache = nullptr;

void Short$ShortCache::init$() {
}

void Short$ShortCache::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		int32_t size = -(-128) + 127 + 1;
		$CDS::initializeFromArchive(Short$ShortCache::class$);
		if (Short$ShortCache::archivedCache == nullptr || Short$ShortCache::archivedCache->length != size) {
			$var($ShortArray, c, $new($ShortArray, size));
			int16_t value = -128;
			for (int32_t i = 0; i < size; ++i) {
				c->set(i, $$new($Short, value++));
			}
			$assignStatic(Short$ShortCache::archivedCache, c);
		}
		$assignStatic(Short$ShortCache::cache, Short$ShortCache::archivedCache);
	}
}

Short$ShortCache::Short$ShortCache() {
}

$Class* Short$ShortCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cache", "[Ljava/lang/Short;", nullptr, $STATIC | $FINAL, $staticField(Short$ShortCache, cache)},
		{"archivedCache", "[Ljava/lang/Short;", nullptr, $STATIC, $staticField(Short$ShortCache, archivedCache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Short$ShortCache, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Short$ShortCache", "java.lang.Short", "ShortCache", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Short$ShortCache",
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
		"java.lang.Short"
	};
	$loadClass(Short$ShortCache, name, initialize, &classInfo$$, Short$ShortCache::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Short$ShortCache);
	});
	return class$;
}

$Class* Short$ShortCache::class$ = nullptr;

	} // lang
} // java