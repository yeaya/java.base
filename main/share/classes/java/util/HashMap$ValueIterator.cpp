#include <java/util/HashMap$ValueIterator.h>
#include <java/util/HashMap$HashIterator.h>
#include <java/util/HashMap$Node.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $HashMap$HashIterator = ::java::util::HashMap$HashIterator;

namespace java {
	namespace util {

bool HashMap$ValueIterator::hasNext() {
	 return this->$HashMap$HashIterator::hasNext();
}

void HashMap$ValueIterator::remove() {
	this->$HashMap$HashIterator::remove();
}

int32_t HashMap$ValueIterator::hashCode() {
	 return this->$HashMap$HashIterator::hashCode();
}

bool HashMap$ValueIterator::equals(Object$* obj) {
	 return this->$HashMap$HashIterator::equals(obj);
}

$Object* HashMap$ValueIterator::clone() {
	 return this->$HashMap$HashIterator::clone();
}

$String* HashMap$ValueIterator::toString() {
	 return this->$HashMap$HashIterator::toString();
}

void HashMap$ValueIterator::finalize() {
	this->$HashMap$HashIterator::finalize();
}

void HashMap$ValueIterator::init$($HashMap* this$0) {
	$set(this, this$0, this$0);
	$HashMap$HashIterator::init$(this$0);
}

$Object* HashMap$ValueIterator::next() {
	return $nc($(nextNode()))->value;
}

HashMap$ValueIterator::HashMap$ValueIterator() {
}

$Class* HashMap$ValueIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/HashMap;", nullptr, $FINAL | $SYNTHETIC, $field(HashMap$ValueIterator, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/util/HashMap;)V", nullptr, 0, $method(HashMap$ValueIterator, init$, void, $HashMap*)},
		{"next", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $FINAL, $virtualMethod(HashMap$ValueIterator, next, $Object*)},
		{"*remove", "()V", nullptr, $PUBLIC | $FINAL},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.HashMap$ValueIterator", "java.util.HashMap", "ValueIterator", $FINAL},
		{"java.util.HashMap$HashIterator", "java.util.HashMap", "HashIterator", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.HashMap$ValueIterator",
		"java.util.HashMap$HashIterator",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/HashMap<TK;TV;>.HashIterator;Ljava/util/Iterator<TV;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.HashMap"
	};
	$loadClass(HashMap$ValueIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HashMap$ValueIterator));
	});
	return class$;
}

$Class* HashMap$ValueIterator::class$ = nullptr;

	} // util
} // java