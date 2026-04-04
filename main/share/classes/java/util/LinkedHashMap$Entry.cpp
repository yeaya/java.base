#include <java/util/LinkedHashMap$Entry.h>
#include <java/util/HashMap$Node.h>
#include <java/util/LinkedHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap$Node = ::java::util::HashMap$Node;

namespace java {
	namespace util {

void LinkedHashMap$Entry::init$(int32_t hash, Object$* key, Object$* value, $HashMap$Node* next) {
	$HashMap$Node::init$(hash, key, value, next);
}

LinkedHashMap$Entry::LinkedHashMap$Entry() {
}

$Class* LinkedHashMap$Entry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"before", "Ljava/util/LinkedHashMap$Entry;", "Ljava/util/LinkedHashMap$Entry<TK;TV;>;", 0, $field(LinkedHashMap$Entry, before)},
		{"after", "Ljava/util/LinkedHashMap$Entry;", "Ljava/util/LinkedHashMap$Entry<TK;TV;>;", 0, $field(LinkedHashMap$Entry, after)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/Object;Ljava/lang/Object;Ljava/util/HashMap$Node;)V", "(ITK;TV;Ljava/util/HashMap$Node<TK;TV;>;)V", 0, $method(LinkedHashMap$Entry, init$, void, int32_t, Object$*, Object$*, $HashMap$Node*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.LinkedHashMap$Entry", "java.util.LinkedHashMap", "Entry", $STATIC},
		{"java.util.HashMap$Node", "java.util.HashMap", "Node", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.LinkedHashMap$Entry",
		"java.util.HashMap$Node",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/HashMap$Node<TK;TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.LinkedHashMap"
	};
	$loadClass(LinkedHashMap$Entry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LinkedHashMap$Entry);
	});
	return class$;
}

$Class* LinkedHashMap$Entry::class$ = nullptr;

	} // util
} // java