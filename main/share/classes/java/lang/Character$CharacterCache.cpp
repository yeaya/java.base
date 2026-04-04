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

$CharacterArray* Character$CharacterCache::cache = nullptr;
$CharacterArray* Character$CharacterCache::archivedCache = nullptr;

void Character$CharacterCache::init$() {
}

void Character$CharacterCache::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		int32_t size = 127 + 1;
		$CDS::initializeFromArchive(Character$CharacterCache::class$);
		if (Character$CharacterCache::archivedCache == nullptr || Character$CharacterCache::archivedCache->length != size) {
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
	$FieldInfo fieldInfos$$[] = {
		{"cache", "[Ljava/lang/Character;", nullptr, $STATIC | $FINAL, $staticField(Character$CharacterCache, cache)},
		{"archivedCache", "[Ljava/lang/Character;", nullptr, $STATIC, $staticField(Character$CharacterCache, archivedCache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Character$CharacterCache, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Character$CharacterCache", "java.lang.Character", "CharacterCache", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Character$CharacterCache",
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
		"java.lang.Character"
	};
	$loadClass(Character$CharacterCache, name, initialize, &classInfo$$, Character$CharacterCache::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Character$CharacterCache);
	});
	return class$;
}

$Class* Character$CharacterCache::class$ = nullptr;

	} // lang
} // java