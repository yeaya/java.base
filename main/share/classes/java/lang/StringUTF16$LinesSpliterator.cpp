#include <java/lang/StringUTF16$LinesSpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringUTF16.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef IMMUTABLE
#undef NONNULL
#undef ORDERED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StringUTF16 = ::java::lang::StringUTF16;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace lang {

$FieldInfo _StringUTF16$LinesSpliterator_FieldInfo_[] = {
	{"value", "[B", nullptr, $PRIVATE, $field(StringUTF16$LinesSpliterator, value)},
	{"index", "I", nullptr, $PRIVATE, $field(StringUTF16$LinesSpliterator, index)},
	{"fence", "I", nullptr, $PRIVATE | $FINAL, $field(StringUTF16$LinesSpliterator, fence)},
	{}
};

$MethodInfo _StringUTF16$LinesSpliterator_MethodInfo_[] = {
	{"<init>", "([BII)V", nullptr, $PRIVATE, $method(static_cast<void(StringUTF16$LinesSpliterator::*)($bytes*,int32_t,int32_t)>(&StringUTF16$LinesSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/String;>;)V", $PUBLIC},
	{"indexOfLineSeparator", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(StringUTF16$LinesSpliterator::*)(int32_t)>(&StringUTF16$LinesSpliterator::indexOfLineSeparator))},
	{"next", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(StringUTF16$LinesSpliterator::*)()>(&StringUTF16$LinesSpliterator::next))},
	{"skipLineSeparator", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(StringUTF16$LinesSpliterator::*)(int32_t)>(&StringUTF16$LinesSpliterator::skipLineSeparator))},
	{"spliterator", "([B)Ljava/lang/StringUTF16$LinesSpliterator;", nullptr, $STATIC, $method(static_cast<StringUTF16$LinesSpliterator*(*)($bytes*)>(&StringUTF16$LinesSpliterator::spliterator))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/lang/String;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<Ljava/lang/String;>;", $PUBLIC},
	{}
};

$InnerClassInfo _StringUTF16$LinesSpliterator_InnerClassesInfo_[] = {
	{"java.lang.StringUTF16$LinesSpliterator", "java.lang.StringUTF16", "LinesSpliterator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _StringUTF16$LinesSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.StringUTF16$LinesSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_StringUTF16$LinesSpliterator_FieldInfo_,
	_StringUTF16$LinesSpliterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<Ljava/lang/String;>;",
	nullptr,
	_StringUTF16$LinesSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StringUTF16"
};

$Object* allocate$StringUTF16$LinesSpliterator($Class* clazz) {
	return $of($alloc(StringUTF16$LinesSpliterator));
}

void StringUTF16$LinesSpliterator::init$($bytes* value, int32_t start, int32_t length) {
	$set(this, value, value);
	this->index = start;
	this->fence = start + length;
}

int32_t StringUTF16$LinesSpliterator::indexOfLineSeparator(int32_t start) {
	for (int32_t current = start; current < this->fence; ++current) {
		char16_t ch = $StringUTF16::getChar(this->value, current);
		if (ch == u'\n' || ch == u'\r') {
			return current;
		}
	}
	return this->fence;
}

int32_t StringUTF16$LinesSpliterator::skipLineSeparator(int32_t start) {
	if (start < this->fence) {
		if ($StringUTF16::getChar(this->value, start) == u'\r') {
			int32_t next = start + 1;
			if (next < this->fence && $StringUTF16::getChar(this->value, next) == u'\n') {
				return next + 1;
			}
		}
		return start + 1;
	}
	return this->fence;
}

$String* StringUTF16$LinesSpliterator::next() {
	int32_t start = this->index;
	int32_t end = indexOfLineSeparator(start);
	this->index = skipLineSeparator(end);
	return $StringUTF16::newString(this->value, start, end - start);
}

bool StringUTF16$LinesSpliterator::tryAdvance($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException, "tryAdvance action missing"_s);
	}
	if (this->index != this->fence) {
		$nc(action)->accept($(next()));
		return true;
	}
	return false;
}

void StringUTF16$LinesSpliterator::forEachRemaining($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException, "forEachRemaining action missing"_s);
	}
	while (this->index != this->fence) {
		$nc(action)->accept($(next()));
	}
}

$Spliterator* StringUTF16$LinesSpliterator::trySplit() {
	int32_t half = (int32_t)((uint32_t)(this->fence + this->index) >> 1);
	int32_t mid = skipLineSeparator(indexOfLineSeparator(half));
	if (mid < this->fence) {
		int32_t start = this->index;
		this->index = mid;
		return $new(StringUTF16$LinesSpliterator, this->value, start, mid - start);
	}
	return nullptr;
}

int64_t StringUTF16$LinesSpliterator::estimateSize() {
	return this->fence - this->index + 1;
}

int32_t StringUTF16$LinesSpliterator::characteristics() {
	return ($Spliterator::ORDERED | $Spliterator::IMMUTABLE) | $Spliterator::NONNULL;
}

StringUTF16$LinesSpliterator* StringUTF16$LinesSpliterator::spliterator($bytes* value) {
	$init(StringUTF16$LinesSpliterator);
	return $new(StringUTF16$LinesSpliterator, value, 0, (int32_t)((uint32_t)$nc(value)->length >> 1));
}

StringUTF16$LinesSpliterator::StringUTF16$LinesSpliterator() {
}

$Class* StringUTF16$LinesSpliterator::load$($String* name, bool initialize) {
	$loadClass(StringUTF16$LinesSpliterator, name, initialize, &_StringUTF16$LinesSpliterator_ClassInfo_, allocate$StringUTF16$LinesSpliterator);
	return class$;
}

$Class* StringUTF16$LinesSpliterator::class$ = nullptr;

	} // lang
} // java