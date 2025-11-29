#include <java/util/Collections$UnmodifiableRandomAccessList.h>

#include <java/util/Collections$UnmodifiableList.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections$UnmodifiableList = ::java::util::Collections$UnmodifiableList;
using $List = ::java::util::List;

namespace java {
	namespace util {

$FieldInfo _Collections$UnmodifiableRandomAccessList_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Collections$UnmodifiableRandomAccessList, serialVersionUID)},
	{}
};

$MethodInfo _Collections$UnmodifiableRandomAccessList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<+TE;>;)V", 0, $method(static_cast<void(Collections$UnmodifiableRandomAccessList::*)($List*)>(&Collections$UnmodifiableRandomAccessList::init$))},
	{"subList", "(II)Ljava/util/List;", "(II)Ljava/util/List<TE;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(Collections$UnmodifiableRandomAccessList::*)()>(&Collections$UnmodifiableRandomAccessList::writeReplace))},
	{}
};

$InnerClassInfo _Collections$UnmodifiableRandomAccessList_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableRandomAccessList", "java.util.Collections", "UnmodifiableRandomAccessList", $STATIC},
	{"java.util.Collections$UnmodifiableList", "java.util.Collections", "UnmodifiableList", $STATIC},
	{}
};

$ClassInfo _Collections$UnmodifiableRandomAccessList_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableRandomAccessList",
	"java.util.Collections$UnmodifiableList",
	"java.util.RandomAccess",
	_Collections$UnmodifiableRandomAccessList_FieldInfo_,
	_Collections$UnmodifiableRandomAccessList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/Collections$UnmodifiableList<TE;>;Ljava/util/RandomAccess;",
	nullptr,
	_Collections$UnmodifiableRandomAccessList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableRandomAccessList($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableRandomAccessList));
}

bool Collections$UnmodifiableRandomAccessList::equals(Object$* o) {
	 return this->$Collections$UnmodifiableList::equals(o);
}

int32_t Collections$UnmodifiableRandomAccessList::hashCode() {
	 return this->$Collections$UnmodifiableList::hashCode();
}

$String* Collections$UnmodifiableRandomAccessList::toString() {
	 return this->$Collections$UnmodifiableList::toString();
}

$Object* Collections$UnmodifiableRandomAccessList::clone() {
	 return this->$Collections$UnmodifiableList::clone();
}

void Collections$UnmodifiableRandomAccessList::finalize() {
	this->$Collections$UnmodifiableList::finalize();
}

void Collections$UnmodifiableRandomAccessList::init$($List* list) {
	$Collections$UnmodifiableList::init$(list);
}

$List* Collections$UnmodifiableRandomAccessList::subList(int32_t fromIndex, int32_t toIndex) {
	return $new(Collections$UnmodifiableRandomAccessList, $($nc(this->list)->subList(fromIndex, toIndex)));
}

$Object* Collections$UnmodifiableRandomAccessList::writeReplace() {
	return $of($new($Collections$UnmodifiableList, this->list));
}

Collections$UnmodifiableRandomAccessList::Collections$UnmodifiableRandomAccessList() {
}

$Class* Collections$UnmodifiableRandomAccessList::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableRandomAccessList, name, initialize, &_Collections$UnmodifiableRandomAccessList_ClassInfo_, allocate$Collections$UnmodifiableRandomAccessList);
	return class$;
}

$Class* Collections$UnmodifiableRandomAccessList::class$ = nullptr;

	} // util
} // java