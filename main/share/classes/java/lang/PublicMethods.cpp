#include <java/lang/PublicMethods.h>
#include <java/lang/PublicMethods$Key.h>
#include <java/lang/PublicMethods$MethodList.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicMethods$Key = ::java::lang::PublicMethods$Key;
using $PublicMethods$MethodList = ::java::lang::PublicMethods$MethodList;
using $Method = ::java::lang::reflect::Method;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;

namespace java {
	namespace lang {

void PublicMethods::init$() {
	$set(this, map, $new($LinkedHashMap));
}

void PublicMethods::merge($Method* method) {
	$useLocalObjectStack();
	$var($PublicMethods$Key, key, $new($PublicMethods$Key, method));
	$var($PublicMethods$MethodList, existing, $cast($PublicMethods$MethodList, this->map->get(key)));
	int32_t xLen = existing == nullptr ? 0 : existing->length();
	$var($PublicMethods$MethodList, merged, $PublicMethods$MethodList::merge(existing, method));
	this->methodCount += $nc(merged)->length() - xLen;
	if (merged != existing) {
		this->map->put(key, merged);
	}
}

$MethodArray* PublicMethods::toArray() {
	$useLocalObjectStack();
	$var($MethodArray, array, $new($MethodArray, this->methodCount));
	int32_t i = 0;
	{
		$var($Iterator, i$, $$nc(this->map->values())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($PublicMethods$MethodList, ml, $cast($PublicMethods$MethodList, i$->next()));
			for (; ml != nullptr; $assign(ml, ml->next)) {
				array->set(i++, ml->method);
			}
		}
	}
	return array;
}

PublicMethods::PublicMethods() {
}

$Class* PublicMethods::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/PublicMethods$Key;Ljava/lang/PublicMethods$MethodList;>;", $PRIVATE | $FINAL, $field(PublicMethods, map)},
		{"methodCount", "I", nullptr, $PRIVATE, $field(PublicMethods, methodCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PublicMethods, init$, void)},
		{"merge", "(Ljava/lang/reflect/Method;)V", nullptr, 0, $method(PublicMethods, merge, void, $Method*)},
		{"toArray", "()[Ljava/lang/reflect/Method;", nullptr, 0, $method(PublicMethods, toArray, $MethodArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.PublicMethods$MethodList", "java.lang.PublicMethods", "MethodList", $STATIC | $FINAL},
		{"java.lang.PublicMethods$Key", "java.lang.PublicMethods", "Key", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.PublicMethods",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.PublicMethods$MethodList,java.lang.PublicMethods$Key"
	};
	$loadClass(PublicMethods, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PublicMethods);
	});
	return class$;
}

$Class* PublicMethods::class$ = nullptr;

	} // lang
} // java