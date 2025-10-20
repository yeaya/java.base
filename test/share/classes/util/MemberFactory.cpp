#include <util/MemberFactory.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/reflect/AccessibleObject.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractSet.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <util/MemberFactory$Group.h>
#include <util/MemberFactory$Kind.h>
#include <jcpp.h>

#undef CONSTRUCTOR
#undef FIELD
#undef METHOD
#undef PACKAGE_CONSTRUCTOR
#undef PACKAGE_INSTANCE_FIELD
#undef PACKAGE_INSTANCE_METHOD
#undef PACKAGE_STATIC_FIELD
#undef PACKAGE_STATIC_METHOD
#undef PRIVATE_CONSTRUCTOR
#undef PRIVATE_INSTANCE_FIELD
#undef PRIVATE_INSTANCE_METHOD
#undef PRIVATE_STATIC_FIELD
#undef PRIVATE_STATIC_METHOD
#undef PROTECTED_CONSTRUCTOR
#undef PROTECTED_INSTANCE_FIELD
#undef PROTECTED_INSTANCE_METHOD
#undef PROTECTED_STATIC_FIELD
#undef PROTECTED_STATIC_METHOD
#undef PUBLIC_CONSTRUCTOR
#undef PUBLIC_INSTANCE_FIELD
#undef PUBLIC_INSTANCE_METHOD
#undef PUBLIC_STATIC_FIELD
#undef PUBLIC_STATIC_METHOD

using $MemberFactoryArray = $Array<::util::MemberFactory>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $AccessibleObject = ::java::lang::reflect::AccessibleObject;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractSet = ::java::util::AbstractSet;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $MemberFactory$Group = ::util::MemberFactory$Group;
using $MemberFactory$Kind = ::util::MemberFactory$Kind;

namespace util {

$FieldInfo _MemberFactory_FieldInfo_[] = {
	{"PRIVATE_INSTANCE_FIELD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PRIVATE_INSTANCE_FIELD)},
	{"PACKAGE_INSTANCE_FIELD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PACKAGE_INSTANCE_FIELD)},
	{"PROTECTED_INSTANCE_FIELD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PROTECTED_INSTANCE_FIELD)},
	{"PUBLIC_INSTANCE_FIELD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PUBLIC_INSTANCE_FIELD)},
	{"PRIVATE_INSTANCE_METHOD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PRIVATE_INSTANCE_METHOD)},
	{"PACKAGE_INSTANCE_METHOD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PACKAGE_INSTANCE_METHOD)},
	{"PROTECTED_INSTANCE_METHOD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PROTECTED_INSTANCE_METHOD)},
	{"PUBLIC_INSTANCE_METHOD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PUBLIC_INSTANCE_METHOD)},
	{"PRIVATE_STATIC_FIELD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PRIVATE_STATIC_FIELD)},
	{"PACKAGE_STATIC_FIELD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PACKAGE_STATIC_FIELD)},
	{"PROTECTED_STATIC_FIELD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PROTECTED_STATIC_FIELD)},
	{"PUBLIC_STATIC_FIELD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PUBLIC_STATIC_FIELD)},
	{"PRIVATE_STATIC_METHOD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PRIVATE_STATIC_METHOD)},
	{"PACKAGE_STATIC_METHOD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PACKAGE_STATIC_METHOD)},
	{"PROTECTED_STATIC_METHOD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PROTECTED_STATIC_METHOD)},
	{"PUBLIC_STATIC_METHOD", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PUBLIC_STATIC_METHOD)},
	{"PRIVATE_CONSTRUCTOR", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PRIVATE_CONSTRUCTOR)},
	{"PACKAGE_CONSTRUCTOR", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PACKAGE_CONSTRUCTOR)},
	{"PROTECTED_CONSTRUCTOR", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PROTECTED_CONSTRUCTOR)},
	{"PUBLIC_CONSTRUCTOR", "Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemberFactory, PUBLIC_CONSTRUCTOR)},
	{"$VALUES", "[Lutil/MemberFactory;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MemberFactory, $VALUES)},
	{"kind", "Lutil/MemberFactory$Kind;", nullptr, $FINAL, $field(MemberFactory, kind)},
	{"name", "Ljava/lang/String;", nullptr, $FINAL, $field(MemberFactory, name$)},
	{"parameterTypes", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $FINAL, $field(MemberFactory, parameterTypes)},
	{}
};

$MethodInfo _MemberFactory_MethodInfo_[] = {
	{"$values", "()[Lutil/MemberFactory;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MemberFactoryArray*(*)()>(&MemberFactory::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILutil/MemberFactory$Kind;Ljava/lang/String;[Ljava/lang/Class;)V", "(Lutil/MemberFactory$Kind;Ljava/lang/String;[Ljava/lang/Class<*>;)V", $PRIVATE | $TRANSIENT, $method(static_cast<void(MemberFactory::*)($String*,int32_t,$MemberFactory$Kind*,$String*,$ClassArray*)>(&MemberFactory::init$))},
	{"apply", "(Ljava/lang/Class;)Ljava/lang/reflect/AccessibleObject;", "(Ljava/lang/Class<*>;)Ljava/lang/reflect/AccessibleObject;", $PUBLIC, $method(static_cast<$AccessibleObject*(MemberFactory::*)($Class*)>(&MemberFactory::apply))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"asSet", "([Lutil/MemberFactory;)Ljava/util/EnumSet;", "([Lutil/MemberFactory;)Ljava/util/EnumSet<Lutil/MemberFactory;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$EnumSet*(*)($MemberFactoryArray*)>(&MemberFactory::asSet))},
	{"groupsToMembers", "(Ljava/util/EnumSet;)Ljava/util/EnumSet;", "(Ljava/util/EnumSet<Lutil/MemberFactory$Group;>;)Ljava/util/EnumSet<Lutil/MemberFactory;>;", $PUBLIC | $STATIC, $method(static_cast<$EnumSet*(*)($EnumSet*)>(&MemberFactory::groupsToMembers))},
	{"membersToGroupsOrNull", "(Ljava/util/EnumSet;)Ljava/util/EnumSet;", "(Ljava/util/EnumSet<Lutil/MemberFactory;>;)Ljava/util/EnumSet<Lutil/MemberFactory$Group;>;", $PUBLIC | $STATIC, $method(static_cast<$EnumSet*(*)($EnumSet*)>(&MemberFactory::membersToGroupsOrNull))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MemberFactory*(*)($String*)>(&MemberFactory::valueOf))},
	{"values", "()[Lutil/MemberFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MemberFactoryArray*(*)()>(&MemberFactory::values))},
	{}
};

$InnerClassInfo _MemberFactory_InnerClassesInfo_[] = {
	{"util.MemberFactory$Group", "util.MemberFactory", "Group", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"util.MemberFactory$Kind", "util.MemberFactory", "Kind", $STATIC | $ABSTRACT | $ENUM},
	{}
};

$ClassInfo _MemberFactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"util.MemberFactory",
	"java.lang.Enum",
	"java.util.function.Function",
	_MemberFactory_FieldInfo_,
	_MemberFactory_MethodInfo_,
	"Ljava/lang/Enum<Lutil/MemberFactory;>;Ljava/util/function/Function<Ljava/lang/Class<*>;Ljava/lang/reflect/AccessibleObject;>;",
	nullptr,
	_MemberFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"util.MemberFactory$Group,util.MemberFactory$Kind,util.MemberFactory$Kind$3,util.MemberFactory$Kind$2,util.MemberFactory$Kind$1"
};

$Object* allocate$MemberFactory($Class* clazz) {
	return $of($alloc(MemberFactory));
}

$String* MemberFactory::toString() {
	 return this->$Enum::toString();
}

bool MemberFactory::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t MemberFactory::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* MemberFactory::clone() {
	 return this->$Enum::clone();
}

void MemberFactory::finalize() {
	this->$Enum::finalize();
}

MemberFactory* MemberFactory::PRIVATE_INSTANCE_FIELD = nullptr;
MemberFactory* MemberFactory::PACKAGE_INSTANCE_FIELD = nullptr;
MemberFactory* MemberFactory::PROTECTED_INSTANCE_FIELD = nullptr;
MemberFactory* MemberFactory::PUBLIC_INSTANCE_FIELD = nullptr;
MemberFactory* MemberFactory::PRIVATE_INSTANCE_METHOD = nullptr;
MemberFactory* MemberFactory::PACKAGE_INSTANCE_METHOD = nullptr;
MemberFactory* MemberFactory::PROTECTED_INSTANCE_METHOD = nullptr;
MemberFactory* MemberFactory::PUBLIC_INSTANCE_METHOD = nullptr;
MemberFactory* MemberFactory::PRIVATE_STATIC_FIELD = nullptr;
MemberFactory* MemberFactory::PACKAGE_STATIC_FIELD = nullptr;
MemberFactory* MemberFactory::PROTECTED_STATIC_FIELD = nullptr;
MemberFactory* MemberFactory::PUBLIC_STATIC_FIELD = nullptr;
MemberFactory* MemberFactory::PRIVATE_STATIC_METHOD = nullptr;
MemberFactory* MemberFactory::PACKAGE_STATIC_METHOD = nullptr;
MemberFactory* MemberFactory::PROTECTED_STATIC_METHOD = nullptr;
MemberFactory* MemberFactory::PUBLIC_STATIC_METHOD = nullptr;
MemberFactory* MemberFactory::PRIVATE_CONSTRUCTOR = nullptr;
MemberFactory* MemberFactory::PACKAGE_CONSTRUCTOR = nullptr;
MemberFactory* MemberFactory::PROTECTED_CONSTRUCTOR = nullptr;
MemberFactory* MemberFactory::PUBLIC_CONSTRUCTOR = nullptr;
$MemberFactoryArray* MemberFactory::$VALUES = nullptr;

$MemberFactoryArray* MemberFactory::$values() {
	$init(MemberFactory);
	return $new($MemberFactoryArray, {
		MemberFactory::PRIVATE_INSTANCE_FIELD,
		MemberFactory::PACKAGE_INSTANCE_FIELD,
		MemberFactory::PROTECTED_INSTANCE_FIELD,
		MemberFactory::PUBLIC_INSTANCE_FIELD,
		MemberFactory::PRIVATE_INSTANCE_METHOD,
		MemberFactory::PACKAGE_INSTANCE_METHOD,
		MemberFactory::PROTECTED_INSTANCE_METHOD,
		MemberFactory::PUBLIC_INSTANCE_METHOD,
		MemberFactory::PRIVATE_STATIC_FIELD,
		MemberFactory::PACKAGE_STATIC_FIELD,
		MemberFactory::PROTECTED_STATIC_FIELD,
		MemberFactory::PUBLIC_STATIC_FIELD,
		MemberFactory::PRIVATE_STATIC_METHOD,
		MemberFactory::PACKAGE_STATIC_METHOD,
		MemberFactory::PROTECTED_STATIC_METHOD,
		MemberFactory::PUBLIC_STATIC_METHOD,
		MemberFactory::PRIVATE_CONSTRUCTOR,
		MemberFactory::PACKAGE_CONSTRUCTOR,
		MemberFactory::PROTECTED_CONSTRUCTOR,
		MemberFactory::PUBLIC_CONSTRUCTOR
	});
}

$MemberFactoryArray* MemberFactory::values() {
	$init(MemberFactory);
	return $cast($MemberFactoryArray, MemberFactory::$VALUES->clone());
}

MemberFactory* MemberFactory::valueOf($String* name) {
	$init(MemberFactory);
	return $cast(MemberFactory, $Enum::valueOf(MemberFactory::class$, name));
}

void MemberFactory::init$($String* $enum$name, int32_t $enum$ordinal, $MemberFactory$Kind* kind, $String* name, $ClassArray* parameterTypes) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, kind, kind);
	$set(this, name$, name);
	$set(this, parameterTypes, parameterTypes);
}

$AccessibleObject* MemberFactory::apply($Class* declaringClass) {
	return $cast($AccessibleObject, this->kind->apply(declaringClass, this));
}

$EnumSet* MemberFactory::asSet($MemberFactoryArray* members) {
	$init(MemberFactory);
	return $nc(members)->length == 0 ? $EnumSet::noneOf(MemberFactory::class$) : $EnumSet::copyOf($(static_cast<$Collection*>($Arrays::asList(members))));
}

$EnumSet* MemberFactory::membersToGroupsOrNull($EnumSet* members) {
	$init(MemberFactory);
	$useLocalCurrentObjectStackCache();
	$var($EnumSet, mSet, $cast($EnumSet, $nc(members)->clone()));
	$load($MemberFactory$Group);
	$var($EnumSet, gSet, $EnumSet::allOf($MemberFactory$Group::class$));
	$var($Iterator, gIter, $nc(gSet)->iterator());
	while ($nc(gIter)->hasNext()) {
		$MemberFactory$Group* g = $cast($MemberFactory$Group, gIter->next());
		if ($nc(mSet)->containsAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>($nc(g)->members))))) {
			mSet->removeAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>($nc(g)->members))));
		} else {
			gIter->remove();
		}
	}
	return $nc(mSet)->isEmpty() ? gSet : ($EnumSet*)nullptr;
}

$EnumSet* MemberFactory::groupsToMembers($EnumSet* groups) {
	$init(MemberFactory);
	$useLocalCurrentObjectStackCache();
	$var($EnumSet, mSet, $EnumSet::noneOf(MemberFactory::class$));
	{
		$var($Iterator, i$, $nc(groups)->iterator());
		for (; $nc(i$)->hasNext();) {
			$MemberFactory$Group* g = $cast($MemberFactory$Group, i$->next());
			{
				$nc(mSet)->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>($nc(g)->members))));
			}
		}
	}
	return mSet;
}

$Object* MemberFactory::apply(Object$* declaringClass) {
	return $of(this->apply($cast($Class, declaringClass)));
}

void clinit$MemberFactory($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($MemberFactory$Kind);
	$assignStatic(MemberFactory::PRIVATE_INSTANCE_FIELD, $new(MemberFactory, "PRIVATE_INSTANCE_FIELD"_s, 0, $MemberFactory$Kind::FIELD, "privateInstance"_s, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::PACKAGE_INSTANCE_FIELD, $new(MemberFactory, "PACKAGE_INSTANCE_FIELD"_s, 1, $MemberFactory$Kind::FIELD, "packageInstance"_s, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::PROTECTED_INSTANCE_FIELD, $new(MemberFactory, "PROTECTED_INSTANCE_FIELD"_s, 2, $MemberFactory$Kind::FIELD, "protectedInstance"_s, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::PUBLIC_INSTANCE_FIELD, $new(MemberFactory, "PUBLIC_INSTANCE_FIELD"_s, 3, $MemberFactory$Kind::FIELD, "publicInstance"_s, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::PRIVATE_INSTANCE_METHOD, $new(MemberFactory, "PRIVATE_INSTANCE_METHOD"_s, 4, $MemberFactory$Kind::METHOD, "privateInstance"_s, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::PACKAGE_INSTANCE_METHOD, $new(MemberFactory, "PACKAGE_INSTANCE_METHOD"_s, 5, $MemberFactory$Kind::METHOD, "packageInstance"_s, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::PROTECTED_INSTANCE_METHOD, $new(MemberFactory, "PROTECTED_INSTANCE_METHOD"_s, 6, $MemberFactory$Kind::METHOD, "protectedInstance"_s, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::PUBLIC_INSTANCE_METHOD, $new(MemberFactory, "PUBLIC_INSTANCE_METHOD"_s, 7, $MemberFactory$Kind::METHOD, "publicInstance"_s, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::PRIVATE_STATIC_FIELD, $new(MemberFactory, "PRIVATE_STATIC_FIELD"_s, 8, $MemberFactory$Kind::FIELD, "privateStatic"_s, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::PACKAGE_STATIC_FIELD, $new(MemberFactory, "PACKAGE_STATIC_FIELD"_s, 9, $MemberFactory$Kind::FIELD, "packageStatic"_s, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::PROTECTED_STATIC_FIELD, $new(MemberFactory, "PROTECTED_STATIC_FIELD"_s, 10, $MemberFactory$Kind::FIELD, "protectedStatic"_s, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::PUBLIC_STATIC_FIELD, $new(MemberFactory, "PUBLIC_STATIC_FIELD"_s, 11, $MemberFactory$Kind::FIELD, "publicStatic"_s, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::PRIVATE_STATIC_METHOD, $new(MemberFactory, "PRIVATE_STATIC_METHOD"_s, 12, $MemberFactory$Kind::METHOD, "privateStatic"_s, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::PACKAGE_STATIC_METHOD, $new(MemberFactory, "PACKAGE_STATIC_METHOD"_s, 13, $MemberFactory$Kind::METHOD, "packageStatic"_s, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::PROTECTED_STATIC_METHOD, $new(MemberFactory, "PROTECTED_STATIC_METHOD"_s, 14, $MemberFactory$Kind::METHOD, "protectedStatic"_s, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::PUBLIC_STATIC_METHOD, $new(MemberFactory, "PUBLIC_STATIC_METHOD"_s, 15, $MemberFactory$Kind::METHOD, "publicStatic"_s, $$new($ClassArray, 0)));
		$load($Void);
	$assignStatic(MemberFactory::PRIVATE_CONSTRUCTOR, $new(MemberFactory, "PRIVATE_CONSTRUCTOR"_s, 16, $MemberFactory$Kind::CONSTRUCTOR, nullptr, $$new($ClassArray, {
		$Void::class$,
		$Void::class$,
		$Void::class$
	})));
	$assignStatic(MemberFactory::PACKAGE_CONSTRUCTOR, $new(MemberFactory, "PACKAGE_CONSTRUCTOR"_s, 17, $MemberFactory$Kind::CONSTRUCTOR, nullptr, $$new($ClassArray, {
		$Void::class$,
		$Void::class$
	})));
	$assignStatic(MemberFactory::PROTECTED_CONSTRUCTOR, $new(MemberFactory, "PROTECTED_CONSTRUCTOR"_s, 18, $MemberFactory$Kind::CONSTRUCTOR, nullptr, $$new($ClassArray, {$Void::class$})));
	$assignStatic(MemberFactory::PUBLIC_CONSTRUCTOR, $new(MemberFactory, "PUBLIC_CONSTRUCTOR"_s, 19, $MemberFactory$Kind::CONSTRUCTOR, nullptr, $$new($ClassArray, 0)));
	$assignStatic(MemberFactory::$VALUES, MemberFactory::$values());
}

MemberFactory::MemberFactory() {
}

$Class* MemberFactory::load$($String* name, bool initialize) {
	$loadClass(MemberFactory, name, initialize, &_MemberFactory_ClassInfo_, clinit$MemberFactory, allocate$MemberFactory);
	return class$;
}

$Class* MemberFactory::class$ = nullptr;

} // util