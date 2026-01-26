#include <java/util/Collections$UnmodifiableCollection$1.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Collection.h>
#include <java/util/Collections$UnmodifiableCollection.h>
#include <java/util/Iterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Collection = ::java::util::Collection;
using $Collections$UnmodifiableCollection = ::java::util::Collections$UnmodifiableCollection;
using $Iterator = ::java::util::Iterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Collections$UnmodifiableCollection$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/Collections$UnmodifiableCollection;", nullptr, $FINAL | $SYNTHETIC, $field(Collections$UnmodifiableCollection$1, this$0)},
	{"i", "Ljava/util/Iterator;", "Ljava/util/Iterator<+TE;>;", $PRIVATE | $FINAL, $field(Collections$UnmodifiableCollection$1, i)},
	{}
};

$MethodInfo _Collections$UnmodifiableCollection$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Collections$UnmodifiableCollection;)V", nullptr, 0, $method(Collections$UnmodifiableCollection$1, init$, void, $Collections$UnmodifiableCollection*)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TE;>;)V", $PUBLIC, $virtualMethod(Collections$UnmodifiableCollection$1, forEachRemaining, void, $Consumer*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Collections$UnmodifiableCollection$1, hasNext, bool)},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Collections$UnmodifiableCollection$1, next, $Object*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(Collections$UnmodifiableCollection$1, remove, void)},
	{}
};

$EnclosingMethodInfo _Collections$UnmodifiableCollection$1_EnclosingMethodInfo_ = {
	"java.util.Collections$UnmodifiableCollection",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _Collections$UnmodifiableCollection$1_InnerClassesInfo_[] = {
	{"java.util.Collections$UnmodifiableCollection", "java.util.Collections", "UnmodifiableCollection", $STATIC},
	{"java.util.Collections$UnmodifiableCollection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Collections$UnmodifiableCollection$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Collections$UnmodifiableCollection$1",
	"java.lang.Object",
	"java.util.Iterator",
	_Collections$UnmodifiableCollection$1_FieldInfo_,
	_Collections$UnmodifiableCollection$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	&_Collections$UnmodifiableCollection$1_EnclosingMethodInfo_,
	_Collections$UnmodifiableCollection$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Collections"
};

$Object* allocate$Collections$UnmodifiableCollection$1($Class* clazz) {
	return $of($alloc(Collections$UnmodifiableCollection$1));
}

void Collections$UnmodifiableCollection$1::init$($Collections$UnmodifiableCollection* this$0) {
	$set(this, this$0, this$0);
	$set(this, i, $nc(this->this$0->c)->iterator());
}

bool Collections$UnmodifiableCollection$1::hasNext() {
	return $nc(this->i)->hasNext();
}

$Object* Collections$UnmodifiableCollection$1::next() {
	return $of($nc(this->i)->next());
}

void Collections$UnmodifiableCollection$1::remove() {
	$throwNew($UnsupportedOperationException);
}

void Collections$UnmodifiableCollection$1::forEachRemaining($Consumer* action) {
	$nc(this->i)->forEachRemaining(action);
}

Collections$UnmodifiableCollection$1::Collections$UnmodifiableCollection$1() {
}

$Class* Collections$UnmodifiableCollection$1::load$($String* name, bool initialize) {
	$loadClass(Collections$UnmodifiableCollection$1, name, initialize, &_Collections$UnmodifiableCollection$1_ClassInfo_, allocate$Collections$UnmodifiableCollection$1);
	return class$;
}

$Class* Collections$UnmodifiableCollection$1::class$ = nullptr;

	} // util
} // java