#include <java/util/LinkedHashMap$Entry.h>

#include <java/util/HashMap$Node.h>
#include <java/util/LinkedHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap$Node = ::java::util::HashMap$Node;
using $LinkedHashMap = ::java::util::LinkedHashMap;

namespace java {
	namespace util {

$FieldInfo _LinkedHashMap$Entry_FieldInfo_[] = {
	{"before", "Ljava/util/LinkedHashMap$Entry;", "Ljava/util/LinkedHashMap$Entry<TK;TV;>;", 0, $field(LinkedHashMap$Entry, before)},
	{"after", "Ljava/util/LinkedHashMap$Entry;", "Ljava/util/LinkedHashMap$Entry<TK;TV;>;", 0, $field(LinkedHashMap$Entry, after)},
	{}
};

$MethodInfo _LinkedHashMap$Entry_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/Object;Ljava/lang/Object;Ljava/util/HashMap$Node;)V", "(ITK;TV;Ljava/util/HashMap$Node<TK;TV;>;)V", 0, $method(static_cast<void(LinkedHashMap$Entry::*)(int32_t,Object$*,Object$*,$HashMap$Node*)>(&LinkedHashMap$Entry::init$))},
	{}
};

$InnerClassInfo _LinkedHashMap$Entry_InnerClassesInfo_[] = {
	{"java.util.LinkedHashMap$Entry", "java.util.LinkedHashMap", "Entry", $STATIC},
	{"java.util.HashMap$Node", "java.util.HashMap", "Node", $STATIC},
	{}
};

$ClassInfo _LinkedHashMap$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.LinkedHashMap$Entry",
	"java.util.HashMap$Node",
	nullptr,
	_LinkedHashMap$Entry_FieldInfo_,
	_LinkedHashMap$Entry_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/util/HashMap$Node<TK;TV;>;",
	nullptr,
	_LinkedHashMap$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.LinkedHashMap"
};

$Object* allocate$LinkedHashMap$Entry($Class* clazz) {
	return $of($alloc(LinkedHashMap$Entry));
}

void LinkedHashMap$Entry::init$(int32_t hash, Object$* key, Object$* value, $HashMap$Node* next) {
	$HashMap$Node::init$(hash, key, value, next);
}

LinkedHashMap$Entry::LinkedHashMap$Entry() {
}

$Class* LinkedHashMap$Entry::load$($String* name, bool initialize) {
	$loadClass(LinkedHashMap$Entry, name, initialize, &_LinkedHashMap$Entry_ClassInfo_, allocate$LinkedHashMap$Entry);
	return class$;
}

$Class* LinkedHashMap$Entry::class$ = nullptr;

	} // util
} // java