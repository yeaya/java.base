#include <java/util/AbstractList$SubList$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList$SubList.h>
#include <java/util/AbstractList.h>
#include <java/util/ListIterator.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractList$SubList = ::java::util::AbstractList$SubList;
using $ListIterator = ::java::util::ListIterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$FieldInfo _AbstractList$SubList$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/AbstractList$SubList;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractList$SubList$1, this$0)},
	{"val$index", "I", nullptr, $FINAL | $SYNTHETIC, $field(AbstractList$SubList$1, val$index)},
	{"i", "Ljava/util/ListIterator;", "Ljava/util/ListIterator<TE;>;", $PRIVATE | $FINAL, $field(AbstractList$SubList$1, i)},
	{}
};

$MethodInfo _AbstractList$SubList$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/AbstractList$SubList;I)V", "()V", 0, $method(static_cast<void(AbstractList$SubList$1::*)($AbstractList$SubList*,int32_t)>(&AbstractList$SubList$1::init$))},
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

$EnclosingMethodInfo _AbstractList$SubList$1_EnclosingMethodInfo_ = {
	"java.util.AbstractList$SubList",
	"listIterator",
	"(I)Ljava/util/ListIterator;"
};

$InnerClassInfo _AbstractList$SubList$1_InnerClassesInfo_[] = {
	{"java.util.AbstractList$SubList", "java.util.AbstractList", "SubList", $PRIVATE | $STATIC},
	{"java.util.AbstractList$SubList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractList$SubList$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.AbstractList$SubList$1",
	"java.lang.Object",
	"java.util.ListIterator",
	_AbstractList$SubList$1_FieldInfo_,
	_AbstractList$SubList$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/ListIterator<TE;>;",
	&_AbstractList$SubList$1_EnclosingMethodInfo_,
	_AbstractList$SubList$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.AbstractList"
};

$Object* allocate$AbstractList$SubList$1($Class* clazz) {
	return $of($alloc(AbstractList$SubList$1));
}

void AbstractList$SubList$1::init$($AbstractList$SubList* this$0, int32_t val$index) {
	$set(this, this$0, this$0);
	this->val$index = val$index;
	$set(this, i, $nc(this->this$0->root)->listIterator(this->this$0->offset + this->val$index));
}

bool AbstractList$SubList$1::hasNext() {
	return nextIndex() < this->this$0->size$;
}

$Object* AbstractList$SubList$1::next() {
	if (hasNext()) {
		return $of($nc(this->i)->next());
	} else {
		$throwNew($NoSuchElementException);
	}
}

bool AbstractList$SubList$1::hasPrevious() {
	return previousIndex() >= 0;
}

$Object* AbstractList$SubList$1::previous() {
	if (hasPrevious()) {
		return $of($nc(this->i)->previous());
	} else {
		$throwNew($NoSuchElementException);
	}
}

int32_t AbstractList$SubList$1::nextIndex() {
	return $nc(this->i)->nextIndex() - this->this$0->offset;
}

int32_t AbstractList$SubList$1::previousIndex() {
	return $nc(this->i)->previousIndex() - this->this$0->offset;
}

void AbstractList$SubList$1::remove() {
	$nc(this->i)->remove();
	this->this$0->updateSizeAndModCount(-1);
}

void AbstractList$SubList$1::set(Object$* e) {
	$nc(this->i)->set(e);
}

void AbstractList$SubList$1::add(Object$* e) {
	$nc(this->i)->add(e);
	this->this$0->updateSizeAndModCount(1);
}

AbstractList$SubList$1::AbstractList$SubList$1() {
}

$Class* AbstractList$SubList$1::load$($String* name, bool initialize) {
	$loadClass(AbstractList$SubList$1, name, initialize, &_AbstractList$SubList$1_ClassInfo_, allocate$AbstractList$SubList$1);
	return class$;
}

$Class* AbstractList$SubList$1::class$ = nullptr;

	} // util
} // java