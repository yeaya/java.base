#include <java/util/FormattableFlags.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ALTERNATE
#undef LEFT_JUSTIFY
#undef UPPERCASE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$FieldInfo _FormattableFlags_FieldInfo_[] = {
	{"LEFT_JUSTIFY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FormattableFlags, LEFT_JUSTIFY)},
	{"UPPERCASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FormattableFlags, UPPERCASE)},
	{"ALTERNATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FormattableFlags, ALTERNATE)},
	{}
};

$MethodInfo _FormattableFlags_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FormattableFlags::*)()>(&FormattableFlags::init$))},
	{}
};

$ClassInfo _FormattableFlags_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.FormattableFlags",
	"java.lang.Object",
	nullptr,
	_FormattableFlags_FieldInfo_,
	_FormattableFlags_MethodInfo_
};

$Object* allocate$FormattableFlags($Class* clazz) {
	return $of($alloc(FormattableFlags));
}

void FormattableFlags::init$() {
}

FormattableFlags::FormattableFlags() {
}

$Class* FormattableFlags::load$($String* name, bool initialize) {
	$loadClass(FormattableFlags, name, initialize, &_FormattableFlags_ClassInfo_, allocate$FormattableFlags);
	return class$;
}

$Class* FormattableFlags::class$ = nullptr;

	} // util
} // java