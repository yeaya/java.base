#include <java/util/Collections$CheckedRandomAccessList.h>

#include <java/util/Collections$CheckedCollection.h>
#include <java/util/Collections$CheckedList.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections$CheckedList = ::java::util::Collections$CheckedList;
using $List = ::java::util::List;

namespace java {
	namespace util {

$FieldInfo _Collections$CheckedRandomAccessList_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$CheckedRandomAccessList, serialVersionUID)},
	{}
};

$MethodInfo _Collections$CheckedRandomAccessList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/List;Ljava/lang/Class;)V", "(Ljava/util/List<TE;>;Ljava/lang/Class<TE;>;)V", 0, $method(Collections$CheckedRandomAccessList, init$, void, $List*, $Class*)},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC, $virtualMethod(Collections$CheckedRandomAccessList, subList, $List*, int32_t, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Collections$CheckedRandomAccessList_InnerClassesInfo_[] = {
	{"java.util.Collections$CheckedRandomAccessList", "java.util.Collections", "CheckedRandomAccessList", $STATIC},
	{"java.util.Collections$CheckedList", "java.util.Collections", "CheckedList", $STATIC},
	{}
};

$ClassInfo _Collections$CheckedRandomAccessList_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$CheckedRandomAccessList",
	"java.util.Collections$CheckedList",
	"java.util.RandomAccess",
	_Collections$CheckedRandomAccessList_FieldInfo_,
	_Collections$CheckedRandomAccessList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$CheckedList<TE;>;Ljava/util/RandomAccess;",
	nullptr,
	_Collections$CheckedRandomAccessList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$CheckedRandomAccessList($Class* clazz) {
	return $of($alloc(Collections$CheckedRandomAccessList));
}

bool Collections$CheckedRandomAccessList::equals(Object$* o) {
	 return this->$Collections$CheckedList::equals(o);
}

int32_t Collections$CheckedRandomAccessList::hashCode() {
	 return this->$Collections$CheckedList::hashCode();
}

$String* Collections$CheckedRandomAccessList::toString() {
	 return this->$Collections$CheckedList::toString();
}

$Object* Collections$CheckedRandomAccessList::clone() {
	 return this->$Collections$CheckedList::clone();
}

void Collections$CheckedRandomAccessList::finalize() {
	this->$Collections$CheckedList::finalize();
}

void Collections$CheckedRandomAccessList::init$($List* list, $Class* type) {
	$Collections$CheckedList::init$(list, type);
}

$List* Collections$CheckedRandomAccessList::subList(int32_t fromIndex, int32_t toIndex) {
	return $new(Collections$CheckedRandomAccessList, $($nc(this->list)->subList(fromIndex, toIndex)), this->type);
}

Collections$CheckedRandomAccessList::Collections$CheckedRandomAccessList() {
}

$Class* Collections$CheckedRandomAccessList::load$($String* name, bool initialize) {
	$loadClass(Collections$CheckedRandomAccessList, name, initialize, &_Collections$CheckedRandomAccessList_ClassInfo_, allocate$Collections$CheckedRandomAccessList);
	return class$;
}

$Class* Collections$CheckedRandomAccessList::class$ = nullptr;

	} // util
} // java