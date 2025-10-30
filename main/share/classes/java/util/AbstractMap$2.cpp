#include <java/util/AbstractMap$2.h>

#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap$2$1.h>
#include <java/util/AbstractMap.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractMap$2$1 = ::java::util::AbstractMap$2$1;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace util {

$FieldInfo _AbstractMap$2_FieldInfo_[] = {
	{"this$0", "Ljava/util/AbstractMap;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractMap$2, this$0)},
	{}
};

$MethodInfo _AbstractMap$2_MethodInfo_[] = {
	{"<init>", "(Ljava/util/AbstractMap;)V", nullptr, 0, $method(static_cast<void(AbstractMap$2::*)($AbstractMap*)>(&AbstractMap$2::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TV;>;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AbstractMap$2_EnclosingMethodInfo_ = {
	"java.util.AbstractMap",
	"values",
	"()Ljava/util/Collection;"
};

$InnerClassInfo _AbstractMap$2_InnerClassesInfo_[] = {
	{"java.util.AbstractMap$2", nullptr, nullptr, 0},
	{"java.util.AbstractMap$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractMap$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.AbstractMap$2",
	"java.util.AbstractCollection",
	nullptr,
	_AbstractMap$2_FieldInfo_,
	_AbstractMap$2_MethodInfo_,
	"Ljava/util/AbstractCollection<TV;>;",
	&_AbstractMap$2_EnclosingMethodInfo_,
	_AbstractMap$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.AbstractMap"
};

$Object* allocate$AbstractMap$2($Class* clazz) {
	return $of($alloc(AbstractMap$2));
}

void AbstractMap$2::init$($AbstractMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractCollection::init$();
}

$Iterator* AbstractMap$2::iterator() {
	return $new($AbstractMap$2$1, this);
}

int32_t AbstractMap$2::size() {
	return this->this$0->size();
}

bool AbstractMap$2::isEmpty() {
	return this->this$0->isEmpty();
}

void AbstractMap$2::clear() {
	this->this$0->clear();
}

bool AbstractMap$2::contains(Object$* v) {
	return this->this$0->containsValue(v);
}

AbstractMap$2::AbstractMap$2() {
}

$Class* AbstractMap$2::load$($String* name, bool initialize) {
	$loadClass(AbstractMap$2, name, initialize, &_AbstractMap$2_ClassInfo_, allocate$AbstractMap$2);
	return class$;
}

$Class* AbstractMap$2::class$ = nullptr;

	} // util
} // java