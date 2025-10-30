#include <java/util/Scanner$TokenSpliterator.h>

#include <java/util/ConcurrentModificationException.h>
#include <java/util/Scanner.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$AbstractSpliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef IMMUTABLE
#undef MAX_VALUE
#undef NONNULL
#undef ORDERED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Scanner = ::java::util::Scanner;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators$AbstractSpliterator = ::java::util::Spliterators$AbstractSpliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Scanner$TokenSpliterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/Scanner;", nullptr, $FINAL | $SYNTHETIC, $field(Scanner$TokenSpliterator, this$0)},
	{"expectedCount", "I", nullptr, 0, $field(Scanner$TokenSpliterator, expectedCount)},
	{}
};

$MethodInfo _Scanner$TokenSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Scanner;)V", nullptr, 0, $method(static_cast<void(Scanner$TokenSpliterator::*)($Scanner*)>(&Scanner$TokenSpliterator::init$))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/lang/String;>;)Z", $PUBLIC},
	{}
};

$InnerClassInfo _Scanner$TokenSpliterator_InnerClassesInfo_[] = {
	{"java.util.Scanner$TokenSpliterator", "java.util.Scanner", "TokenSpliterator", 0},
	{"java.util.Spliterators$AbstractSpliterator", "java.util.Spliterators", "AbstractSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Scanner$TokenSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Scanner$TokenSpliterator",
	"java.util.Spliterators$AbstractSpliterator",
	nullptr,
	_Scanner$TokenSpliterator_FieldInfo_,
	_Scanner$TokenSpliterator_MethodInfo_,
	"Ljava/util/Spliterators$AbstractSpliterator<Ljava/lang/String;>;",
	nullptr,
	_Scanner$TokenSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Scanner"
};

$Object* allocate$Scanner$TokenSpliterator($Class* clazz) {
	return $of($alloc(Scanner$TokenSpliterator));
}

void Scanner$TokenSpliterator::init$($Scanner* this$0) {
	$set(this, this$0, this$0);
	$Spliterators$AbstractSpliterator::init$($Long::MAX_VALUE, ($Spliterator::IMMUTABLE | $Spliterator::NONNULL) | $Spliterator::ORDERED);
	this->expectedCount = -1;
}

bool Scanner$TokenSpliterator::tryAdvance($Consumer* cons) {
	if (this->expectedCount >= 0 && this->expectedCount != this->this$0->modCount) {
		$throwNew($ConcurrentModificationException);
	}
	if (this->this$0->hasNext()) {
		$var($String, token, $cast($String, this->this$0->next()));
		this->expectedCount = this->this$0->modCount;
		$nc(cons)->accept(token);
		if (this->expectedCount != this->this$0->modCount) {
			$throwNew($ConcurrentModificationException);
		}
		return true;
	} else {
		this->expectedCount = this->this$0->modCount;
		return false;
	}
}

Scanner$TokenSpliterator::Scanner$TokenSpliterator() {
}

$Class* Scanner$TokenSpliterator::load$($String* name, bool initialize) {
	$loadClass(Scanner$TokenSpliterator, name, initialize, &_Scanner$TokenSpliterator_ClassInfo_, allocate$Scanner$TokenSpliterator);
	return class$;
}

$Class* Scanner$TokenSpliterator::class$ = nullptr;

	} // util
} // java