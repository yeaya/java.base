#include <java/util/Scanner$PatternLRUCache.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Scanner.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

using $PatternArray = $Array<::java::util::regex::Pattern>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Scanner = ::java::util::Scanner;
using $Pattern = ::java::util::regex::Pattern;

namespace java {
	namespace util {

$FieldInfo _Scanner$PatternLRUCache_FieldInfo_[] = {
	{"oa", "[Ljava/util/regex/Pattern;", nullptr, $PRIVATE, $field(Scanner$PatternLRUCache, oa)},
	{"size", "I", nullptr, $PRIVATE | $FINAL, $field(Scanner$PatternLRUCache, size)},
	{}
};

$MethodInfo _Scanner$PatternLRUCache_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(Scanner$PatternLRUCache::*)(int32_t)>(&Scanner$PatternLRUCache::init$))},
	{"forName", "(Ljava/lang/String;)Ljava/util/regex/Pattern;", nullptr, 0},
	{"hasName", "(Ljava/util/regex/Pattern;Ljava/lang/String;)Z", nullptr, 0},
	{"moveToFront", "([Ljava/lang/Object;I)V", nullptr, 0},
	{}
};

$InnerClassInfo _Scanner$PatternLRUCache_InnerClassesInfo_[] = {
	{"java.util.Scanner$PatternLRUCache", "java.util.Scanner", "PatternLRUCache", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Scanner$PatternLRUCache_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Scanner$PatternLRUCache",
	"java.lang.Object",
	nullptr,
	_Scanner$PatternLRUCache_FieldInfo_,
	_Scanner$PatternLRUCache_MethodInfo_,
	nullptr,
	nullptr,
	_Scanner$PatternLRUCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Scanner"
};

$Object* allocate$Scanner$PatternLRUCache($Class* clazz) {
	return $of($alloc(Scanner$PatternLRUCache));
}

void Scanner$PatternLRUCache::init$(int32_t size) {
	$set(this, oa, nullptr);
	this->size = size;
}

bool Scanner$PatternLRUCache::hasName($Pattern* p, $String* s) {
	return $nc($($nc(p)->pattern()))->equals(s);
}

void Scanner$PatternLRUCache::moveToFront($ObjectArray* oa, int32_t i) {
	$var($Object0, ob, $nc(oa)->get(i));
	for (int32_t j = i; j > 0; --j) {
		oa->set(j, oa->get(j - 1));
	}
	oa->set(0, ob);
}

$Pattern* Scanner$PatternLRUCache::forName($String* name) {
	if (this->oa == nullptr) {
		$var($PatternArray, temp, $new($PatternArray, this->size));
		$set(this, oa, temp);
	} else {
		for (int32_t i = 0; i < $nc(this->oa)->length; ++i) {
			$var($Pattern, ob, $nc(this->oa)->get(i));
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
	moveToFront(this->oa, $nc(this->oa)->length - 1);
	return ob;
}

Scanner$PatternLRUCache::Scanner$PatternLRUCache() {
}

$Class* Scanner$PatternLRUCache::load$($String* name, bool initialize) {
	$loadClass(Scanner$PatternLRUCache, name, initialize, &_Scanner$PatternLRUCache_ClassInfo_, allocate$Scanner$PatternLRUCache);
	return class$;
}

$Class* Scanner$PatternLRUCache::class$ = nullptr;

	} // util
} // java