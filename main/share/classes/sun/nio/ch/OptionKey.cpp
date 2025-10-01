#include <sun/nio/ch/OptionKey.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _OptionKey_FieldInfo_[] = {
	{"level", "I", nullptr, $PRIVATE, $field(OptionKey, level$)},
	{"name", "I", nullptr, $PRIVATE, $field(OptionKey, name$)},
	{}
};

$MethodInfo _OptionKey_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(OptionKey::*)(int32_t,int32_t)>(&OptionKey::init$))},
	{"level", "()I", nullptr, 0},
	{"name", "()I", nullptr, 0},
	{}
};

$ClassInfo _OptionKey_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.OptionKey",
	"java.lang.Object",
	nullptr,
	_OptionKey_FieldInfo_,
	_OptionKey_MethodInfo_
};

$Object* allocate$OptionKey($Class* clazz) {
	return $of($alloc(OptionKey));
}

void OptionKey::init$(int32_t level, int32_t name) {
	this->level$ = level;
	this->name$ = name;
}

int32_t OptionKey::level() {
	return this->level$;
}

int32_t OptionKey::name() {
	return this->name$;
}

OptionKey::OptionKey() {
}

$Class* OptionKey::load$($String* name, bool initialize) {
	$loadClass(OptionKey, name, initialize, &_OptionKey_ClassInfo_, allocate$OptionKey);
	return class$;
}

$Class* OptionKey::class$ = nullptr;

		} // ch
	} // nio
} // sun