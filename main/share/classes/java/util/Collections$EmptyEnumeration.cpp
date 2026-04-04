#include <java/util/Collections$EmptyEnumeration.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef EMPTY_ENUMERATION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

Collections$EmptyEnumeration* Collections$EmptyEnumeration::EMPTY_ENUMERATION = nullptr;

void Collections$EmptyEnumeration::init$() {
}

bool Collections$EmptyEnumeration::hasMoreElements() {
	return false;
}

$Object* Collections$EmptyEnumeration::nextElement() {
	$throwNew($NoSuchElementException);
	$shouldNotReachHere();
}

$Iterator* Collections$EmptyEnumeration::asIterator() {
	return $Collections::emptyIterator();
}

void Collections$EmptyEnumeration::clinit$($Class* clazz) {
	$assignStatic(Collections$EmptyEnumeration::EMPTY_ENUMERATION, $new(Collections$EmptyEnumeration));
}

Collections$EmptyEnumeration::Collections$EmptyEnumeration() {
}

$Class* Collections$EmptyEnumeration::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EMPTY_ENUMERATION", "Ljava/util/Collections$EmptyEnumeration;", "Ljava/util/Collections$EmptyEnumeration<Ljava/lang/Object;>;", $STATIC | $FINAL, $staticField(Collections$EmptyEnumeration, EMPTY_ENUMERATION)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Collections$EmptyEnumeration, init$, void)},
		{"asIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(Collections$EmptyEnumeration, asIterator, $Iterator*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(Collections$EmptyEnumeration, hasMoreElements, bool)},
		{"nextElement", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$EmptyEnumeration, nextElement, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Collections$EmptyEnumeration", "java.util.Collections", "EmptyEnumeration", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Collections$EmptyEnumeration",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Enumeration<TE;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Collections"
	};
	$loadClass(Collections$EmptyEnumeration, name, initialize, &classInfo$$, Collections$EmptyEnumeration::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Collections$EmptyEnumeration);
	});
	return class$;
}

$Class* Collections$EmptyEnumeration::class$ = nullptr;

	} // util
} // java