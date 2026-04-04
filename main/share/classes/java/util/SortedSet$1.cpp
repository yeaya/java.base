#include <java/util/SortedSet$1.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/SortedSet.h>
#include <java/util/Spliterators$IteratorSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $SortedSet = ::java::util::SortedSet;
using $Spliterators$IteratorSpliterator = ::java::util::Spliterators$IteratorSpliterator;

namespace java {
	namespace util {

void SortedSet$1::init$($SortedSet* this$0, $Collection* collection, int32_t characteristics) {
	$set(this, this$0, this$0);
	$Spliterators$IteratorSpliterator::init$(collection, characteristics);
}

$Comparator* SortedSet$1::getComparator() {
	return this->this$0->comparator();
}

SortedSet$1::SortedSet$1() {
}

$Class* SortedSet$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/SortedSet;", nullptr, $FINAL | $SYNTHETIC, $field(SortedSet$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/SortedSet;Ljava/util/Collection;I)V", nullptr, 0, $method(SortedSet$1, init$, void, $SortedSet*, $Collection*, int32_t)},
		{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TE;>;", $PUBLIC, $virtualMethod(SortedSet$1, getComparator, $Comparator*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.SortedSet",
		"spliterator",
		"()Ljava/util/Spliterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.SortedSet$1", nullptr, nullptr, 0},
		{"java.util.Spliterators$IteratorSpliterator", "java.util.Spliterators", "IteratorSpliterator", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.SortedSet$1",
		"java.util.Spliterators$IteratorSpliterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/Spliterators$IteratorSpliterator<TE;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.SortedSet"
	};
	$loadClass(SortedSet$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SortedSet$1);
	});
	return class$;
}

$Class* SortedSet$1::class$ = nullptr;

	} // util
} // java