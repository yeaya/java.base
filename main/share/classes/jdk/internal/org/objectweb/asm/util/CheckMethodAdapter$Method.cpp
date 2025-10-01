#include <jdk/internal/org/objectweb/asm/util/CheckMethodAdapter$Method.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/util/CheckMethodAdapter.h>
#include <jcpp.h>

#undef VISIT_FIELD_INSN
#undef VISIT_JUMP_INSN
#undef VISIT_INSN
#undef VISIT_INT_INSN
#undef VISIT_METHOD_INSN
#undef VISIT_VAR_INSN
#undef VISIT_TYPE_INSN

using $CheckMethodAdapter$MethodArray = $Array<::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter$Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CheckMethodAdapter = ::jdk::internal::org::objectweb::asm$::util::CheckMethodAdapter;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$FieldInfo _CheckMethodAdapter$Method_FieldInfo_[] = {
	{"VISIT_INSN", "Ljdk/internal/org/objectweb/asm/util/CheckMethodAdapter$Method;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckMethodAdapter$Method, VISIT_INSN)},
	{"VISIT_INT_INSN", "Ljdk/internal/org/objectweb/asm/util/CheckMethodAdapter$Method;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckMethodAdapter$Method, VISIT_INT_INSN)},
	{"VISIT_VAR_INSN", "Ljdk/internal/org/objectweb/asm/util/CheckMethodAdapter$Method;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckMethodAdapter$Method, VISIT_VAR_INSN)},
	{"VISIT_TYPE_INSN", "Ljdk/internal/org/objectweb/asm/util/CheckMethodAdapter$Method;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckMethodAdapter$Method, VISIT_TYPE_INSN)},
	{"VISIT_FIELD_INSN", "Ljdk/internal/org/objectweb/asm/util/CheckMethodAdapter$Method;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckMethodAdapter$Method, VISIT_FIELD_INSN)},
	{"VISIT_METHOD_INSN", "Ljdk/internal/org/objectweb/asm/util/CheckMethodAdapter$Method;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckMethodAdapter$Method, VISIT_METHOD_INSN)},
	{"VISIT_JUMP_INSN", "Ljdk/internal/org/objectweb/asm/util/CheckMethodAdapter$Method;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckMethodAdapter$Method, VISIT_JUMP_INSN)},
	{"$VALUES", "[Ljdk/internal/org/objectweb/asm/util/CheckMethodAdapter$Method;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CheckMethodAdapter$Method, $VALUES)},
	{}
};

$MethodInfo _CheckMethodAdapter$Method_MethodInfo_[] = {
	{"$values", "()[Ljdk/internal/org/objectweb/asm/util/CheckMethodAdapter$Method;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CheckMethodAdapter$MethodArray*(*)()>(&CheckMethodAdapter$Method::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(CheckMethodAdapter$Method::*)($String*,int32_t)>(&CheckMethodAdapter$Method::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/util/CheckMethodAdapter$Method;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CheckMethodAdapter$Method*(*)($String*)>(&CheckMethodAdapter$Method::valueOf))},
	{"values", "()[Ljdk/internal/org/objectweb/asm/util/CheckMethodAdapter$Method;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CheckMethodAdapter$MethodArray*(*)()>(&CheckMethodAdapter$Method::values))},
	{}
};

$InnerClassInfo _CheckMethodAdapter$Method_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.util.CheckMethodAdapter$Method", "jdk.internal.org.objectweb.asm.util.CheckMethodAdapter", "Method", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CheckMethodAdapter$Method_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.org.objectweb.asm.util.CheckMethodAdapter$Method",
	"java.lang.Enum",
	nullptr,
	_CheckMethodAdapter$Method_FieldInfo_,
	_CheckMethodAdapter$Method_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/internal/org/objectweb/asm/util/CheckMethodAdapter$Method;>;",
	nullptr,
	_CheckMethodAdapter$Method_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.util.CheckMethodAdapter"
};

$Object* allocate$CheckMethodAdapter$Method($Class* clazz) {
	return $of($alloc(CheckMethodAdapter$Method));
}

CheckMethodAdapter$Method* CheckMethodAdapter$Method::VISIT_INSN = nullptr;
CheckMethodAdapter$Method* CheckMethodAdapter$Method::VISIT_INT_INSN = nullptr;
CheckMethodAdapter$Method* CheckMethodAdapter$Method::VISIT_VAR_INSN = nullptr;
CheckMethodAdapter$Method* CheckMethodAdapter$Method::VISIT_TYPE_INSN = nullptr;
CheckMethodAdapter$Method* CheckMethodAdapter$Method::VISIT_FIELD_INSN = nullptr;
CheckMethodAdapter$Method* CheckMethodAdapter$Method::VISIT_METHOD_INSN = nullptr;
CheckMethodAdapter$Method* CheckMethodAdapter$Method::VISIT_JUMP_INSN = nullptr;
$CheckMethodAdapter$MethodArray* CheckMethodAdapter$Method::$VALUES = nullptr;

$CheckMethodAdapter$MethodArray* CheckMethodAdapter$Method::$values() {
	$init(CheckMethodAdapter$Method);
	return $new($CheckMethodAdapter$MethodArray, {
		CheckMethodAdapter$Method::VISIT_INSN,
		CheckMethodAdapter$Method::VISIT_INT_INSN,
		CheckMethodAdapter$Method::VISIT_VAR_INSN,
		CheckMethodAdapter$Method::VISIT_TYPE_INSN,
		CheckMethodAdapter$Method::VISIT_FIELD_INSN,
		CheckMethodAdapter$Method::VISIT_METHOD_INSN,
		CheckMethodAdapter$Method::VISIT_JUMP_INSN
	});
}

$CheckMethodAdapter$MethodArray* CheckMethodAdapter$Method::values() {
	$init(CheckMethodAdapter$Method);
	return $cast($CheckMethodAdapter$MethodArray, CheckMethodAdapter$Method::$VALUES->clone());
}

CheckMethodAdapter$Method* CheckMethodAdapter$Method::valueOf($String* name) {
	$init(CheckMethodAdapter$Method);
	return $cast(CheckMethodAdapter$Method, $Enum::valueOf(CheckMethodAdapter$Method::class$, name));
}

void CheckMethodAdapter$Method::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$CheckMethodAdapter$Method($Class* class$) {
	$assignStatic(CheckMethodAdapter$Method::VISIT_INSN, $new(CheckMethodAdapter$Method, "VISIT_INSN"_s, 0));
	$assignStatic(CheckMethodAdapter$Method::VISIT_INT_INSN, $new(CheckMethodAdapter$Method, "VISIT_INT_INSN"_s, 1));
	$assignStatic(CheckMethodAdapter$Method::VISIT_VAR_INSN, $new(CheckMethodAdapter$Method, "VISIT_VAR_INSN"_s, 2));
	$assignStatic(CheckMethodAdapter$Method::VISIT_TYPE_INSN, $new(CheckMethodAdapter$Method, "VISIT_TYPE_INSN"_s, 3));
	$assignStatic(CheckMethodAdapter$Method::VISIT_FIELD_INSN, $new(CheckMethodAdapter$Method, "VISIT_FIELD_INSN"_s, 4));
	$assignStatic(CheckMethodAdapter$Method::VISIT_METHOD_INSN, $new(CheckMethodAdapter$Method, "VISIT_METHOD_INSN"_s, 5));
	$assignStatic(CheckMethodAdapter$Method::VISIT_JUMP_INSN, $new(CheckMethodAdapter$Method, "VISIT_JUMP_INSN"_s, 6));
	$assignStatic(CheckMethodAdapter$Method::$VALUES, CheckMethodAdapter$Method::$values());
}

CheckMethodAdapter$Method::CheckMethodAdapter$Method() {
}

$Class* CheckMethodAdapter$Method::load$($String* name, bool initialize) {
	$loadClass(CheckMethodAdapter$Method, name, initialize, &_CheckMethodAdapter$Method_ClassInfo_, clinit$CheckMethodAdapter$Method, allocate$CheckMethodAdapter$Method);
	return class$;
}

$Class* CheckMethodAdapter$Method::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk