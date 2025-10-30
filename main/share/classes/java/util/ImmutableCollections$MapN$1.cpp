#include <java/util/ImmutableCollections$MapN$1.h>

#include <java/util/AbstractSet.h>
#include <java/util/ImmutableCollections$MapN$MapNIterator.h>
#include <java/util/ImmutableCollections$MapN.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $ImmutableCollections$MapN = ::java::util::ImmutableCollections$MapN;
using $ImmutableCollections$MapN$MapNIterator = ::java::util::ImmutableCollections$MapN$MapNIterator;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace util {

$FieldInfo _ImmutableCollections$MapN$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/ImmutableCollections$MapN;", nullptr, $FINAL | $SYNTHETIC, $field(ImmutableCollections$MapN$1, this$0)},
	{}
};

$MethodInfo _ImmutableCollections$MapN$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ImmutableCollections$MapN;)V", nullptr, 0, $method(static_cast<void(ImmutableCollections$MapN$1::*)($ImmutableCollections$MapN*)>(&ImmutableCollections$MapN$1::init$))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ImmutableCollections$MapN$1_EnclosingMethodInfo_ = {
	"java.util.ImmutableCollections$MapN",
	"entrySet",
	"()Ljava/util/Set;"
};

$InnerClassInfo _ImmutableCollections$MapN$1_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$MapN", "java.util.ImmutableCollections", "MapN", $STATIC | $FINAL},
	{"java.util.ImmutableCollections$MapN$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ImmutableCollections$MapN$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ImmutableCollections$MapN$1",
	"java.util.AbstractSet",
	nullptr,
	_ImmutableCollections$MapN$1_FieldInfo_,
	_ImmutableCollections$MapN$1_MethodInfo_,
	"Ljava/util/AbstractSet<Ljava/util/Map$Entry<TK;TV;>;>;",
	&_ImmutableCollections$MapN$1_EnclosingMethodInfo_,
	_ImmutableCollections$MapN$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$MapN$1($Class* clazz) {
	return $of($alloc(ImmutableCollections$MapN$1));
}

void ImmutableCollections$MapN$1::init$($ImmutableCollections$MapN* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

int32_t ImmutableCollections$MapN$1::size() {
	return this->this$0->size$;
}

$Iterator* ImmutableCollections$MapN$1::iterator() {
	return $new($ImmutableCollections$MapN$MapNIterator, this->this$0);
}

ImmutableCollections$MapN$1::ImmutableCollections$MapN$1() {
}

$Class* ImmutableCollections$MapN$1::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$MapN$1, name, initialize, &_ImmutableCollections$MapN$1_ClassInfo_, allocate$ImmutableCollections$MapN$1);
	return class$;
}

$Class* ImmutableCollections$MapN$1::class$ = nullptr;

	} // util
} // java