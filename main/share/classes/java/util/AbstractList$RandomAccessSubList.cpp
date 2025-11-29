#include <java/util/AbstractList$RandomAccessSubList.h>

#include <java/util/AbstractList$SubList.h>
#include <java/util/AbstractList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractList$SubList = ::java::util::AbstractList$SubList;
using $List = ::java::util::List;

namespace java {
	namespace util {

$MethodInfo _AbstractList$RandomAccessSubList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/AbstractList;II)V", "(Ljava/util/AbstractList<TE;>;II)V", 0, $method(static_cast<void(AbstractList$RandomAccessSubList::*)($AbstractList*,int32_t,int32_t)>(&AbstractList$RandomAccessSubList::init$))},
	{"<init>", "(Ljava/util/AbstractList$RandomAccessSubList;II)V", "(Ljava/util/AbstractList$RandomAccessSubList<TE;>;II)V", 0, $method(static_cast<void(AbstractList$RandomAccessSubList::*)(AbstractList$RandomAccessSubList*,int32_t,int32_t)>(&AbstractList$RandomAccessSubList::init$))},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractList$RandomAccessSubList_InnerClassesInfo_[] = {
	{"java.util.AbstractList$RandomAccessSubList", "java.util.AbstractList", "RandomAccessSubList", $PRIVATE | $STATIC},
	{"java.util.AbstractList$SubList", "java.util.AbstractList", "SubList", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AbstractList$RandomAccessSubList_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.AbstractList$RandomAccessSubList",
	"java.util.AbstractList$SubList",
	"java.util.RandomAccess",
	nullptr,
	_AbstractList$RandomAccessSubList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractList$SubList<TE;>;Ljava/util/RandomAccess;",
	nullptr,
	_AbstractList$RandomAccessSubList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.AbstractList"
};

$Object* allocate$AbstractList$RandomAccessSubList($Class* clazz) {
	return $of($alloc(AbstractList$RandomAccessSubList));
}

bool AbstractList$RandomAccessSubList::equals(Object$* o) {
	 return this->$AbstractList$SubList::equals(o);
}

int32_t AbstractList$RandomAccessSubList::hashCode() {
	 return this->$AbstractList$SubList::hashCode();
}

$String* AbstractList$RandomAccessSubList::toString() {
	 return this->$AbstractList$SubList::toString();
}

$Object* AbstractList$RandomAccessSubList::clone() {
	 return this->$AbstractList$SubList::clone();
}

void AbstractList$RandomAccessSubList::finalize() {
	this->$AbstractList$SubList::finalize();
}

void AbstractList$RandomAccessSubList::init$($AbstractList* root, int32_t fromIndex, int32_t toIndex) {
	$AbstractList$SubList::init$(root, fromIndex, toIndex);
}

void AbstractList$RandomAccessSubList::init$(AbstractList$RandomAccessSubList* parent, int32_t fromIndex, int32_t toIndex) {
	$AbstractList$SubList::init$(static_cast<$AbstractList$SubList*>(parent), fromIndex, toIndex);
}

$List* AbstractList$RandomAccessSubList::subList(int32_t fromIndex, int32_t toIndex) {
	subListRangeCheck(fromIndex, toIndex, this->size$);
	return $new(AbstractList$RandomAccessSubList, this, fromIndex, toIndex);
}

AbstractList$RandomAccessSubList::AbstractList$RandomAccessSubList() {
}

$Class* AbstractList$RandomAccessSubList::load$($String* name, bool initialize) {
	$loadClass(AbstractList$RandomAccessSubList, name, initialize, &_AbstractList$RandomAccessSubList_ClassInfo_, allocate$AbstractList$RandomAccessSubList);
	return class$;
}

$Class* AbstractList$RandomAccessSubList::class$ = nullptr;

	} // util
} // java