#include <java/util/regex/Matcher$1MatchResultIterator.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/function/Consumer.h>
#include <java/util/regex/MatchResult.h>
#include <java/util/regex/Matcher.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Consumer = ::java::util::function::Consumer;
using $MatchResult = ::java::util::regex::MatchResult;
using $Matcher = ::java::util::regex::Matcher;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _Matcher$1MatchResultIterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/regex/Matcher;", nullptr, $FINAL | $SYNTHETIC, $field(Matcher$1MatchResultIterator, this$0)},
	{"state", "I", nullptr, 0, $field(Matcher$1MatchResultIterator, state)},
	{"expectedCount", "I", nullptr, 0, $field(Matcher$1MatchResultIterator, expectedCount)},
	{"textAsString", "Ljava/lang/String;", nullptr, 0, $field(Matcher$1MatchResultIterator, textAsString)},
	{}
};

$MethodInfo _Matcher$1MatchResultIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/regex/Matcher;)V", nullptr, 0, $method(static_cast<void(Matcher$1MatchResultIterator::*)($Matcher*)>(&Matcher$1MatchResultIterator::init$))},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/util/regex/MatchResult;>;)V", $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/util/regex/MatchResult;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Matcher$1MatchResultIterator_EnclosingMethodInfo_ = {
	"java.util.regex.Matcher",
	"results",
	"()Ljava/util/stream/Stream;"
};

$InnerClassInfo _Matcher$1MatchResultIterator_InnerClassesInfo_[] = {
	{"java.util.regex.Matcher$1MatchResultIterator", nullptr, "MatchResultIterator", 0},
	{}
};

$ClassInfo _Matcher$1MatchResultIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.Matcher$1MatchResultIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_Matcher$1MatchResultIterator_FieldInfo_,
	_Matcher$1MatchResultIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/regex/MatchResult;>;",
	&_Matcher$1MatchResultIterator_EnclosingMethodInfo_,
	_Matcher$1MatchResultIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.regex.Matcher"
};

$Object* allocate$Matcher$1MatchResultIterator($Class* clazz) {
	return $of($alloc(Matcher$1MatchResultIterator));
}

void Matcher$1MatchResultIterator::init$($Matcher* this$0) {
	$set(this, this$0, this$0);
	this->state = -1;
	this->expectedCount = -1;
}

$Object* Matcher$1MatchResultIterator::next() {
	if (this->expectedCount >= 0 && this->expectedCount != this->this$0->modCount) {
		$throwNew($ConcurrentModificationException);
	}
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	this->state = -1;
	return $of(this->this$0->toMatchResult(this->textAsString));
}

bool Matcher$1MatchResultIterator::hasNext() {
	if (this->state >= 0) {
		return this->state == 1;
	}
	if (this->expectedCount >= 0 && this->expectedCount != this->this$0->modCount) {
		return true;
	}
	bool found = this->this$0->find();
	if (found && this->state < 0) {
		$set(this, textAsString, $nc(this->this$0->text)->toString());
	}
	this->state = found ? 1 : 0;
	this->expectedCount = this->this$0->modCount;
	return found;
}

void Matcher$1MatchResultIterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	if (this->expectedCount >= 0 && this->expectedCount != this->this$0->modCount) {
		$throwNew($ConcurrentModificationException);
	}
	int32_t s = this->state;
	if (s == 0) {
		return;
	}
	this->state = 0;
	this->expectedCount = -1;
	if (s < 0 && !this->this$0->find()) {
		return;
	}
	$set(this, textAsString, $nc(this->this$0->text)->toString());
	do {
		int32_t ec = this->this$0->modCount;
		$nc(action)->accept($(this->this$0->toMatchResult(this->textAsString)));
		if (ec != this->this$0->modCount) {
			$throwNew($ConcurrentModificationException);
		}
	} while (this->this$0->find());
}

Matcher$1MatchResultIterator::Matcher$1MatchResultIterator() {
}

$Class* Matcher$1MatchResultIterator::load$($String* name, bool initialize) {
	$loadClass(Matcher$1MatchResultIterator, name, initialize, &_Matcher$1MatchResultIterator_ClassInfo_, allocate$Matcher$1MatchResultIterator);
	return class$;
}

$Class* Matcher$1MatchResultIterator::class$ = nullptr;

		} // regex
	} // util
} // java