#include <jdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State.h>

#include <java/lang/Enum.h>
#include <jdk/internal/org/objectweb/asm/util/CheckSignatureAdapter.h>
#include <jcpp.h>

#undef BOUND
#undef CLASS_TYPE
#undef EMPTY
#undef END
#undef FORMAL
#undef PARAM
#undef RETURN
#undef SIMPLE_TYPE
#undef SUPER

using $CheckSignatureAdapter$StateArray = $Array<::jdk::internal::org::objectweb::asm$::util::CheckSignatureAdapter$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

$FieldInfo _CheckSignatureAdapter$State_FieldInfo_[] = {
	{"EMPTY", "Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckSignatureAdapter$State, EMPTY)},
	{"FORMAL", "Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckSignatureAdapter$State, FORMAL)},
	{"BOUND", "Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckSignatureAdapter$State, BOUND)},
	{"SUPER", "Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckSignatureAdapter$State, SUPER)},
	{"PARAM", "Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckSignatureAdapter$State, PARAM)},
	{"RETURN", "Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckSignatureAdapter$State, RETURN)},
	{"SIMPLE_TYPE", "Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckSignatureAdapter$State, SIMPLE_TYPE)},
	{"CLASS_TYPE", "Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckSignatureAdapter$State, CLASS_TYPE)},
	{"END", "Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(CheckSignatureAdapter$State, END)},
	{"$VALUES", "[Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(CheckSignatureAdapter$State, $VALUES)},
	{}
};

$MethodInfo _CheckSignatureAdapter$State_MethodInfo_[] = {
	{"$values", "()[Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$CheckSignatureAdapter$StateArray*(*)()>(&CheckSignatureAdapter$State::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(CheckSignatureAdapter$State::*)($String*,int32_t)>(&CheckSignatureAdapter$State::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CheckSignatureAdapter$State*(*)($String*)>(&CheckSignatureAdapter$State::valueOf))},
	{"values", "()[Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$CheckSignatureAdapter$StateArray*(*)()>(&CheckSignatureAdapter$State::values))},
	{}
};

$InnerClassInfo _CheckSignatureAdapter$State_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.util.CheckSignatureAdapter$State", "jdk.internal.org.objectweb.asm.util.CheckSignatureAdapter", "State", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _CheckSignatureAdapter$State_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"jdk.internal.org.objectweb.asm.util.CheckSignatureAdapter$State",
	"java.lang.Enum",
	nullptr,
	_CheckSignatureAdapter$State_FieldInfo_,
	_CheckSignatureAdapter$State_MethodInfo_,
	"Ljava/lang/Enum<Ljdk/internal/org/objectweb/asm/util/CheckSignatureAdapter$State;>;",
	nullptr,
	_CheckSignatureAdapter$State_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.util.CheckSignatureAdapter"
};

$Object* allocate$CheckSignatureAdapter$State($Class* clazz) {
	return $of($alloc(CheckSignatureAdapter$State));
}

CheckSignatureAdapter$State* CheckSignatureAdapter$State::EMPTY = nullptr;
CheckSignatureAdapter$State* CheckSignatureAdapter$State::FORMAL = nullptr;
CheckSignatureAdapter$State* CheckSignatureAdapter$State::BOUND = nullptr;
CheckSignatureAdapter$State* CheckSignatureAdapter$State::SUPER = nullptr;
CheckSignatureAdapter$State* CheckSignatureAdapter$State::PARAM = nullptr;
CheckSignatureAdapter$State* CheckSignatureAdapter$State::RETURN = nullptr;
CheckSignatureAdapter$State* CheckSignatureAdapter$State::SIMPLE_TYPE = nullptr;
CheckSignatureAdapter$State* CheckSignatureAdapter$State::CLASS_TYPE = nullptr;
CheckSignatureAdapter$State* CheckSignatureAdapter$State::END = nullptr;
$CheckSignatureAdapter$StateArray* CheckSignatureAdapter$State::$VALUES = nullptr;

$CheckSignatureAdapter$StateArray* CheckSignatureAdapter$State::$values() {
	$init(CheckSignatureAdapter$State);
	return $new($CheckSignatureAdapter$StateArray, {
		CheckSignatureAdapter$State::EMPTY,
		CheckSignatureAdapter$State::FORMAL,
		CheckSignatureAdapter$State::BOUND,
		CheckSignatureAdapter$State::SUPER,
		CheckSignatureAdapter$State::PARAM,
		CheckSignatureAdapter$State::RETURN,
		CheckSignatureAdapter$State::SIMPLE_TYPE,
		CheckSignatureAdapter$State::CLASS_TYPE,
		CheckSignatureAdapter$State::END
	});
}

$CheckSignatureAdapter$StateArray* CheckSignatureAdapter$State::values() {
	$init(CheckSignatureAdapter$State);
	return $cast($CheckSignatureAdapter$StateArray, CheckSignatureAdapter$State::$VALUES->clone());
}

CheckSignatureAdapter$State* CheckSignatureAdapter$State::valueOf($String* name) {
	$init(CheckSignatureAdapter$State);
	return $cast(CheckSignatureAdapter$State, $Enum::valueOf(CheckSignatureAdapter$State::class$, name));
}

void CheckSignatureAdapter$State::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$CheckSignatureAdapter$State($Class* class$) {
	$assignStatic(CheckSignatureAdapter$State::EMPTY, $new(CheckSignatureAdapter$State, "EMPTY"_s, 0));
	$assignStatic(CheckSignatureAdapter$State::FORMAL, $new(CheckSignatureAdapter$State, "FORMAL"_s, 1));
	$assignStatic(CheckSignatureAdapter$State::BOUND, $new(CheckSignatureAdapter$State, "BOUND"_s, 2));
	$assignStatic(CheckSignatureAdapter$State::SUPER, $new(CheckSignatureAdapter$State, "SUPER"_s, 3));
	$assignStatic(CheckSignatureAdapter$State::PARAM, $new(CheckSignatureAdapter$State, "PARAM"_s, 4));
	$assignStatic(CheckSignatureAdapter$State::RETURN, $new(CheckSignatureAdapter$State, "RETURN"_s, 5));
	$assignStatic(CheckSignatureAdapter$State::SIMPLE_TYPE, $new(CheckSignatureAdapter$State, "SIMPLE_TYPE"_s, 6));
	$assignStatic(CheckSignatureAdapter$State::CLASS_TYPE, $new(CheckSignatureAdapter$State, "CLASS_TYPE"_s, 7));
	$assignStatic(CheckSignatureAdapter$State::END, $new(CheckSignatureAdapter$State, "END"_s, 8));
	$assignStatic(CheckSignatureAdapter$State::$VALUES, CheckSignatureAdapter$State::$values());
}

CheckSignatureAdapter$State::CheckSignatureAdapter$State() {
}

$Class* CheckSignatureAdapter$State::load$($String* name, bool initialize) {
	$loadClass(CheckSignatureAdapter$State, name, initialize, &_CheckSignatureAdapter$State_ClassInfo_, clinit$CheckSignatureAdapter$State, allocate$CheckSignatureAdapter$State);
	return class$;
}

$Class* CheckSignatureAdapter$State::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk