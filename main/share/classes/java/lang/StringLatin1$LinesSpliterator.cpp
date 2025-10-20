#include <java/lang/StringLatin1$LinesSpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringLatin1.h>
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
using $StringLatin1 = ::java::lang::StringLatin1;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace lang {

$FieldInfo _StringLatin1$LinesSpliterator_FieldInfo_[] = {
	{"value", "[B", nullptr, $PRIVATE, $field(StringLatin1$LinesSpliterator, value)},
	{"index", "I", nullptr, $PRIVATE, $field(StringLatin1$LinesSpliterator, index)},
	{"fence", "I", nullptr, $PRIVATE | $FINAL, $field(StringLatin1$LinesSpliterator, fence)},
	{}
};

$MethodInfo _StringLatin1$LinesSpliterator_MethodInfo_[] = {
	{"<init>", "([BII)V", nullptr, $PRIVATE, $method(static_cast<void(StringLatin1$LinesSpliterator::*)($bytes*,int32_t,int32_t)>(&StringLatin1$LinesSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-Ljava/lang/String;>;)V", $PUBLIC},
	{"indexOfLineSeparator", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(StringLatin1$LinesSpliterator::*)(int32_t)>(&StringLatin1$LinesSpliterator::indexOfLineSeparator))},
	{"next", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(StringLatin1$LinesSpliterator::*)()>(&StringLatin1$LinesSpliterator::next))},
	{"skipLineSeparator", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(StringLatin1$LinesSpliterator::*)(int32_t)>(&StringLatin1$LinesSpliterator::skipLineSeparator))},
	{"spliterator", "([B)Ljava/lang/StringLatin1$LinesSpliterator;", nullptr, $STATIC, $method(static_cast<StringLatin1$LinesSpliterator*(*)($bytes*)>(&StringLatin1$LinesSpliterator::spliterator))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-Ljava/lang/String;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<Ljava/lang/String;>;", $PUBLIC},
	{}
};

$InnerClassInfo _StringLatin1$LinesSpliterator_InnerClassesInfo_[] = {
	{"java.lang.StringLatin1$LinesSpliterator", "java.lang.StringLatin1", "LinesSpliterator", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _StringLatin1$LinesSpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.StringLatin1$LinesSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_StringLatin1$LinesSpliterator_FieldInfo_,
	_StringLatin1$LinesSpliterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Spliterator<Ljava/lang/String;>;",
	nullptr,
	_StringLatin1$LinesSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StringLatin1"
};

$Object* allocate$StringLatin1$LinesSpliterator($Class* clazz) {
	return $of($alloc(StringLatin1$LinesSpliterator));
}

void StringLatin1$LinesSpliterator::init$($bytes* value, int32_t start, int32_t length) {
	$set(this, value, value);
	this->index = start;
	this->fence = start + length;
}

int32_t StringLatin1$LinesSpliterator::indexOfLineSeparator(int32_t start) {
	for (int32_t current = start; current < this->fence; ++current) {
		char16_t ch = $StringLatin1::getChar(this->value, current);
		if (ch == u'\n' || ch == u'\r') {
			return current;
		}
	}
	return this->fence;
}

int32_t StringLatin1$LinesSpliterator::skipLineSeparator(int32_t start) {
	if (start < this->fence) {
		if ($StringLatin1::getChar(this->value, start) == u'\r') {
			int32_t next = start + 1;
			if (next < this->fence && $StringLatin1::getChar(this->value, next) == u'\n') {
				return next + 1;
			}
		}
		return start + 1;
	}
	return this->fence;
}

$String* StringLatin1$LinesSpliterator::next() {
	int32_t start = this->index;
	int32_t end = indexOfLineSeparator(start);
	this->index = skipLineSeparator(end);
	return $StringLatin1::newString(this->value, start, end - start);
}

bool StringLatin1$LinesSpliterator::tryAdvance($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException, "tryAdvance action missing"_s);
	}
	if (this->index != this->fence) {
		$nc(action)->accept($(next()));
		return true;
	}
	return false;
}

void StringLatin1$LinesSpliterator::forEachRemaining($Consumer* action) {
	$useLocalCurrentObjectStackCache();
	if (action == nullptr) {
		$throwNew($NullPointerException, "forEachRemaining action missing"_s);
	}
	while (this->index != this->fence) {
		$nc(action)->accept($(next()));
	}
}

$Spliterator* StringLatin1$LinesSpliterator::trySplit() {
	int32_t half = (int32_t)((uint32_t)(this->fence + this->index) >> 1);
	int32_t mid = skipLineSeparator(indexOfLineSeparator(half));
	if (mid < this->fence) {
		int32_t start = this->index;
		this->index = mid;
		return $new(StringLatin1$LinesSpliterator, this->value, start, mid - start);
	}
	return nullptr;
}

int64_t StringLatin1$LinesSpliterator::estimateSize() {
	return this->fence - this->index + 1;
}

int32_t StringLatin1$LinesSpliterator::characteristics() {
	return ($Spliterator::ORDERED | $Spliterator::IMMUTABLE) | $Spliterator::NONNULL;
}

StringLatin1$LinesSpliterator* StringLatin1$LinesSpliterator::spliterator($bytes* value) {
	$init(StringLatin1$LinesSpliterator);
	return $new(StringLatin1$LinesSpliterator, value, 0, $nc(value)->length);
}

StringLatin1$LinesSpliterator::StringLatin1$LinesSpliterator() {
}

$Class* StringLatin1$LinesSpliterator::load$($String* name, bool initialize) {
	$loadClass(StringLatin1$LinesSpliterator, name, initialize, &_StringLatin1$LinesSpliterator_ClassInfo_, allocate$StringLatin1$LinesSpliterator);
	return class$;
}

$Class* StringLatin1$LinesSpliterator::class$ = nullptr;

	} // lang
} // java