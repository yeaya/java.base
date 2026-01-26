#include <util/MemberFactory$Group.h>

#include <java/lang/Enum.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/List.h>
#include <util/MemberFactory.h>
#include <jcpp.h>

#undef ALL
#undef PACKAGE_C
#undef PACKAGE_CONSTRUCTOR
#undef PACKAGE_INSTANCE_FIELD
#undef PACKAGE_INSTANCE_F_M
#undef PACKAGE_INSTANCE_METHOD
#undef PACKAGE_MEMBERS
#undef PACKAGE_STATIC_FIELD
#undef PACKAGE_STATIC_F_M
#undef PACKAGE_STATIC_METHOD
#undef PRIVATE_C
#undef PRIVATE_CONSTRUCTOR
#undef PRIVATE_INSTANCE_FIELD
#undef PRIVATE_INSTANCE_F_M
#undef PRIVATE_INSTANCE_METHOD
#undef PRIVATE_MEMBERS
#undef PRIVATE_STATIC_FIELD
#undef PRIVATE_STATIC_F_M
#undef PRIVATE_STATIC_METHOD
#undef PROTECTED_C
#undef PROTECTED_CONSTRUCTOR
#undef PROTECTED_INSTANCE_FIELD
#undef PROTECTED_INSTANCE_F_M
#undef PROTECTED_INSTANCE_METHOD
#undef PROTECTED_MEMBERS
#undef PROTECTED_STATIC_FIELD
#undef PROTECTED_STATIC_F_M
#undef PROTECTED_STATIC_METHOD
#undef PUBLIC_C
#undef PUBLIC_CONSTRUCTOR
#undef PUBLIC_INSTANCE_FIELD
#undef PUBLIC_INSTANCE_F_M
#undef PUBLIC_INSTANCE_METHOD
#undef PUBLIC_MEMBERS
#undef PUBLIC_STATIC_FIELD
#undef PUBLIC_STATIC_F_M
#undef PUBLIC_STATIC_METHOD

using $MemberFactory$GroupArray = $Array<::util::MemberFactory$Group>;
using $MemberFactoryArray = $Array<::util::MemberFactory>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $MemberFactory = ::util::MemberFactory;

namespace util {

$FieldInfo _MemberFactory$Group_FieldInfo_[] = {
	{"ALL", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, ALL)},
	{"PRIVATE_MEMBERS", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PRIVATE_MEMBERS)},
	{"PACKAGE_MEMBERS", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PACKAGE_MEMBERS)},
	{"PROTECTED_MEMBERS", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PROTECTED_MEMBERS)},
	{"PUBLIC_MEMBERS", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PUBLIC_MEMBERS)},
	{"PRIVATE_INSTANCE_F_M", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PRIVATE_INSTANCE_F_M)},
	{"PACKAGE_INSTANCE_F_M", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PACKAGE_INSTANCE_F_M)},
	{"PROTECTED_INSTANCE_F_M", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PROTECTED_INSTANCE_F_M)},
	{"PUBLIC_INSTANCE_F_M", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PUBLIC_INSTANCE_F_M)},
	{"PRIVATE_STATIC_F_M", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PRIVATE_STATIC_F_M)},
	{"PACKAGE_STATIC_F_M", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PACKAGE_STATIC_F_M)},
	{"PROTECTED_STATIC_F_M", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PROTECTED_STATIC_F_M)},
	{"PUBLIC_STATIC_F_M", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PUBLIC_STATIC_F_M)},
	{"PRIVATE_C", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PRIVATE_C)},
	{"PACKAGE_C", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PACKAGE_C)},
	{"PROTECTED_C", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PROTECTED_C)},
	{"PUBLIC_C", "Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory$Group, PUBLIC_C)},
	{"$VALUES", "[Lutil/MemberFactory$Group;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MemberFactory$Group, $VALUES)},
	{"members", "Ljava/util/EnumSet;", "Ljava/util/EnumSet<Lutil/MemberFactory;>;", $FINAL, $field(MemberFactory$Group, members)},
	{}
};

$MethodInfo _MemberFactory$Group_MethodInfo_[] = {
	{"$values", "()[Lutil/MemberFactory$Group;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MemberFactory$Group, $values, $MemberFactory$GroupArray*)},
	{"<init>", "(Ljava/lang/String;I[Lutil/MemberFactory;)V", "([Lutil/MemberFactory;)V", $PRIVATE | $TRANSIENT, $method(MemberFactory$Group, init$, void, $String*, int32_t, $MemberFactoryArray*)},
	{"asSet", "([Lutil/MemberFactory$Group;)Ljava/util/EnumSet;", "([Lutil/MemberFactory$Group;)Ljava/util/EnumSet<Lutil/MemberFactory$Group;>;", $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(MemberFactory$Group, asSet, $EnumSet*, $MemberFactory$GroupArray*)},
	{"valueOf", "(Ljava/lang/String;)Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC, $staticMethod(MemberFactory$Group, valueOf, MemberFactory$Group*, $String*)},
	{"values", "()[Lutil/MemberFactory$Group;", nullptr, $PUBLIC | $STATIC, $staticMethod(MemberFactory$Group, values, $MemberFactory$GroupArray*)},
	{}
};

$InnerClassInfo _MemberFactory$Group_InnerClassesInfo_[] = {
	{"util.MemberFactory$Group", "util.MemberFactory", "Group", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MemberFactory$Group_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"util.MemberFactory$Group",
	"java.lang.Enum",
	nullptr,
	_MemberFactory$Group_FieldInfo_,
	_MemberFactory$Group_MethodInfo_,
	"Ljava/lang/Enum<Lutil/MemberFactory$Group;>;",
	nullptr,
	_MemberFactory$Group_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"util.MemberFactory"
};

$Object* allocate$MemberFactory$Group($Class* clazz) {
	return $of($alloc(MemberFactory$Group));
}

MemberFactory$Group* MemberFactory$Group::ALL = nullptr;
MemberFactory$Group* MemberFactory$Group::PRIVATE_MEMBERS = nullptr;
MemberFactory$Group* MemberFactory$Group::PACKAGE_MEMBERS = nullptr;
MemberFactory$Group* MemberFactory$Group::PROTECTED_MEMBERS = nullptr;
MemberFactory$Group* MemberFactory$Group::PUBLIC_MEMBERS = nullptr;
MemberFactory$Group* MemberFactory$Group::PRIVATE_INSTANCE_F_M = nullptr;
MemberFactory$Group* MemberFactory$Group::PACKAGE_INSTANCE_F_M = nullptr;
MemberFactory$Group* MemberFactory$Group::PROTECTED_INSTANCE_F_M = nullptr;
MemberFactory$Group* MemberFactory$Group::PUBLIC_INSTANCE_F_M = nullptr;
MemberFactory$Group* MemberFactory$Group::PRIVATE_STATIC_F_M = nullptr;
MemberFactory$Group* MemberFactory$Group::PACKAGE_STATIC_F_M = nullptr;
MemberFactory$Group* MemberFactory$Group::PROTECTED_STATIC_F_M = nullptr;
MemberFactory$Group* MemberFactory$Group::PUBLIC_STATIC_F_M = nullptr;
MemberFactory$Group* MemberFactory$Group::PRIVATE_C = nullptr;
MemberFactory$Group* MemberFactory$Group::PACKAGE_C = nullptr;
MemberFactory$Group* MemberFactory$Group::PROTECTED_C = nullptr;
MemberFactory$Group* MemberFactory$Group::PUBLIC_C = nullptr;
$MemberFactory$GroupArray* MemberFactory$Group::$VALUES = nullptr;

$MemberFactory$GroupArray* MemberFactory$Group::$values() {
	$init(MemberFactory$Group);
	return $new($MemberFactory$GroupArray, {
		MemberFactory$Group::ALL,
		MemberFactory$Group::PRIVATE_MEMBERS,
		MemberFactory$Group::PACKAGE_MEMBERS,
		MemberFactory$Group::PROTECTED_MEMBERS,
		MemberFactory$Group::PUBLIC_MEMBERS,
		MemberFactory$Group::PRIVATE_INSTANCE_F_M,
		MemberFactory$Group::PACKAGE_INSTANCE_F_M,
		MemberFactory$Group::PROTECTED_INSTANCE_F_M,
		MemberFactory$Group::PUBLIC_INSTANCE_F_M,
		MemberFactory$Group::PRIVATE_STATIC_F_M,
		MemberFactory$Group::PACKAGE_STATIC_F_M,
		MemberFactory$Group::PROTECTED_STATIC_F_M,
		MemberFactory$Group::PUBLIC_STATIC_F_M,
		MemberFactory$Group::PRIVATE_C,
		MemberFactory$Group::PACKAGE_C,
		MemberFactory$Group::PROTECTED_C,
		MemberFactory$Group::PUBLIC_C
	});
}

$MemberFactory$GroupArray* MemberFactory$Group::values() {
	$init(MemberFactory$Group);
	return $cast($MemberFactory$GroupArray, MemberFactory$Group::$VALUES->clone());
}

MemberFactory$Group* MemberFactory$Group::valueOf($String* name) {
	$init(MemberFactory$Group);
	return $cast(MemberFactory$Group, $Enum::valueOf(MemberFactory$Group::class$, name));
}

void MemberFactory$Group::init$($String* $enum$name, int32_t $enum$ordinal, $MemberFactoryArray* members) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, members, $EnumSet::copyOf($(static_cast<$Collection*>($Arrays::asList(members)))));
}

$EnumSet* MemberFactory$Group::asSet($MemberFactory$GroupArray* groups) {
	$init(MemberFactory$Group);
	return $nc(groups)->length == 0 ? $EnumSet::noneOf(MemberFactory$Group::class$) : $EnumSet::copyOf($(static_cast<$Collection*>($Arrays::asList(groups))));
}

void clinit$MemberFactory$Group($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MemberFactory$Group::ALL, $new(MemberFactory$Group, "ALL"_s, 0, $($MemberFactory::values())));
	$assignStatic(MemberFactory$Group::PRIVATE_MEMBERS, $new(MemberFactory$Group, "PRIVATE_MEMBERS"_s, 1, $$new($MemberFactoryArray, {
		$MemberFactory::PRIVATE_INSTANCE_FIELD,
		$MemberFactory::PRIVATE_INSTANCE_METHOD,
		$MemberFactory::PRIVATE_STATIC_FIELD,
		$MemberFactory::PRIVATE_STATIC_METHOD,
		$MemberFactory::PRIVATE_CONSTRUCTOR
	})));
	$assignStatic(MemberFactory$Group::PACKAGE_MEMBERS, $new(MemberFactory$Group, "PACKAGE_MEMBERS"_s, 2, $$new($MemberFactoryArray, {
		$MemberFactory::PACKAGE_INSTANCE_FIELD,
		$MemberFactory::PACKAGE_INSTANCE_METHOD,
		$MemberFactory::PACKAGE_STATIC_FIELD,
		$MemberFactory::PACKAGE_STATIC_METHOD,
		$MemberFactory::PACKAGE_CONSTRUCTOR
	})));
	$assignStatic(MemberFactory$Group::PROTECTED_MEMBERS, $new(MemberFactory$Group, "PROTECTED_MEMBERS"_s, 3, $$new($MemberFactoryArray, {
		$MemberFactory::PROTECTED_INSTANCE_FIELD,
		$MemberFactory::PROTECTED_INSTANCE_METHOD,
		$MemberFactory::PROTECTED_STATIC_FIELD,
		$MemberFactory::PROTECTED_STATIC_METHOD,
		$MemberFactory::PROTECTED_CONSTRUCTOR
	})));
	$assignStatic(MemberFactory$Group::PUBLIC_MEMBERS, $new(MemberFactory$Group, "PUBLIC_MEMBERS"_s, 4, $$new($MemberFactoryArray, {
		$MemberFactory::PUBLIC_INSTANCE_FIELD,
		$MemberFactory::PUBLIC_INSTANCE_METHOD,
		$MemberFactory::PUBLIC_STATIC_FIELD,
		$MemberFactory::PUBLIC_STATIC_METHOD,
		$MemberFactory::PUBLIC_CONSTRUCTOR
	})));
	$assignStatic(MemberFactory$Group::PRIVATE_INSTANCE_F_M, $new(MemberFactory$Group, "PRIVATE_INSTANCE_F_M"_s, 5, $$new($MemberFactoryArray, {
		$MemberFactory::PRIVATE_INSTANCE_FIELD,
		$MemberFactory::PRIVATE_INSTANCE_METHOD
	})));
	$assignStatic(MemberFactory$Group::PACKAGE_INSTANCE_F_M, $new(MemberFactory$Group, "PACKAGE_INSTANCE_F_M"_s, 6, $$new($MemberFactoryArray, {
		$MemberFactory::PACKAGE_INSTANCE_FIELD,
		$MemberFactory::PACKAGE_INSTANCE_METHOD
	})));
	$assignStatic(MemberFactory$Group::PROTECTED_INSTANCE_F_M, $new(MemberFactory$Group, "PROTECTED_INSTANCE_F_M"_s, 7, $$new($MemberFactoryArray, {
		$MemberFactory::PROTECTED_INSTANCE_FIELD,
		$MemberFactory::PROTECTED_INSTANCE_METHOD
	})));
	$assignStatic(MemberFactory$Group::PUBLIC_INSTANCE_F_M, $new(MemberFactory$Group, "PUBLIC_INSTANCE_F_M"_s, 8, $$new($MemberFactoryArray, {
		$MemberFactory::PUBLIC_INSTANCE_FIELD,
		$MemberFactory::PUBLIC_INSTANCE_METHOD
	})));
	$assignStatic(MemberFactory$Group::PRIVATE_STATIC_F_M, $new(MemberFactory$Group, "PRIVATE_STATIC_F_M"_s, 9, $$new($MemberFactoryArray, {
		$MemberFactory::PRIVATE_STATIC_FIELD,
		$MemberFactory::PRIVATE_STATIC_METHOD
	})));
	$assignStatic(MemberFactory$Group::PACKAGE_STATIC_F_M, $new(MemberFactory$Group, "PACKAGE_STATIC_F_M"_s, 10, $$new($MemberFactoryArray, {
		$MemberFactory::PACKAGE_STATIC_FIELD,
		$MemberFactory::PACKAGE_STATIC_METHOD
	})));
	$assignStatic(MemberFactory$Group::PROTECTED_STATIC_F_M, $new(MemberFactory$Group, "PROTECTED_STATIC_F_M"_s, 11, $$new($MemberFactoryArray, {
		$MemberFactory::PROTECTED_STATIC_FIELD,
		$MemberFactory::PROTECTED_STATIC_METHOD
	})));
	$assignStatic(MemberFactory$Group::PUBLIC_STATIC_F_M, $new(MemberFactory$Group, "PUBLIC_STATIC_F_M"_s, 12, $$new($MemberFactoryArray, {
		$MemberFactory::PUBLIC_STATIC_FIELD,
		$MemberFactory::PUBLIC_STATIC_METHOD
	})));
	$assignStatic(MemberFactory$Group::PRIVATE_C, $new(MemberFactory$Group, "PRIVATE_C"_s, 13, $$new($MemberFactoryArray, {$MemberFactory::PRIVATE_CONSTRUCTOR})));
	$assignStatic(MemberFactory$Group::PACKAGE_C, $new(MemberFactory$Group, "PACKAGE_C"_s, 14, $$new($MemberFactoryArray, {$MemberFactory::PACKAGE_CONSTRUCTOR})));
	$assignStatic(MemberFactory$Group::PROTECTED_C, $new(MemberFactory$Group, "PROTECTED_C"_s, 15, $$new($MemberFactoryArray, {$MemberFactory::PROTECTED_CONSTRUCTOR})));
	$assignStatic(MemberFactory$Group::PUBLIC_C, $new(MemberFactory$Group, "PUBLIC_C"_s, 16, $$new($MemberFactoryArray, {$MemberFactory::PUBLIC_CONSTRUCTOR})));
	$assignStatic(MemberFactory$Group::$VALUES, MemberFactory$Group::$values());
}

MemberFactory$Group::MemberFactory$Group() {
}

$Class* MemberFactory$Group::load$($String* name, bool initialize) {
	$loadClass(MemberFactory$Group, name, initialize, &_MemberFactory$Group_ClassInfo_, clinit$MemberFactory$Group, allocate$MemberFactory$Group);
	return class$;
}

$Class* MemberFactory$Group::class$ = nullptr;

} // util