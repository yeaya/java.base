#include <java/util/stream/Collectors$Partition$1.h>

#include <java/util/AbstractMap$SimpleImmutableEntry.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/stream/Collectors$Partition.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap$SimpleImmutableEntry = ::java::util::AbstractMap$SimpleImmutableEntry;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map$Entry = ::java::util::Map$Entry;
using $Collectors$Partition = ::java::util::stream::Collectors$Partition;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _Collectors$Partition$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/stream/Collectors$Partition;", nullptr, $FINAL | $SYNTHETIC, $field(Collectors$Partition$1, this$0)},
	{}
};

$MethodInfo _Collectors$Partition$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/stream/Collectors$Partition;)V", nullptr, 0, $method(Collectors$Partition$1, init$, void, $Collectors$Partition*)},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/Boolean;TT;>;>;", $PUBLIC, $virtualMethod(Collectors$Partition$1, iterator, $Iterator*)},
	{"size", "()I", nullptr, $PUBLIC, $virtualMethod(Collectors$Partition$1, size, int32_t)},
	{}
};

$EnclosingMethodInfo _Collectors$Partition$1_EnclosingMethodInfo_ = {
	"java.util.stream.Collectors$Partition",
	"entrySet",
	"()Ljava/util/Set;"
};

$InnerClassInfo _Collectors$Partition$1_InnerClassesInfo_[] = {
	{"java.util.stream.Collectors$Partition", "java.util.stream.Collectors", "Partition", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.Collectors$Partition$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Collectors$Partition$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.Collectors$Partition$1",
	"java.util.AbstractSet",
	nullptr,
	_Collectors$Partition$1_FieldInfo_,
	_Collectors$Partition$1_MethodInfo_,
	"Ljava/util/AbstractSet<Ljava/util/Map$Entry<Ljava/lang/Boolean;TT;>;>;",
	&_Collectors$Partition$1_EnclosingMethodInfo_,
	_Collectors$Partition$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.Collectors"
};

$Object* allocate$Collectors$Partition$1($Class* clazz) {
	return $of($alloc(Collectors$Partition$1));
}

void Collectors$Partition$1::init$($Collectors$Partition* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

$Iterator* Collectors$Partition$1::iterator() {
	$useLocalCurrentObjectStackCache();
	$var($Map$Entry, falseEntry, $new($AbstractMap$SimpleImmutableEntry, $($Boolean::valueOf(false)), this->this$0->forFalse));
	$var($Map$Entry, trueEntry, $new($AbstractMap$SimpleImmutableEntry, $($Boolean::valueOf(true)), this->this$0->forTrue));
	return $nc($($List::of(falseEntry, trueEntry)))->iterator();
}

int32_t Collectors$Partition$1::size() {
	return 2;
}

Collectors$Partition$1::Collectors$Partition$1() {
}

$Class* Collectors$Partition$1::load$($String* name, bool initialize) {
	$loadClass(Collectors$Partition$1, name, initialize, &_Collectors$Partition$1_ClassInfo_, allocate$Collectors$Partition$1);
	return class$;
}

$Class* Collectors$Partition$1::class$ = nullptr;

		} // stream
	} // util
} // java