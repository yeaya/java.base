#include <java/util/stream/MatchOps$MatchKind.h>

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
#include <java/util/stream/MatchOps.h>
#include <jcpp.h>

#undef ALL
#undef ANY
#undef NONE

using $MatchOps$MatchKindArray = $Array<::java::util::stream::MatchOps$MatchKind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MatchOps = ::java::util::stream::MatchOps;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _MatchOps$MatchKind_FieldInfo_[] = {
	{"ANY", "Ljava/util/stream/MatchOps$MatchKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MatchOps$MatchKind, ANY)},
	{"ALL", "Ljava/util/stream/MatchOps$MatchKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MatchOps$MatchKind, ALL)},
	{"NONE", "Ljava/util/stream/MatchOps$MatchKind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MatchOps$MatchKind, NONE)},
	{"$VALUES", "[Ljava/util/stream/MatchOps$MatchKind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MatchOps$MatchKind, $VALUES)},
	{"stopOnPredicateMatches", "Z", nullptr, $PRIVATE | $FINAL, $field(MatchOps$MatchKind, stopOnPredicateMatches)},
	{"shortCircuitResult", "Z", nullptr, $PRIVATE | $FINAL, $field(MatchOps$MatchKind, shortCircuitResult)},
	{}
};

$MethodInfo _MatchOps$MatchKind_MethodInfo_[] = {
	{"$values", "()[Ljava/util/stream/MatchOps$MatchKind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MatchOps$MatchKindArray*(*)()>(&MatchOps$MatchKind::$values))},
	{"<init>", "(Ljava/lang/String;IZZ)V", "(ZZ)V", $PRIVATE, $method(static_cast<void(MatchOps$MatchKind::*)($String*,int32_t,bool,bool)>(&MatchOps$MatchKind::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/util/stream/MatchOps$MatchKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MatchOps$MatchKind*(*)($String*)>(&MatchOps$MatchKind::valueOf))},
	{"values", "()[Ljava/util/stream/MatchOps$MatchKind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MatchOps$MatchKindArray*(*)()>(&MatchOps$MatchKind::values))},
	{}
};

$InnerClassInfo _MatchOps$MatchKind_InnerClassesInfo_[] = {
	{"java.util.stream.MatchOps$MatchKind", "java.util.stream.MatchOps", "MatchKind", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MatchOps$MatchKind_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"java.util.stream.MatchOps$MatchKind",
	"java.lang.Enum",
	nullptr,
	_MatchOps$MatchKind_FieldInfo_,
	_MatchOps$MatchKind_MethodInfo_,
	"Ljava/lang/Enum<Ljava/util/stream/MatchOps$MatchKind;>;",
	nullptr,
	_MatchOps$MatchKind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.MatchOps"
};

$Object* allocate$MatchOps$MatchKind($Class* clazz) {
	return $of($alloc(MatchOps$MatchKind));
}


MatchOps$MatchKind* MatchOps$MatchKind::ANY = nullptr;

MatchOps$MatchKind* MatchOps$MatchKind::ALL = nullptr;

MatchOps$MatchKind* MatchOps$MatchKind::NONE = nullptr;
$MatchOps$MatchKindArray* MatchOps$MatchKind::$VALUES = nullptr;

$MatchOps$MatchKindArray* MatchOps$MatchKind::$values() {
	$init(MatchOps$MatchKind);
	return $new($MatchOps$MatchKindArray, {
		MatchOps$MatchKind::ANY,
		MatchOps$MatchKind::ALL,
		MatchOps$MatchKind::NONE
	});
}

$MatchOps$MatchKindArray* MatchOps$MatchKind::values() {
	$init(MatchOps$MatchKind);
	return $cast($MatchOps$MatchKindArray, MatchOps$MatchKind::$VALUES->clone());
}

MatchOps$MatchKind* MatchOps$MatchKind::valueOf($String* name) {
	$init(MatchOps$MatchKind);
	return $cast(MatchOps$MatchKind, $Enum::valueOf(MatchOps$MatchKind::class$, name));
}

void MatchOps$MatchKind::init$($String* $enum$name, int32_t $enum$ordinal, bool stopOnPredicateMatches, bool shortCircuitResult) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->stopOnPredicateMatches = stopOnPredicateMatches;
	this->shortCircuitResult = shortCircuitResult;
}

void clinit$MatchOps$MatchKind($Class* class$) {
	$assignStatic(MatchOps$MatchKind::ANY, $new(MatchOps$MatchKind, "ANY"_s, 0, true, true));
	$assignStatic(MatchOps$MatchKind::ALL, $new(MatchOps$MatchKind, "ALL"_s, 1, false, false));
	$assignStatic(MatchOps$MatchKind::NONE, $new(MatchOps$MatchKind, "NONE"_s, 2, true, false));
	$assignStatic(MatchOps$MatchKind::$VALUES, MatchOps$MatchKind::$values());
}

MatchOps$MatchKind::MatchOps$MatchKind() {
}

$Class* MatchOps$MatchKind::load$($String* name, bool initialize) {
	$loadClass(MatchOps$MatchKind, name, initialize, &_MatchOps$MatchKind_ClassInfo_, clinit$MatchOps$MatchKind, allocate$MatchOps$MatchKind);
	return class$;
}

$Class* MatchOps$MatchKind::class$ = nullptr;

		} // stream
	} // util
} // java