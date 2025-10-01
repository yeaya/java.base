#include <java/util/ImmutableCollections$Set12$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ImmutableCollections$Set12.h>
#include <java/util/ImmutableCollections.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef REVERSE
#undef EMPTY

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImmutableCollections = ::java::util::ImmutableCollections;
using $ImmutableCollections$Set12 = ::java::util::ImmutableCollections$Set12;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$FieldInfo _ImmutableCollections$Set12$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/ImmutableCollections$Set12;", nullptr, $FINAL | $SYNTHETIC, $field(ImmutableCollections$Set12$1, this$0)},
	{"idx", "I", nullptr, $PRIVATE, $field(ImmutableCollections$Set12$1, idx)},
	{}
};

$MethodInfo _ImmutableCollections$Set12$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ImmutableCollections$Set12;)V", nullptr, 0, $method(static_cast<void(ImmutableCollections$Set12$1::*)($ImmutableCollections$Set12*)>(&ImmutableCollections$Set12$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ImmutableCollections$Set12$1_EnclosingMethodInfo_ = {
	"java.util.ImmutableCollections$Set12",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _ImmutableCollections$Set12$1_InnerClassesInfo_[] = {
	{"java.util.ImmutableCollections$Set12", "java.util.ImmutableCollections", "Set12", $STATIC | $FINAL},
	{"java.util.ImmutableCollections$Set12$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImmutableCollections$Set12$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ImmutableCollections$Set12$1",
	"java.lang.Object",
	"java.util.Iterator",
	_ImmutableCollections$Set12$1_FieldInfo_,
	_ImmutableCollections$Set12$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	&_ImmutableCollections$Set12$1_EnclosingMethodInfo_,
	_ImmutableCollections$Set12$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ImmutableCollections"
};

$Object* allocate$ImmutableCollections$Set12$1($Class* clazz) {
	return $of($alloc(ImmutableCollections$Set12$1));
}

void ImmutableCollections$Set12$1::init$($ImmutableCollections$Set12* this$0) {
	$set(this, this$0, this$0);
	$init($ImmutableCollections);
	this->idx = ($equals(this->this$0->e1, $ImmutableCollections::EMPTY)) ? 1 : 2;
}

bool ImmutableCollections$Set12$1::hasNext() {
	return this->idx > 0;
}

$Object* ImmutableCollections$Set12$1::next() {
	if (this->idx == 1) {
		this->idx = 0;
		$init($ImmutableCollections);
		return $of(($ImmutableCollections::REVERSE || $equals(this->this$0->e1, $ImmutableCollections::EMPTY)) ? this->this$0->e0 : this->this$0->e1);
	} else if (this->idx == 2) {
		this->idx = 1;
		$init($ImmutableCollections);
		return $of($ImmutableCollections::REVERSE ? this->this$0->e1 : this->this$0->e0);
	} else {
		$throwNew($NoSuchElementException);
	}
}

ImmutableCollections$Set12$1::ImmutableCollections$Set12$1() {
}

$Class* ImmutableCollections$Set12$1::load$($String* name, bool initialize) {
	$loadClass(ImmutableCollections$Set12$1, name, initialize, &_ImmutableCollections$Set12$1_ClassInfo_, allocate$ImmutableCollections$Set12$1);
	return class$;
}

$Class* ImmutableCollections$Set12$1::class$ = nullptr;

	} // util
} // java