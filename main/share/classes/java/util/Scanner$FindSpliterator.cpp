#include <java/util/Scanner$FindSpliterator.h>

#include <java/nio/Buffer.h>
#include <java/nio/CharBuffer.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/Scanner.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$AbstractSpliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/regex/MatchResult.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
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
using $CharBuffer = ::java::nio::CharBuffer;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $Scanner = ::java::util::Scanner;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators$AbstractSpliterator = ::java::util::Spliterators$AbstractSpliterator;
using $Consumer = ::java::util::function::Consumer;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;

namespace java {
	namespace util {

$FieldInfo _Scanner$FindSpliterator_FieldInfo_[] = {
	{"this$0", "Ljava/util/Scanner;", nullptr, $FINAL | $SYNTHETIC, $field(Scanner$FindSpliterator, this$0)},
	{"pattern", "Ljava/util/regex/Pattern;", nullptr, $FINAL, $field(Scanner$FindSpliterator, pattern)},
	{"expectedCount", "I", nullptr, 0, $field(Scanner$FindSpliterator, expectedCount)},
	{"advance", "Z", nullptr, $PRIVATE, $field(Scanner$FindSpliterator, advance)},
	{}
};

$MethodInfo _Scanner$FindSpliterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Scanner;Ljava/util/regex/Pattern;)V", nullptr, 0, $method(static_cast<void(Scanner$FindSpliterator::*)($Scanner*,$Pattern*)>(&Scanner$FindSpliterator::init$))},
	{"nextInBuffer", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(Scanner$FindSpliterator::*)()>(&Scanner$FindSpliterator::nextInBuffer))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/util/regex/MatchResult;>;)Z", $PUBLIC},
	{}
};

$InnerClassInfo _Scanner$FindSpliterator_InnerClassesInfo_[] = {
	{"java.util.Scanner$FindSpliterator", "java.util.Scanner", "FindSpliterator", 0},
	{"java.util.Spliterators$AbstractSpliterator", "java.util.Spliterators", "AbstractSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Scanner$FindSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Scanner$FindSpliterator",
	"java.util.Spliterators$AbstractSpliterator",
	nullptr,
	_Scanner$FindSpliterator_FieldInfo_,
	_Scanner$FindSpliterator_MethodInfo_,
	"Ljava/util/Spliterators$AbstractSpliterator<Ljava/util/regex/MatchResult;>;",
	nullptr,
	_Scanner$FindSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Scanner"
};

$Object* allocate$Scanner$FindSpliterator($Class* clazz) {
	return $of($alloc(Scanner$FindSpliterator));
}

void Scanner$FindSpliterator::init$($Scanner* this$0, $Pattern* pattern) {
	$set(this, this$0, this$0);
	$Spliterators$AbstractSpliterator::init$($Long::MAX_VALUE, ($Spliterator::IMMUTABLE | $Spliterator::NONNULL) | $Spliterator::ORDERED);
	this->expectedCount = -1;
	this->advance = false;
	$set(this, pattern, pattern);
}

bool Scanner$FindSpliterator::tryAdvance($Consumer* cons) {
	$useLocalCurrentObjectStackCache();
	this->this$0->ensureOpen();
	if (this->expectedCount >= 0) {
		if (this->expectedCount != this->this$0->modCount) {
			$throwNew($ConcurrentModificationException);
		}
	} else {
		this->this$0->matchValid = false;
		$nc(this->this$0->matcher)->usePattern(this->pattern);
		this->expectedCount = this->this$0->modCount;
	}
	while (true) {
		if (nextInBuffer()) {
			$nc(cons)->accept($($nc(this->this$0->matcher)->toMatchResult()));
			if (this->expectedCount != this->this$0->modCount) {
				$throwNew($ConcurrentModificationException);
			}
			return true;
		}
		if (this->this$0->needInput) {
			this->this$0->readInput();
		} else {
			return false;
		}
	}
}

bool Scanner$FindSpliterator::nextInBuffer() {
	if (this->advance) {
		if (this->this$0->position + 1 > $nc(this->this$0->buf)->limit()) {
			if (!this->this$0->sourceClosed) {
				this->this$0->needInput = true;
			}
			return false;
		}
		++this->this$0->position;
		this->advance = false;
	}
	$nc(this->this$0->matcher)->region(this->this$0->position, $nc(this->this$0->buf)->limit());
	bool var$0 = $nc(this->this$0->matcher)->find();
	if (var$0 && (!$nc(this->this$0->matcher)->hitEnd() || this->this$0->sourceClosed)) {
		this->this$0->position = $nc(this->this$0->matcher)->end();
		this->advance = $nc(this->this$0->matcher)->start() == this->this$0->position;
		return true;
	}
	if (!this->this$0->sourceClosed) {
		this->this$0->needInput = true;
	}
	return false;
}

Scanner$FindSpliterator::Scanner$FindSpliterator() {
}

$Class* Scanner$FindSpliterator::load$($String* name, bool initialize) {
	$loadClass(Scanner$FindSpliterator, name, initialize, &_Scanner$FindSpliterator_ClassInfo_, allocate$Scanner$FindSpliterator);
	return class$;
}

$Class* Scanner$FindSpliterator::class$ = nullptr;

	} // util
} // java