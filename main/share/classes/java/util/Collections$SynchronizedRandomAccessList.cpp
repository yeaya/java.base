#include <java/util/Collections$SynchronizedRandomAccessList.h>

#include <java/util/Collections$SynchronizedCollection.h>
#include <java/util/Collections$SynchronizedList.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections$SynchronizedList = ::java::util::Collections$SynchronizedList;
using $List = ::java::util::List;

namespace java {
	namespace util {

$FieldInfo _Collections$SynchronizedRandomAccessList_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$SynchronizedRandomAccessList, serialVersionUID)},
	{}
};

$MethodInfo _Collections$SynchronizedRandomAccessList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<TE;>;)V", 0, $method(Collections$SynchronizedRandomAccessList, init$, void, $List*)},
	{"<init>", "(Ljava/util/List;Ljava/lang/Object;)V", "(Ljava/util/List<TE;>;Ljava/lang/Object;)V", 0, $method(Collections$SynchronizedRandomAccessList, init$, void, $List*, Object$*)},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC, $virtualMethod(Collections$SynchronizedRandomAccessList, subList, $List*, int32_t, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(Collections$SynchronizedRandomAccessList, writeReplace, $Object*)},
	{}
};

$InnerClassInfo _Collections$SynchronizedRandomAccessList_InnerClassesInfo_[] = {
	{"java.util.Collections$SynchronizedRandomAccessList", "java.util.Collections", "SynchronizedRandomAccessList", $STATIC},
	{"java.util.Collections$SynchronizedList", "java.util.Collections", "SynchronizedList", $STATIC},
	{}
};

$ClassInfo _Collections$SynchronizedRandomAccessList_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$SynchronizedRandomAccessList",
	"java.util.Collections$SynchronizedList",
	"java.util.RandomAccess",
	_Collections$SynchronizedRandomAccessList_FieldInfo_,
	_Collections$SynchronizedRandomAccessList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$SynchronizedList<TE;>;Ljava/util/RandomAccess;",
	nullptr,
	_Collections$SynchronizedRandomAccessList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$SynchronizedRandomAccessList($Class* clazz) {
	return $of($alloc(Collections$SynchronizedRandomAccessList));
}

bool Collections$SynchronizedRandomAccessList::equals(Object$* o) {
	 return this->$Collections$SynchronizedList::equals(o);
}

int32_t Collections$SynchronizedRandomAccessList::hashCode() {
	 return this->$Collections$SynchronizedList::hashCode();
}

$String* Collections$SynchronizedRandomAccessList::toString() {
	 return this->$Collections$SynchronizedList::toString();
}

$Object* Collections$SynchronizedRandomAccessList::clone() {
	 return this->$Collections$SynchronizedList::clone();
}

void Collections$SynchronizedRandomAccessList::finalize() {
	this->$Collections$SynchronizedList::finalize();
}

void Collections$SynchronizedRandomAccessList::init$($List* list) {
	$Collections$SynchronizedList::init$(list);
}

void Collections$SynchronizedRandomAccessList::init$($List* list, Object$* mutex) {
	$Collections$SynchronizedList::init$(list, mutex);
}

$List* Collections$SynchronizedRandomAccessList::subList(int32_t fromIndex, int32_t toIndex) {
	$synchronized(this->mutex) {
		return $new(Collections$SynchronizedRandomAccessList, $($nc(this->list)->subList(fromIndex, toIndex)), this->mutex);
	}
}

$Object* Collections$SynchronizedRandomAccessList::writeReplace() {
	return $of($new($Collections$SynchronizedList, this->list));
}

Collections$SynchronizedRandomAccessList::Collections$SynchronizedRandomAccessList() {
}

$Class* Collections$SynchronizedRandomAccessList::load$($String* name, bool initialize) {
	$loadClass(Collections$SynchronizedRandomAccessList, name, initialize, &_Collections$SynchronizedRandomAccessList_ClassInfo_, allocate$Collections$SynchronizedRandomAccessList);
	return class$;
}

$Class* Collections$SynchronizedRandomAccessList::class$ = nullptr;

	} // util
} // java