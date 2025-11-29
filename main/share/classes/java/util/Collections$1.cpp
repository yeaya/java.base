#include <java/util/Collections$1.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Collections.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Objects.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Objects = ::java::util::Objects;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Collections$1_FieldInfo_[] = {
	{"val$e", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$1, val$e)},
	{"hasNext", "Z", nullptr, $PRIVATE, $field(Collections$1, hasNext$)},
	{}
};

$MethodInfo _Collections$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "()V", 0, $method(static_cast<void(Collections$1::*)(Object$*)>(&Collections$1::init$))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Collections$1_EnclosingMethodInfo_ = {
	"java.util.Collections",
	"singletonIterator",
	"(Ljava/lang/Object;)Ljava/util/Iterator;"
};

$InnerClassInfo _Collections$1_InnerClassesInfo_[] = {
	{"java.util.Collections$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Collections$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$1",
	"java.lang.Object",
	"java.util.Iterator",
	_Collections$1_FieldInfo_,
	_Collections$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	&_Collections$1_EnclosingMethodInfo_,
	_Collections$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$1($Class* clazz) {
	return $of($alloc(Collections$1));
}

void Collections$1::init$(Object$* val$e) {
	$set(this, val$e, val$e);
	this->hasNext$ = true;
}

bool Collections$1::hasNext() {
	return this->hasNext$;
}

$Object* Collections$1::next() {
	if (this->hasNext$) {
		this->hasNext$ = false;
		return $of(this->val$e);
	}
	$throwNew($NoSuchElementException);
}

void Collections$1::remove() {
	$throwNew($UnsupportedOperationException);
}

void Collections$1::forEachRemaining($Consumer* action) {
	$Objects::requireNonNull(action);
	if (this->hasNext$) {
		this->hasNext$ = false;
		action->accept(this->val$e);
	}
}

Collections$1::Collections$1() {
}

$Class* Collections$1::load$($String* name, bool initialize) {
	$loadClass(Collections$1, name, initialize, &_Collections$1_ClassInfo_, allocate$Collections$1);
	return class$;
}

$Class* Collections$1::class$ = nullptr;

	} // util
} // java