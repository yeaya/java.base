#include <GetXSpace$Space.h>

#include <GetXSpace.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef KSIZE

using $GetXSpace = ::GetXSpace;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _GetXSpace$Space_FieldInfo_[] = {
	{"KSIZE", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GetXSpace$Space, KSIZE)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(GetXSpace$Space, name$)},
	{"total", "J", nullptr, $PRIVATE | $FINAL, $field(GetXSpace$Space, total$)},
	{"free", "J", nullptr, $PRIVATE | $FINAL, $field(GetXSpace$Space, free$)},
	{}
};

$MethodInfo _GetXSpace$Space_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(GetXSpace$Space::*)($String*,$String*,$String*)>(&GetXSpace$Space::init$))},
	{"free", "()J", nullptr, 0},
	{"name", "()Ljava/lang/String;", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"total", "()J", nullptr, 0},
	{"woomFree", "(J)Z", nullptr, 0},
	{}
};

$InnerClassInfo _GetXSpace$Space_InnerClassesInfo_[] = {
	{"GetXSpace$Space", "GetXSpace", "Space", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GetXSpace$Space_ClassInfo_ = {
	$ACC_SUPER,
	"GetXSpace$Space",
	"java.lang.Object",
	nullptr,
	_GetXSpace$Space_FieldInfo_,
	_GetXSpace$Space_MethodInfo_,
	nullptr,
	nullptr,
	_GetXSpace$Space_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetXSpace"
};

$Object* allocate$GetXSpace$Space($Class* clazz) {
	return $of($alloc(GetXSpace$Space));
}

void GetXSpace$Space::init$($String* total, $String* free, $String* name) {
	$useLocalCurrentObjectStackCache();
	try {
		this->total$ = $nc($($Long::valueOf(total)))->longValue() * GetXSpace$Space::KSIZE;
		this->free$ = $nc($($Long::valueOf(free)))->longValue() * GetXSpace$Space::KSIZE;
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, x, $catch());
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
	$useLocalCurrentObjectStackCache();
	return $String::format("%s (%d/%d)"_s, $$new($ObjectArray, {
		$of(this->name$),
		$($of($Long::valueOf(this->free$))),
		$($of($Long::valueOf(this->total$)))
	}));
}

GetXSpace$Space::GetXSpace$Space() {
}

$Class* GetXSpace$Space::load$($String* name, bool initialize) {
	$loadClass(GetXSpace$Space, name, initialize, &_GetXSpace$Space_ClassInfo_, allocate$GetXSpace$Space);
	return class$;
}

$Class* GetXSpace$Space::class$ = nullptr;