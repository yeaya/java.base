#include <sun/util/PreHashedMap$1$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <sun/util/PreHashedMap$1.h>
#include <sun/util/PreHashedMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $PreHashedMap = ::sun::util::PreHashedMap;
using $PreHashedMap$1 = ::sun::util::PreHashedMap$1;

namespace sun {
	namespace util {

$FieldInfo _PreHashedMap$1$1_FieldInfo_[] = {
	{"this$1", "Lsun/util/PreHashedMap$1;", nullptr, $FINAL | $SYNTHETIC, $field(PreHashedMap$1$1, this$1)},
	{"i", "I", nullptr, $PRIVATE, $field(PreHashedMap$1$1, i)},
	{"a", "[Ljava/lang/Object;", nullptr, 0, $field(PreHashedMap$1$1, a)},
	{"cur", "Ljava/lang/String;", nullptr, 0, $field(PreHashedMap$1$1, cur)},
	{}
};

$MethodInfo _PreHashedMap$1$1_MethodInfo_[] = {
	{"<init>", "(Lsun/util/PreHashedMap$1;)V", nullptr, 0, $method(static_cast<void(PreHashedMap$1$1::*)($PreHashedMap$1*)>(&PreHashedMap$1$1::init$))},
	{"findNext", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(PreHashedMap$1$1::*)()>(&PreHashedMap$1$1::findNext))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PreHashedMap$1$1_EnclosingMethodInfo_ = {
	"sun.util.PreHashedMap$1",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _PreHashedMap$1$1_InnerClassesInfo_[] = {
	{"sun.util.PreHashedMap$1", nullptr, nullptr, 0},
	{"sun.util.PreHashedMap$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PreHashedMap$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.util.PreHashedMap$1$1",
	"java.lang.Object",
	"java.util.Iterator",
	_PreHashedMap$1$1_FieldInfo_,
	_PreHashedMap$1$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;",
	&_PreHashedMap$1$1_EnclosingMethodInfo_,
	_PreHashedMap$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.PreHashedMap"
};

$Object* allocate$PreHashedMap$1$1($Class* clazz) {
	return $of($alloc(PreHashedMap$1$1));
}

void PreHashedMap$1$1::init$($PreHashedMap$1* this$1) {
	$set(this, this$1, this$1);
	this->i = -1;
	$set(this, a, nullptr);
	$set(this, cur, nullptr);
}

bool PreHashedMap$1$1::findNext() {
	if (this->a != nullptr) {
		if ($nc(this->a)->length == 3) {
			$set(this, a, $cast($ObjectArray, $nc(this->a)->get(2)));
			$set(this, cur, $cast($String, $nc(this->a)->get(0)));
			return true;
		}
		++this->i;
		$set(this, a, nullptr);
	}
	$set(this, cur, nullptr);
	if (this->i >= $nc(this->this$1->this$0)->rows) {
		return false;
	}
	if (this->i < 0 || $nc($nc(this->this$1->this$0)->ht)->get(this->i) == nullptr) {
		do {
			if (++this->i >= $nc(this->this$1->this$0)->rows) {
				return false;
			}
		} while ($nc($nc(this->this$1->this$0)->ht)->get(this->i) == nullptr);
	}
	$set(this, a, $cast($ObjectArray, $nc($nc(this->this$1->this$0)->ht)->get(this->i)));
	$set(this, cur, $cast($String, $nc(this->a)->get(0)));
	return true;
}

bool PreHashedMap$1$1::hasNext() {
	if (this->cur != nullptr) {
		return true;
	}
	return findNext();
}

$Object* PreHashedMap$1$1::next() {
	if (this->cur == nullptr) {
		if (!findNext()) {
			$throwNew($NoSuchElementException);
		}
	}
	$var($String, s, this->cur);
	$set(this, cur, nullptr);
	return $of(s);
}

void PreHashedMap$1$1::remove() {
	$throwNew($UnsupportedOperationException);
}

PreHashedMap$1$1::PreHashedMap$1$1() {
}

$Class* PreHashedMap$1$1::load$($String* name, bool initialize) {
	$loadClass(PreHashedMap$1$1, name, initialize, &_PreHashedMap$1$1_ClassInfo_, allocate$PreHashedMap$1$1);
	return class$;
}

$Class* PreHashedMap$1$1::class$ = nullptr;

	} // util
} // sun