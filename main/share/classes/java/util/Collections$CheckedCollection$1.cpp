#include <java/util/Collections$CheckedCollection$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections$CheckedCollection.h>
#include <java/util/Iterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections$CheckedCollection = ::java::util::Collections$CheckedCollection;
using $Iterator = ::java::util::Iterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Collections$CheckedCollection$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/Collections$CheckedCollection;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$CheckedCollection$1, this$0)},
	{"val$it", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$CheckedCollection$1, val$it)},
	{}
};

$MethodInfo _Collections$CheckedCollection$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Collections$CheckedCollection;Ljava/util/Iterator;)V", "()V", 0, $method(static_cast<void(Collections$CheckedCollection$1::*)($Collections$CheckedCollection*,$Iterator*)>(&Collections$CheckedCollection$1::init$))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Collections$CheckedCollection$1_EnclosingMethodInfo_ = {
	"java.util.Collections$CheckedCollection",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _Collections$CheckedCollection$1_InnerClassesInfo_[] = {
	{"java.util.Collections$CheckedCollection", "java.util.Collections", "CheckedCollection", $STATIC},
	{"java.util.Collections$CheckedCollection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Collections$CheckedCollection$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$CheckedCollection$1",
	"java.lang.Object",
	"java.util.Iterator",
	_Collections$CheckedCollection$1_FieldInfo_,
	_Collections$CheckedCollection$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	&_Collections$CheckedCollection$1_EnclosingMethodInfo_,
	_Collections$CheckedCollection$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$CheckedCollection$1($Class* clazz) {
	return $of($alloc(Collections$CheckedCollection$1));
}

void Collections$CheckedCollection$1::init$($Collections$CheckedCollection* this$0, $Iterator* val$it) {
	$set(this, this$0, this$0);
	$set(this, val$it, val$it);
}

bool Collections$CheckedCollection$1::hasNext() {
	return $nc(this->val$it)->hasNext();
}

$Object* Collections$CheckedCollection$1::next() {
	return $of($nc(this->val$it)->next());
}

void Collections$CheckedCollection$1::remove() {
	$nc(this->val$it)->remove();
}

void Collections$CheckedCollection$1::forEachRemaining($Consumer* action) {
	$nc(this->val$it)->forEachRemaining(action);
}

Collections$CheckedCollection$1::Collections$CheckedCollection$1() {
}

$Class* Collections$CheckedCollection$1::load$($String* name, bool initialize) {
	$loadClass(Collections$CheckedCollection$1, name, initialize, &_Collections$CheckedCollection$1_ClassInfo_, allocate$Collections$CheckedCollection$1);
	return class$;
}

$Class* Collections$CheckedCollection$1::class$ = nullptr;

	} // util
} // java