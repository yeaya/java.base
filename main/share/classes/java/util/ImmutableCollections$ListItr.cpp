#include <java/util/ImmutableCollections$ListItr.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/List.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $List = ::java::util::List;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$CompoundAttribute _ImmutableCollections$ListItr_FieldAnnotations_list[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _ImmutableCollections$ListItr_FieldAnnotations_size[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$CompoundAttribute _ImmutableCollections$ListItr_FieldAnnotations_isListIterator[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _ImmutableCollections$ListItr_FieldInfo_[] = {
	{"list", "Ljava/util/List;", "Ljava/util/List<TE;>;", $PRIVATE | $FINAL, $field(ImmutableCollections$ListItr, list), _ImmutableCollections$ListItr_FieldAnnotations_list},
	{"size", "I", nullptr, $PRIVATE | $FINAL, $field(ImmutableCollections$ListItr, size), _ImmutableCollections$ListItr_FieldAnnotations_size},
	{"isListIterator", "Z", nullptr, $PRIVATE | $FINAL, $field(ImmutableCollections$ListItr, isListIterator), _ImmutableCollections$ListItr_FieldAnnotations_isListIterator},
	{"cursor", "I", nullptr, $PRIVATE, $field(ImmutableCollections$ListItr, cursor)},
	{}
};

$MethodInfo _ImmutableCollections$ListItr_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;I)V", "(Ljava/util/List<TE;>;I)V", 0, $method(static_cast<void(ImmutableCollections$ListItr::*)($List*,int32_t)>(&ImmutableCollections$ListItr::init$))},
	{"<init>", "(Ljava/util/List;II)V", "(Ljava/util/List<TE;>;II)V", 0, $method(static_cast<void(ImmutableCollections$ListItr::*)($List*,int32_t,int32_t)>(&ImmutableCollections$ListItr::init$))},
	{"add", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"hasPrevious", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"nextIndex", "()I", nullptr, $PUBLIC},
	{"previous", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"previousIndex", "()I", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{}
};

$InnerClassInfo _ImmutableCollections$ListItr_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$ListItr", "java.util.ImmutableCollections", "ListItr", $STATIC | $FINAL},
	{}
};

$ClassInfo _ImmutableCollections$ListItr_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ImmutableCollections$ListItr",
	"java.lang.Object",
	"java.util.ListIterator",
	_ImmutableCollections$ListItr_FieldInfo_,
	_ImmutableCollections$ListItr_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/ListIterator<TE;>;",
	nullptr,
	_ImmutableCollections$ListItr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$ListItr($Class* clazz) {
	return $of($alloc(ImmutableCollections$ListItr));
}

void ImmutableCollections$ListItr::init$($List* list, int32_t size) {
	$set(this, list, list);
	this->size = size;
	this->cursor = 0;
	this->isListIterator = false;
}

void ImmutableCollections$ListItr::init$($List* list, int32_t size, int32_t index) {
	$set(this, list, list);
	this->size = size;
	this->cursor = index;
	this->isListIterator = true;
}

bool ImmutableCollections$ListItr::hasNext() {
	return this->cursor != this->size;
}

$Object* ImmutableCollections$ListItr::next() {
	try {
		int32_t i = this->cursor;
		$var($Object, next, $nc(this->list)->get(i));
		this->cursor = i + 1;
		return $of(next);
	} catch ($IndexOutOfBoundsException& e) {
		$throwNew($NoSuchElementException);
	}
	$shouldNotReachHere();
}

void ImmutableCollections$ListItr::remove() {
	$throw($($ImmutableCollections::uoe()));
}

bool ImmutableCollections$ListItr::hasPrevious() {
	if (!this->isListIterator) {
		$throw($($ImmutableCollections::uoe()));
	}
	return this->cursor != 0;
}

$Object* ImmutableCollections$ListItr::previous() {
	$useLocalCurrentObjectStackCache();
	if (!this->isListIterator) {
		$throw($($ImmutableCollections::uoe()));
	}
	try {
		int32_t i = this->cursor - 1;
		$var($Object, previous, $nc(this->list)->get(i));
		this->cursor = i;
		return $of(previous);
	} catch ($IndexOutOfBoundsException& e) {
		$throwNew($NoSuchElementException);
	}
	$shouldNotReachHere();
}

int32_t ImmutableCollections$ListItr::nextIndex() {
	if (!this->isListIterator) {
		$throw($($ImmutableCollections::uoe()));
	}
	return this->cursor;
}

int32_t ImmutableCollections$ListItr::previousIndex() {
	if (!this->isListIterator) {
		$throw($($ImmutableCollections::uoe()));
	}
	return this->cursor - 1;
}

void ImmutableCollections$ListItr::set(Object$* e) {
	$throw($($ImmutableCollections::uoe()));
}

void ImmutableCollections$ListItr::add(Object$* e) {
	$throw($($ImmutableCollections::uoe()));
}

ImmutableCollections$ListItr::ImmutableCollections$ListItr() {
}

$Class* ImmutableCollections$ListItr::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$ListItr, name, initialize, &_ImmutableCollections$ListItr_ClassInfo_, allocate$ImmutableCollections$ListItr);
	return class$;
}

$Class* ImmutableCollections$ListItr::class$ = nullptr;

	} // util
} // java