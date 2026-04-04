#include <GetXSpace$Space.h>
#include <GetXSpace.h>
#include <java/lang/NumberFormatException.h>
#include <jcpp.h>

#undef KSIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;

void GetXSpace$Space::init$($String* total, $String* free, $String* name) {
	$useLocalObjectStack();
	try {
		this->total$ = $($Long::valueOf(total))->longValue() * GetXSpace$Space::KSIZE;
		this->free$ = $($Long::valueOf(free))->longValue() * GetXSpace$Space::KSIZE;
	} catch ($NumberFormatException& x) {
		$throwNew($RuntimeException, "the regex should have caught this"_s, x);
	}
	$set(this, name$, name);
}

$String* GetXSpace$Space::name() {
	return this->name$;
}

int64_t GetXSpace$Space::total() {
	return this->total$;
}

int64_t GetXSpace$Space::free() {
	return this->free$;
}

bool GetXSpace$Space::woomFree(int64_t freeSpace) {
	return ((freeSpace >= (this->free$ / 10)) && (freeSpace <= (this->free$ * 10)));
}

$String* GetXSpace$Space::toString() {
	$useLocalObjectStack();
	return $String::format("%s (%d/%d)"_s, $$new($ObjectArray, {
		this->name$,
		$($Long::valueOf(this->free$)),
		$($Long::valueOf(this->total$))
	}));
}

GetXSpace$Space::GetXSpace$Space() {
}

$Class* GetXSpace$Space::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"KSIZE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GetXSpace$Space, KSIZE)},
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(GetXSpace$Space, name$)},
		{"total", "J", nullptr, $PRIVATE | $FINAL, $field(GetXSpace$Space, total$)},
		{"free", "J", nullptr, $PRIVATE | $FINAL, $field(GetXSpace$Space, free$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(GetXSpace$Space, init$, void, $String*, $String*, $String*)},
		{"free", "()J", nullptr, 0, $virtualMethod(GetXSpace$Space, free, int64_t)},
		{"name", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(GetXSpace$Space, name, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GetXSpace$Space, toString, $String*)},
		{"total", "()J", nullptr, 0, $virtualMethod(GetXSpace$Space, total, int64_t)},
		{"woomFree", "(J)Z", nullptr, 0, $virtualMethod(GetXSpace$Space, woomFree, bool, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetXSpace$Space", "GetXSpace", "Space", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetXSpace$Space",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetXSpace"
	};
	$loadClass(GetXSpace$Space, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetXSpace$Space);
	});
	return class$;
}

$Class* GetXSpace$Space::class$ = nullptr;