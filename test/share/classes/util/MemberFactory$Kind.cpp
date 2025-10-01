#include <util/MemberFactory$Kind.h>

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
#include <util/MemberFactory$Kind$1.h>
#include <util/MemberFactory$Kind$2.h>
#include <util/MemberFactory$Kind$3.h>
#include <util/MemberFactory.h>
#include <jcpp.h>

#undef FIELD
#undef METHOD
#undef CONSTRUCTOR

using $MemberFactory$KindArray = $Array<::util::MemberFactory$Kind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BiFunction = ::java::util::function::BiFunction;
using $MemberFactory = ::util::MemberFactory;
using $MemberFactory$Kind$1 = ::util::MemberFactory$Kind$1;
using $MemberFactory$Kind$2 = ::util::MemberFactory$Kind$2;
using $MemberFactory$Kind$3 = ::util::MemberFactory$Kind$3;

namespace util {

$FieldInfo _MemberFactory$Kind_FieldInfo_[] = {
	{"FIELD", "Lutil/MemberFactory$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Kind, FIELD)},
	{"METHOD", "Lutil/MemberFactory$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Kind, METHOD)},
	{"CONSTRUCTOR", "Lutil/MemberFactory$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Kind, CONSTRUCTOR)},
	{"$VALUES", "[Lutil/MemberFactory$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MemberFactory$Kind, $VALUES)},
	{}
};

$MethodInfo _MemberFactory$Kind_MethodInfo_[] = {
	{"$values", "()[Lutil/MemberFactory$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MemberFactory$KindArray*(*)()>(&MemberFactory$Kind::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(MemberFactory$Kind::*)($String*,int32_t)>(&MemberFactory$Kind::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lutil/MemberFactory$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MemberFactory$Kind*(*)($String*)>(&MemberFactory$Kind::valueOf))},
	{"values", "()[Lutil/MemberFactory$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MemberFactory$KindArray*(*)()>(&MemberFactory$Kind::values))},
	{}
};

$InnerClassInfo _MemberFactory$Kind_InnerClassesInfo_[] = {
	{"util.MemberFactory$Kind", "util.MemberFactory", "Kind", $STATIC | $ABSTRACT | $ENUM},
	{"util.MemberFactory$Kind$3", nullptr, nullptr, $FINAL | $ENUM},
	{"util.MemberFactory$Kind$2", nullptr, nullptr, $FINAL | $ENUM},
	{"util.MemberFactory$Kind$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _MemberFactory$Kind_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT | $ENUM,
	"util.MemberFactory$Kind",
	"java.lang.Enum",
	"java.util.function.BiFunction",
	_MemberFactory$Kind_FieldInfo_,
	_MemberFactory$Kind_MethodInfo_,
	"Ljava/lang/Enum<Lutil/MemberFactory$Kind;>;Ljava/util/function/BiFunction<Ljava/lang/Class<*>;Lutil/MemberFactory;Ljava/lang/reflect/AccessibleObject;>;",
	nullptr,
	_MemberFactory$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"util.MemberFactory"
};

$Object* allocate$MemberFactory$Kind($Class* clazz) {
	return $of($alloc(MemberFactory$Kind));
}

$String* MemberFactory$Kind::toString() {
	 return this->$Enum::toString();
}

bool MemberFactory$Kind::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t MemberFactory$Kind::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* MemberFactory$Kind::clone() {
	 return this->$Enum::clone();
}

void MemberFactory$Kind::finalize() {
	this->$Enum::finalize();
}

MemberFactory$Kind* MemberFactory$Kind::FIELD = nullptr;
MemberFactory$Kind* MemberFactory$Kind::METHOD = nullptr;
MemberFactory$Kind* MemberFactory$Kind::CONSTRUCTOR = nullptr;
$MemberFactory$KindArray* MemberFactory$Kind::$VALUES = nullptr;

$MemberFactory$KindArray* MemberFactory$Kind::$values() {
	$init(MemberFactory$Kind);
	return $new($MemberFactory$KindArray, {
		MemberFactory$Kind::FIELD,
		MemberFactory$Kind::METHOD,
		MemberFactory$Kind::CONSTRUCTOR
	});
}

$MemberFactory$KindArray* MemberFactory$Kind::values() {
	$init(MemberFactory$Kind);
	return $cast($MemberFactory$KindArray, MemberFactory$Kind::$VALUES->clone());
}

MemberFactory$Kind* MemberFactory$Kind::valueOf($String* name) {
	$init(MemberFactory$Kind);
	return $cast(MemberFactory$Kind, $Enum::valueOf(MemberFactory$Kind::class$, name));
}

void MemberFactory$Kind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$MemberFactory$Kind($Class* class$) {
	$assignStatic(MemberFactory$Kind::FIELD, $new($MemberFactory$Kind$1, "FIELD"_s, 0));
	$assignStatic(MemberFactory$Kind::METHOD, $new($MemberFactory$Kind$2, "METHOD"_s, 1));
	$assignStatic(MemberFactory$Kind::CONSTRUCTOR, $new($MemberFactory$Kind$3, "CONSTRUCTOR"_s, 2));
	$assignStatic(MemberFactory$Kind::$VALUES, MemberFactory$Kind::$values());
}

MemberFactory$Kind::MemberFactory$Kind() {
}

$Class* MemberFactory$Kind::load$($String* name, bool initialize) {
	$loadClass(MemberFactory$Kind, name, initialize, &_MemberFactory$Kind_ClassInfo_, clinit$MemberFactory$Kind, allocate$MemberFactory$Kind);
	return class$;
}

$Class* MemberFactory$Kind::class$ = nullptr;

} // util