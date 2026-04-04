#include <java/util/Enumeration.h>
#include <java/util/Enumeration$1.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration$1 = ::java::util::Enumeration$1;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace util {

$Iterator* Enumeration::asIterator() {
	return $new($Enumeration$1, this);
}

$Class* Enumeration::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"asIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC, $virtualMethod(Enumeration, asIterator, $Iterator*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Enumeration, hasMoreElements, bool)},
		{"nextElement", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT, $virtualMethod(Enumeration, nextElement, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Enumeration$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.util.Enumeration",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.util.Enumeration$1"
	};
	$loadClass(Enumeration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Enumeration);
	});
	return class$;
}

$Class* Enumeration::class$ = nullptr;

	} // util
} // java