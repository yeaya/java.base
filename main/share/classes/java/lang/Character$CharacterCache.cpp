#include <java/lang/Character$CharacterCache.h>

#include <jdk/internal/misc/CDS.h>
#include <jcpp.h>

using $CharacterArray = $Array<::java::lang::Character>;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CDS = ::jdk::internal::misc::CDS;

namespace java {
	namespace lang {

$FieldInfo _Character$CharacterCache_FieldInfo_[] = {
	{"cache", "[Ljava/lang/Character;", nullptr, $STATIC | $FINAL, $staticField(Character$CharacterCache, cache)},
	{"archivedCache", "[Ljava/lang/Character;", nullptr, $STATIC, $staticField(Character$CharacterCache, archivedCache)},
	{}
};

$MethodInfo _Character$CharacterCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Character$CharacterCache::*)()>(&Character$CharacterCache::init$))},
	{}
};

$InnerClassInfo _Character$CharacterCache_InnerClassesInfo_[] = {
	{"java.lang.Character$CharacterCache", "java.lang.Character", "CharacterCache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Character$CharacterCache_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Character$CharacterCache",
	"java.lang.Object",
	nullptr,
	_Character$CharacterCache_FieldInfo_,
	_Character$CharacterCache_MethodInfo_,
	nullptr,
	nullptr,
	_Character$CharacterCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Character"
};

$Object* allocate$Character$CharacterCache($Class* clazz) {
	return $of($alloc(Character$CharacterCache));
}

$CharacterArray* Character$CharacterCache::cache = nullptr;
$CharacterArray* Character$CharacterCache::archivedCache = nullptr;

void Character$CharacterCache::init$() {
}

void clinit$Character$CharacterCache($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		int32_t size = 127 + 1;
		$CDS::initializeFromArchive(Character$CharacterCache::class$);
		if (Character$CharacterCache::archivedCache == nullptr || $nc(Character$CharacterCache::archivedCache)->length != size) {
			$var($CharacterArray, c, $new($CharacterArray, size));
			for (int32_t i = 0; i < size; ++i) {
				c->set(i, $$new($Character, (char16_t)i));
			}
			$assignStatic(Character$CharacterCache::archivedCache, c);
		}
		$assignStatic(Character$CharacterCache::cache, Character$CharacterCache::archivedCache);
	}
}

Character$CharacterCache::Character$CharacterCache() {
}

$Class* Character$CharacterCache::load$($String* name, bool initialize) {
	$loadClass(Character$CharacterCache, name, initialize, &_Character$CharacterCache_ClassInfo_, clinit$Character$CharacterCache, allocate$Character$CharacterCache);
	return class$;
}

$Class* Character$CharacterCache::class$ = nullptr;

	} // lang
} // java