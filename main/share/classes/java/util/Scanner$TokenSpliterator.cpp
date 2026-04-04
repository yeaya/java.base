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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/Scanner;", nullptr, $FINAL | $SYNTHETIC, $field(Scanner$TokenSpliterator, this$0)},
		{"expectedCount", "I", nullptr, 0, $field(Scanner$TokenSpliterator, expectedCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Scanner;)V", nullptr, 0, $method(Scanner$TokenSpliterator, init$, void, $Scanner*)},
		{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/lang/String;>;)Z", $PUBLIC, $virtualMethod(Scanner$TokenSpliterator, tryAdvance, bool, $Consumer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Scanner$TokenSpliterator", "java.util.Scanner", "TokenSpliterator", 0},
		{"java.util.Spliterators$AbstractSpliterator", "java.util.Spliterators", "AbstractSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.Scanner$TokenSpliterator",
		"java.util.Spliterators$AbstractSpliterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/Spliterators$AbstractSpliterator<Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.Scanner"
	};
	$loadClass(Scanner$TokenSpliterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scanner$TokenSpliterator);
	});
	return class$;
}

$Class* Scanner$TokenSpliterator::class$ = nullptr;

	} // util
} // java