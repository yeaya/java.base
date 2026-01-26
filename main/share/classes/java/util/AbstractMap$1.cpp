#include <java/util/AbstractMap$1.h>

#include <java/util/AbstractMap$1$1.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractMap$1$1 = ::java::util::AbstractMap$1$1;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace util {

$FieldInfo _AbstractMap$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/AbstractMap;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractMap$1, this$0)},
	{}
};

$MethodInfo _AbstractMap$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/AbstractMap;)V", nullptr, 0, $method(AbstractMap$1, init$, void, $AbstractMap*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractMap$1, clear, void)},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(AbstractMap$1, contains, bool, Object$*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(AbstractMap$1, isEmpty, bool)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TK;>;", $PUBLIC, $virtualMethod(AbstractMap$1, iterator, $Iterator*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractMap$1, size, int32_t)},
	{}
};

$EnclosingMethodInfo _AbstractMap$1_EnclosingMethodInfo_ = {
	"java.util.AbstractMap",
	"keySet",
	"()Ljava/util/Set;"
};

$InnerClassInfo _AbstractMap$1_InnerClassesInfo_[] = {
	{"java.util.AbstractMap$1", nullptr, nullptr, 0},
	{"java.util.AbstractMap$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractMap$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.AbstractMap$1",
	"java.util.AbstractSet",
	nullptr,
	_AbstractMap$1_FieldInfo_,
	_AbstractMap$1_MethodInfo_,
	"Ljava/util/AbstractSet<TK;>;",
	&_AbstractMap$1_EnclosingMethodInfo_,
	_AbstractMap$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.AbstractMap"
};

$Object* allocate$AbstractMap$1($Class* clazz) {
	return $of($alloc(AbstractMap$1));
}

void AbstractMap$1::init$($AbstractMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

$Iterator* AbstractMap$1::iterator() {
	return $new($AbstractMap$1$1, this);
}

int32_t AbstractMap$1::size() {
	return this->this$0->size();
}

bool AbstractMap$1::isEmpty() {
	return this->this$0->isEmpty();
}

void AbstractMap$1::clear() {
	this->this$0->clear();
}

bool AbstractMap$1::contains(Object$* k) {
	return this->this$0->containsKey(k);
}

AbstractMap$1::AbstractMap$1() {
}

$Class* AbstractMap$1::load$($String* name, bool initialize) {
	$loadClass(AbstractMap$1, name, initialize, &_AbstractMap$1_ClassInfo_, allocate$AbstractMap$1);
	return class$;
}

$Class* AbstractMap$1::class$ = nullptr;

	} // util
} // java