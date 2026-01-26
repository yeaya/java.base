#include <java/lang/Byte$ByteCache.h>

#include <jdk/internal/misc/CDS.h>
#include <jcpp.h>

using $ByteArray = $Array<::java::lang::Byte>;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CDS = ::jdk::internal::misc::CDS;

namespace java {
	namespace lang {

$FieldInfo _Byte$ByteCache_FieldInfo_[] = {
	{"cache", "[Ljava/lang/Byte;", nullptr, $STATIC | $FINAL, $staticField(Byte$ByteCache, cache)},
	{"archivedCache", "[Ljava/lang/Byte;", nullptr, $STATIC, $staticField(Byte$ByteCache, archivedCache)},
	{}
};

$MethodInfo _Byte$ByteCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Byte$ByteCache, init$, void)},
	{}
};

$InnerClassInfo _Byte$ByteCache_InnerClassesInfo_[] = {
	{"java.lang.Byte$ByteCache", "java.lang.Byte", "ByteCache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Byte$ByteCache_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Byte$ByteCache",
	"java.lang.Object",
	nullptr,
	_Byte$ByteCache_FieldInfo_,
	_Byte$ByteCache_MethodInfo_,
	nullptr,
	nullptr,
	_Byte$ByteCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Byte"
};

$Object* allocate$Byte$ByteCache($Class* clazz) {
	return $of($alloc(Byte$ByteCache));
}

$ByteArray* Byte$ByteCache::cache = nullptr;
$ByteArray* Byte$ByteCache::archivedCache = nullptr;

void Byte$ByteCache::init$() {
}

void clinit$Byte$ByteCache($Class* class$) {
	$useLocalCurrentObjectStackCache();
	int32_t size = -(-128) + 127 + 1;
	{
		int32_t size = -(-128) + 127 + 1;
		$CDS::initializeFromArchive(Byte$ByteCache::class$);
		if (Byte$ByteCache::archivedCache == nullptr || $nc(Byte$ByteCache::archivedCache)->length != size) {
			$var($ByteArray, c, $new($ByteArray, size));
			int8_t value = (int8_t)-128;
			for (int32_t i = 0; i < size; ++i) {
				c->set(i, $$new($Byte, value++));
			}
			$assignStatic(Byte$ByteCache::archivedCache, c);
		}
		$assignStatic(Byte$ByteCache::cache, Byte$ByteCache::archivedCache);
	}
}

Byte$ByteCache::Byte$ByteCache() {
}

$Class* Byte$ByteCache::load$($String* name, bool initialize) {
	$loadClass(Byte$ByteCache, name, initialize, &_Byte$ByteCache_ClassInfo_, clinit$Byte$ByteCache, allocate$Byte$ByteCache);
	return class$;
}

$Class* Byte$ByteCache::class$ = nullptr;

	} // lang
} // java