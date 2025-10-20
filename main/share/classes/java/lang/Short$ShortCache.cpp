#include <java/lang/Short$ShortCache.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _Short$ShortCache_FieldInfo_[] = {
	{"cache", "[Ljava/lang/Short;", nullptr, $STATIC | $FINAL, $staticField(Short$ShortCache, cache)},
	{"archivedCache", "[Ljava/lang/Short;", nullptr, $STATIC, $staticField(Short$ShortCache, archivedCache)},
	{}
};

$MethodInfo _Short$ShortCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Short$ShortCache::*)()>(&Short$ShortCache::init$))},
	{}
};

$InnerClassInfo _Short$ShortCache_InnerClassesInfo_[] = {
	{"java.lang.Short$ShortCache", "java.lang.Short", "ShortCache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Short$ShortCache_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Short$ShortCache",
	"java.lang.Object",
	nullptr,
	_Short$ShortCache_FieldInfo_,
	_Short$ShortCache_MethodInfo_,
	nullptr,
	nullptr,
	_Short$ShortCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Short"
};

$Object* allocate$Short$ShortCache($Class* clazz) {
	return $of($alloc(Short$ShortCache));
}

$ShortArray* Short$ShortCache::cache = nullptr;
$ShortArray* Short$ShortCache::archivedCache = nullptr;

void Short$ShortCache::init$() {
}

void clinit$Short$ShortCache($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		int32_t size = -(-128) + 127 + 1;
		$CDS::initializeFromArchive(Short$ShortCache::class$);
		if (Short$ShortCache::archivedCache == nullptr || $nc(Short$ShortCache::archivedCache)->length != size) {
			$var($ShortArray, c, $new($ShortArray, size));
			int16_t value = (int16_t)-128;
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
	$loadClass(Short$ShortCache, name, initialize, &_Short$ShortCache_ClassInfo_, clinit$Short$ShortCache, allocate$Short$ShortCache);
	return class$;
}

$Class* Short$ShortCache::class$ = nullptr;

	} // lang
} // java