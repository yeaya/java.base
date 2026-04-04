#include <java/util/Scanner$PatternLRUCache.h>
#include <java/util/Scanner.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $PatternArray = $Array<::java::util::regex::Pattern>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Pattern = ::java::util::regex::Pattern;

namespace java {
	namespace util {

void Scanner$PatternLRUCache::init$(int32_t size) {
	$set(this, oa, nullptr);
	this->size = size;
}

bool Scanner$PatternLRUCache::hasName($Pattern* p, $String* s) {
	return $$nc($nc(p)->pattern())->equals(s);
}

void Scanner$PatternLRUCache::moveToFront($ObjectArray* oa, int32_t i) {
	$var($Object0, ob, $nc(oa)->get(i));
	for (int32_t j = i; j > 0; --j) {
		oa->set(j, oa->get(j - 1));
	}
	oa->set(0, ob);
}

$Pattern* Scanner$PatternLRUCache::forName($String* name) {
	$useLocalObjectStack();
	if (this->oa == nullptr) {
		$var($PatternArray, temp, $new($PatternArray, this->size));
		$set(this, oa, temp);
	} else {
		for (int32_t i = 0; i < this->oa->length; ++i) {
			$var($Pattern, ob, this->oa->get(i));
			if (ob == nullptr) {
				continue;
			}
			if (hasName(ob, name)) {
				if (i > 0) {
					moveToFront(this->oa, i);
				}
				return ob;
			}
		}
	}
	$var($Pattern, ob, $Pattern::compile(name));
	$nc(this->oa)->set($nc(this->oa)->length - 1, ob);
	moveToFront(this->oa, this->oa->length - 1);
	return ob;
}

Scanner$PatternLRUCache::Scanner$PatternLRUCache() {
}

$Class* Scanner$PatternLRUCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"oa", "[Ljava/util/regex/Pattern;", nullptr, $PRIVATE, $field(Scanner$PatternLRUCache, oa)},
		{"size", "I", nullptr, $PRIVATE | $FINAL, $field(Scanner$PatternLRUCache, size)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(Scanner$PatternLRUCache, init$, void, int32_t)},
		{"forName", "(Ljava/lang/String;)Ljava/util/regex/Pattern;", nullptr, 0, $virtualMethod(Scanner$PatternLRUCache, forName, $Pattern*, $String*)},
		{"hasName", "(Ljava/util/regex/Pattern;Ljava/lang/String;)Z", nullptr, 0, $virtualMethod(Scanner$PatternLRUCache, hasName, bool, $Pattern*, $String*)},
		{"moveToFront", "([Ljava/lang/Object;I)V", nullptr, 0, $virtualMethod(Scanner$PatternLRUCache, moveToFront, void, $ObjectArray*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Scanner$PatternLRUCache", "java.util.Scanner", "PatternLRUCache", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Scanner$PatternLRUCache",
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
		"java.util.Scanner"
	};
	$loadClass(Scanner$PatternLRUCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scanner$PatternLRUCache);
	});
	return class$;
}

$Class* Scanner$PatternLRUCache::class$ = nullptr;

	} // util
} // java