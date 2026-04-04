#include <java/util/Collections$UnmodifiableRandomAccessList.h>
#include <java/util/Collections$UnmodifiableList.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections$UnmodifiableList = ::java::util::Collections$UnmodifiableList;
using $List = ::java::util::List;

namespace java {
	namespace util {

bool Collections$UnmodifiableRandomAccessList::equals(Object$* o) {
	 return this->$Collections$UnmodifiableList::equals(o);
}

int32_t Collections$UnmodifiableRandomAccessList::hashCode() {
	 return this->$Collections$UnmodifiableList::hashCode();
}

$String* Collections$UnmodifiableRandomAccessList::toString() {
	 return this->$Collections$UnmodifiableList::toString();
}

$Object* Collections$UnmodifiableRandomAccessList::clone() {
	 return this->$Collections$UnmodifiableList::clone();
}

void Collections$UnmodifiableRandomAccessList::finalize() {
	this->$Collections$UnmodifiableList::finalize();
}

void Collections$UnmodifiableRandomAccessList::init$($List* list) {
	$Collections$UnmodifiableList::init$(list);
}

$List* Collections$UnmodifiableRandomAccessList::subList(int32_t fromIndex, int32_t toIndex) {
	return $new(Collections$UnmodifiableRandomAccessList, $($nc(this->list)->subList(fromIndex, toIndex)));
}

$Object* Collections$UnmodifiableRandomAccessList::writeReplace() {
	return $of($new($Collections$UnmodifiableList, this->list));
}

Collections$UnmodifiableRandomAccessList::Collections$UnmodifiableRandomAccessList() {
}

$Class* Collections$UnmodifiableRandomAccessList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$UnmodifiableRandomAccessList, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<+TE;>;)V", 0, $method(Collections$UnmodifiableRandomAccessList, init$, void, $List*)},
		{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC, $virtualMethod(Collections$UnmodifiableRandomAccessList, subList, $List*, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(Collections$UnmodifiableRandomAccessList, writeReplace, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Collections$UnmodifiableRandomAccessList", "java.util.Collections", "UnmodifiableRandomAccessList", $STATIC},
		{"java.util.Collections$UnmodifiableList", "java.util.Collections", "UnmodifiableList", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Collections$UnmodifiableRandomAccessList",
		"java.util.Collections$UnmodifiableList",
		"java.util.RandomAccess",
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/util/Collections$UnmodifiableList<TE;>;Ljava/util/RandomAccess;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Collections"
	};
	$loadClass(Collections$UnmodifiableRandomAccessList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Collections$UnmodifiableRandomAccessList));
	});
	return class$;
}

$Class* Collections$UnmodifiableRandomAccessList::class$ = nullptr;

	} // util
} // java