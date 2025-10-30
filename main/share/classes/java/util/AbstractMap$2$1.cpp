#include <java/util/AbstractMap$2$1.h>

#include <java/util/AbstractMap$2.h>
#include <java/util/AbstractMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractMap$2 = ::java::util::AbstractMap$2;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace java {
	namespace util {

$FieldInfo _AbstractMap$2$1_FieldInfo_[] = {
	{"this$1", "Ljava/util/AbstractMap$2;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractMap$2$1, this$1)},
	{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PRIVATE, $field(AbstractMap$2$1, i)},
	{}
};

$MethodInfo _AbstractMap$2$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/AbstractMap$2;)V", nullptr, 0, $method(static_cast<void(AbstractMap$2$1::*)($AbstractMap$2*)>(&AbstractMap$2$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TV;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AbstractMap$2$1_EnclosingMethodInfo_ = {
	"java.util.AbstractMap$2",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _AbstractMap$2$1_InnerClassesInfo_[] = {
	{"java.util.AbstractMap$2", nullptr, nullptr, 0},
	{"java.util.AbstractMap$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractMap$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.AbstractMap$2$1",
	"java.lang.Object",
	"java.util.Iterator",
	_AbstractMap$2$1_FieldInfo_,
	_AbstractMap$2$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TV;>;",
	&_AbstractMap$2$1_EnclosingMethodInfo_,
	_AbstractMap$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.AbstractMap"
};

$Object* allocate$AbstractMap$2$1($Class* clazz) {
	return $of($alloc(AbstractMap$2$1));
}

void AbstractMap$2$1::init$($AbstractMap$2* this$1) {
	$set(this, this$1, this$1);
	$set(this, i, $nc($($nc(this->this$1->this$0)->entrySet()))->iterator());
}

bool AbstractMap$2$1::hasNext() {
	return $nc(this->i)->hasNext();
}

$Object* AbstractMap$2$1::next() {
	return $of($nc(($cast($Map$Entry, $($nc(this->i)->next()))))->getValue());
}

void AbstractMap$2$1::remove() {
	$nc(this->i)->remove();
}

AbstractMap$2$1::AbstractMap$2$1() {
}

$Class* AbstractMap$2$1::load$($String* name, bool initialize) {
	$loadClass(AbstractMap$2$1, name, initialize, &_AbstractMap$2$1_ClassInfo_, allocate$AbstractMap$2$1);
	return class$;
}

$Class* AbstractMap$2$1::class$ = nullptr;

	} // util
} // java