#include <java/util/EnumMap$KeySet.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/EnumMap$EnumMapIterator.h>
#include <java/util/EnumMap$KeyIterator.h>
#include <java/util/EnumMap.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $EnumMap = ::java::util::EnumMap;
using $EnumMap$EnumMapIterator = ::java::util::EnumMap$EnumMapIterator;
using $EnumMap$KeyIterator = ::java::util::EnumMap$KeyIterator;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace util {

$FieldInfo _EnumMap$KeySet_FieldInfo_[] = {
	{"this$0", "Ljava/util/EnumMap;", nullptr, $FINAL | $SYNTHETIC, $field(EnumMap$KeySet, this$0)},
	{}
};

$MethodInfo _EnumMap$KeySet_MethodInfo_[] = {
	{"<init>", "(Ljava/util/EnumMap;)V", nullptr, $PRIVATE, $method(static_cast<void(EnumMap$KeySet::*)($EnumMap*)>(&EnumMap$KeySet::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TK;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _EnumMap$KeySet_InnerClassesInfo_[] = {
	{"java.util.EnumMap$KeySet", "java.util.EnumMap", "KeySet", $PRIVATE},
	{}
};

$ClassInfo _EnumMap$KeySet_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.EnumMap$KeySet",
	"java.util.AbstractSet",
	nullptr,
	_EnumMap$KeySet_FieldInfo_,
	_EnumMap$KeySet_MethodInfo_,
	"Ljava/util/AbstractSet<TK;>;",
	nullptr,
	_EnumMap$KeySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.EnumMap"
};

$Object* allocate$EnumMap$KeySet($Class* clazz) {
	return $of($alloc(EnumMap$KeySet));
}

void EnumMap$KeySet::init$($EnumMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

$Iterator* EnumMap$KeySet::iterator() {
	return $new($EnumMap$KeyIterator, this->this$0);
}

int32_t EnumMap$KeySet::size() {
	return this->this$0->size$;
}

bool EnumMap$KeySet::contains(Object$* o) {
	return this->this$0->containsKey(o);
}

bool EnumMap$KeySet::remove(Object$* o) {
	int32_t oldSize = this->this$0->size$;
	this->this$0->remove(o);
	return this->this$0->size$ != oldSize;
}

void EnumMap$KeySet::clear() {
	this->this$0->clear();
}

EnumMap$KeySet::EnumMap$KeySet() {
}

$Class* EnumMap$KeySet::load$($String* name, bool initialize) {
	$loadClass(EnumMap$KeySet, name, initialize, &_EnumMap$KeySet_ClassInfo_, allocate$EnumMap$KeySet);
	return class$;
}

$Class* EnumMap$KeySet::class$ = nullptr;

	} // util
} // java