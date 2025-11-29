#include <java/util/HashMap$KeyIterator.h>

#include <java/util/HashMap$HashIterator.h>
#include <java/util/HashMap$Node.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $HashMap$HashIterator = ::java::util::HashMap$HashIterator;

namespace java {
	namespace util {

$FieldInfo _HashMap$KeyIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/HashMap;", nullptr, $FINAL | $SYNTHETIC, $field(HashMap$KeyIterator, this$0)},
	{}
};

$MethodInfo _HashMap$KeyIterator_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hasNext", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/HashMap;)V", nullptr, 0, $method(static_cast<void(HashMap$KeyIterator::*)($HashMap*)>(&HashMap$KeyIterator::init$))},
	{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $FINAL},
	{"*remove", "()V", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HashMap$KeyIterator_InnerClassesInfo_[] = {
	{"java.util.HashMap$KeyIterator", "java.util.HashMap", "KeyIterator", $FINAL},
	{"java.util.HashMap$HashIterator", "java.util.HashMap", "HashIterator", $ABSTRACT},
	{}
};

$ClassInfo _HashMap$KeyIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.HashMap$KeyIterator",
	"java.util.HashMap$HashIterator",
	"java.util.Iterator",
	_HashMap$KeyIterator_FieldInfo_,
	_HashMap$KeyIterator_MethodInfo_,
	"Ljava/util/HashMap<TK;TV;>.HashIterator;Ljava/util/Iterator<TK;>;",
	nullptr,
	_HashMap$KeyIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.HashMap"
};

$Object* allocate$HashMap$KeyIterator($Class* clazz) {
	return $of($alloc(HashMap$KeyIterator));
}

bool HashMap$KeyIterator::hasNext() {
	 return this->$HashMap$HashIterator::hasNext();
}

void HashMap$KeyIterator::remove() {
	this->$HashMap$HashIterator::remove();
}

int32_t HashMap$KeyIterator::hashCode() {
	 return this->$HashMap$HashIterator::hashCode();
}

bool HashMap$KeyIterator::equals(Object$* obj) {
	 return this->$HashMap$HashIterator::equals(obj);
}

$Object* HashMap$KeyIterator::clone() {
	 return this->$HashMap$HashIterator::clone();
}

$String* HashMap$KeyIterator::toString() {
	 return this->$HashMap$HashIterator::toString();
}

void HashMap$KeyIterator::finalize() {
	this->$HashMap$HashIterator::finalize();
}

void HashMap$KeyIterator::init$($HashMap* this$0) {
	$set(this, this$0, this$0);
	$HashMap$HashIterator::init$(this$0);
}

$Object* HashMap$KeyIterator::next() {
	return $of($nc($(nextNode()))->key);
}

HashMap$KeyIterator::HashMap$KeyIterator() {
}

$Class* HashMap$KeyIterator::load$($String* name, bool initialize) {
	$loadClass(HashMap$KeyIterator, name, initialize, &_HashMap$KeyIterator_ClassInfo_, allocate$HashMap$KeyIterator);
	return class$;
}

$Class* HashMap$KeyIterator::class$ = nullptr;

	} // util
} // java