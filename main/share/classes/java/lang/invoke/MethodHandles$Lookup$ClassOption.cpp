#include <java/lang/invoke/MethodHandles$Lookup$ClassOption.h>

#include <java/lang/Enum.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef NESTMATE
#undef STRONG

using $MethodHandles$Lookup$ClassOptionArray = $Array<::java::lang::invoke::MethodHandles$Lookup$ClassOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MethodHandles$Lookup$ClassOption_FieldInfo_[] = {
	{"NESTMATE", "Ljava/lang/invoke/MethodHandles$Lookup$ClassOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandles$Lookup$ClassOption, NESTMATE)},
	{"STRONG", "Ljava/lang/invoke/MethodHandles$Lookup$ClassOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MethodHandles$Lookup$ClassOption, STRONG)},
	{"$VALUES", "[Ljava/lang/invoke/MethodHandles$Lookup$ClassOption;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandles$Lookup$ClassOption, $VALUES)},
	{"flag", "I", nullptr, $PRIVATE | $FINAL, $field(MethodHandles$Lookup$ClassOption, flag)},
	{}
};

$MethodInfo _MethodHandles$Lookup$ClassOption_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/invoke/MethodHandles$Lookup$ClassOption;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MethodHandles$Lookup$ClassOptionArray*(*)()>(&MethodHandles$Lookup$ClassOption::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(MethodHandles$Lookup$ClassOption::*)($String*,int32_t,int32_t)>(&MethodHandles$Lookup$ClassOption::init$))},
	{"optionsToFlag", "(Ljava/util/Set;)I", "(Ljava/util/Set<Ljava/lang/invoke/MethodHandles$Lookup$ClassOption;>;)I", $STATIC, $method(static_cast<int32_t(*)($Set*)>(&MethodHandles$Lookup$ClassOption::optionsToFlag))},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/invoke/MethodHandles$Lookup$ClassOption;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MethodHandles$Lookup$ClassOption*(*)($String*)>(&MethodHandles$Lookup$ClassOption::valueOf))},
	{"values", "()[Ljava/lang/invoke/MethodHandles$Lookup$ClassOption;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MethodHandles$Lookup$ClassOptionArray*(*)()>(&MethodHandles$Lookup$ClassOption::values))},
	{}
};

$InnerClassInfo _MethodHandles$Lookup$ClassOption_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandles$Lookup", "java.lang.invoke.MethodHandles", "Lookup", $PUBLIC | $STATIC | $FINAL},
	{"java.lang.invoke.MethodHandles$Lookup$ClassOption", "java.lang.invoke.MethodHandles$Lookup", "ClassOption", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MethodHandles$Lookup$ClassOption_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.lang.invoke.MethodHandles$Lookup$ClassOption",
	"java.lang.Enum",
	nullptr,
	_MethodHandles$Lookup$ClassOption_FieldInfo_,
	_MethodHandles$Lookup$ClassOption_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/invoke/MethodHandles$Lookup$ClassOption;>;",
	nullptr,
	_MethodHandles$Lookup$ClassOption_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandles"
};

$Object* allocate$MethodHandles$Lookup$ClassOption($Class* clazz) {
	return $of($alloc(MethodHandles$Lookup$ClassOption));
}

MethodHandles$Lookup$ClassOption* MethodHandles$Lookup$ClassOption::NESTMATE = nullptr;
MethodHandles$Lookup$ClassOption* MethodHandles$Lookup$ClassOption::STRONG = nullptr;
$MethodHandles$Lookup$ClassOptionArray* MethodHandles$Lookup$ClassOption::$VALUES = nullptr;

$MethodHandles$Lookup$ClassOptionArray* MethodHandles$Lookup$ClassOption::$values() {
	$init(MethodHandles$Lookup$ClassOption);
	return $new($MethodHandles$Lookup$ClassOptionArray, {
		MethodHandles$Lookup$ClassOption::NESTMATE,
		MethodHandles$Lookup$ClassOption::STRONG
	});
}

$MethodHandles$Lookup$ClassOptionArray* MethodHandles$Lookup$ClassOption::values() {
	$init(MethodHandles$Lookup$ClassOption);
	return $cast($MethodHandles$Lookup$ClassOptionArray, MethodHandles$Lookup$ClassOption::$VALUES->clone());
}

MethodHandles$Lookup$ClassOption* MethodHandles$Lookup$ClassOption::valueOf($String* name) {
	$init(MethodHandles$Lookup$ClassOption);
	return $cast(MethodHandles$Lookup$ClassOption, $Enum::valueOf(MethodHandles$Lookup$ClassOption::class$, name));
}

void MethodHandles$Lookup$ClassOption::init$($String* $enum$name, int32_t $enum$ordinal, int32_t flag) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->flag = flag;
}

int32_t MethodHandles$Lookup$ClassOption::optionsToFlag($Set* options) {
	$init(MethodHandles$Lookup$ClassOption);
	int32_t flags = 0;
	{
		$var($Iterator, i$, $nc(options)->iterator());
		for (; $nc(i$)->hasNext();) {
			MethodHandles$Lookup$ClassOption* cp = $cast(MethodHandles$Lookup$ClassOption, i$->next());
			{
				flags |= $nc(cp)->flag;
			}
		}
	}
	return flags;
}

void clinit$MethodHandles$Lookup$ClassOption($Class* class$) {
	$assignStatic(MethodHandles$Lookup$ClassOption::NESTMATE, $new(MethodHandles$Lookup$ClassOption, "NESTMATE"_s, 0, 1));
	$assignStatic(MethodHandles$Lookup$ClassOption::STRONG, $new(MethodHandles$Lookup$ClassOption, "STRONG"_s, 1, 4));
	$assignStatic(MethodHandles$Lookup$ClassOption::$VALUES, MethodHandles$Lookup$ClassOption::$values());
}

MethodHandles$Lookup$ClassOption::MethodHandles$Lookup$ClassOption() {
}

$Class* MethodHandles$Lookup$ClassOption::load$($String* name, bool initialize) {
	$loadClass(MethodHandles$Lookup$ClassOption, name, initialize, &_MethodHandles$Lookup$ClassOption_ClassInfo_, clinit$MethodHandles$Lookup$ClassOption, allocate$MethodHandles$Lookup$ClassOption);
	return class$;
}

$Class* MethodHandles$Lookup$ClassOption::class$ = nullptr;

		} // invoke
	} // lang
} // java