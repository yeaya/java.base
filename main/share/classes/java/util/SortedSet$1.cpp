#include <java/util/SortedSet$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Comparator.h>
#include <java/util/SortedSet.h>
#include <java/util/Spliterators$IteratorSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Comparator = ::java::util::Comparator;
using $SortedSet = ::java::util::SortedSet;
using $Spliterators$IteratorSpliterator = ::java::util::Spliterators$IteratorSpliterator;

namespace java {
	namespace util {

$FieldInfo _SortedSet$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/SortedSet;", nullptr, $FINAL | $SYNTHETIC, $field(SortedSet$1, this$0)},
	{}
};

$MethodInfo _SortedSet$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/SortedSet;Ljava/util/Collection;I)V", nullptr, 0, $method(static_cast<void(SortedSet$1::*)($SortedSet*,$Collection*,int32_t)>(&SortedSet$1::init$))},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TE;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _SortedSet$1_EnclosingMethodInfo_ = {
	"java.util.SortedSet",
	"spliterator",
	"()Ljava/util/Spliterator;"
};

$InnerClassInfo _SortedSet$1_InnerClassesInfo_[] = {
	{"java.util.SortedSet$1", nullptr, nullptr, 0},
	{"java.util.Spliterators$IteratorSpliterator", "java.util.Spliterators", "IteratorSpliterator", $STATIC},
	{}
};

$ClassInfo _SortedSet$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.SortedSet$1",
	"java.util.Spliterators$IteratorSpliterator",
	nullptr,
	_SortedSet$1_FieldInfo_,
	_SortedSet$1_MethodInfo_,
	"Ljava/util/Spliterators$IteratorSpliterator<TE;>;",
	&_SortedSet$1_EnclosingMethodInfo_,
	_SortedSet$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.SortedSet"
};

$Object* allocate$SortedSet$1($Class* clazz) {
	return $of($alloc(SortedSet$1));
}

void SortedSet$1::init$($SortedSet* this$0, $Collection* collection, int32_t characteristics) {
	$set(this, this$0, this$0);
	$Spliterators$IteratorSpliterator::init$(collection, characteristics);
}

$Comparator* SortedSet$1::getComparator() {
	return this->this$0->comparator();
}

SortedSet$1::SortedSet$1() {
}

$Class* SortedSet$1::load$($String* name, bool initialize) {
	$loadClass(SortedSet$1, name, initialize, &_SortedSet$1_ClassInfo_, allocate$SortedSet$1);
	return class$;
}

$Class* SortedSet$1::class$ = nullptr;

	} // util
} // java