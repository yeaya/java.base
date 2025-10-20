#include <java/lang/Enum.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Enum$EnumDesc.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/Constable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Serializable = ::java::io::Serializable;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Comparable = ::java::lang::Comparable;
using $Enum$EnumDesc = ::java::lang::Enum$EnumDesc;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ClassDesc = ::java::lang::constant::ClassDesc;
using $Constable = ::java::lang::constant::Constable;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Function = ::java::util::function::Function;

namespace java {
	namespace lang {

class Enum$$Lambda$lambda$describeConstable$0 : public $Function {
	$class(Enum$$Lambda$lambda$describeConstable$0, $NO_CLASS_INIT, $Function)
public:
	void init$(Enum* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* c) override {
		 return $of($nc(inst$)->lambda$describeConstable$0($cast($ClassDesc, c)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Enum$$Lambda$lambda$describeConstable$0>());
	}
	Enum* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Enum$$Lambda$lambda$describeConstable$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Enum$$Lambda$lambda$describeConstable$0, inst$)},
	{}
};
$MethodInfo Enum$$Lambda$lambda$describeConstable$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Enum;)V", nullptr, $PUBLIC, $method(static_cast<void(Enum$$Lambda$lambda$describeConstable$0::*)(Enum*)>(&Enum$$Lambda$lambda$describeConstable$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Enum$$Lambda$lambda$describeConstable$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.Enum$$Lambda$lambda$describeConstable$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* Enum$$Lambda$lambda$describeConstable$0::load$($String* name, bool initialize) {
	$loadClass(Enum$$Lambda$lambda$describeConstable$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Enum$$Lambda$lambda$describeConstable$0::class$ = nullptr;

$FieldInfo _Enum_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Enum, name$)},
	{"ordinal", "I", nullptr, $PRIVATE | $FINAL, $field(Enum, ordinal$)},
	{}
};

$MethodInfo _Enum_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PROTECTED, $method(static_cast<void(Enum::*)($String*,int32_t)>(&Enum::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, nullptr, "java.lang.CloneNotSupportedException"},
	{"compareTo", "(Ljava/lang/Enum;)I", "(TE;)I", $PUBLIC | $FINAL, $method(static_cast<int32_t(Enum::*)(Enum*)>(&Enum::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/Enum$EnumDesc<TE;>;>;", $PUBLIC | $FINAL},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"getDeclaringClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<TE;>;", $PUBLIC | $FINAL, $method(static_cast<$Class*(Enum::*)()>(&Enum::getDeclaringClass))},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"lambda$describeConstable$0", "(Ljava/lang/constant/ClassDesc;)Ljava/lang/Enum$EnumDesc;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$Enum$EnumDesc*(Enum::*)($ClassDesc*)>(&Enum::lambda$describeConstable$0))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(Enum::*)()>(&Enum::name))},
	{"ordinal", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Enum::*)()>(&Enum::ordinal))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Enum::*)($ObjectInputStream*)>(&Enum::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"readObjectNoData", "()V", nullptr, $PRIVATE, $method(static_cast<void(Enum::*)()>(&Enum::readObjectNoData)), "java.io.ObjectStreamException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;", "<T:Ljava/lang/Enum<TT;>;>(Ljava/lang/Class<TT;>;Ljava/lang/String;)TT;", $PUBLIC | $STATIC, $method(static_cast<Enum*(*)($Class*,$String*)>(&Enum::valueOf))},
	{}
};

$InnerClassInfo _Enum_InnerClassesInfo_[] = {
	{"java.lang.Enum$EnumDesc", "java.lang.Enum", "EnumDesc", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _Enum_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.lang.Enum",
	"java.lang.Object",
	"java.lang.constant.Constable,java.lang.Comparable,java.io.Serializable",
	_Enum_FieldInfo_,
	_Enum_MethodInfo_,
	"<E:Ljava/lang/Enum<TE;>;>Ljava/lang/Object;Ljava/lang/constant/Constable;Ljava/lang/Comparable<TE;>;Ljava/io/Serializable;",
	nullptr,
	_Enum_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.Enum$EnumDesc"
};

$Object* allocate$Enum($Class* clazz) {
	return $of($alloc(Enum));
}

$String* Enum::name() {
	return this->name$;
}

int32_t Enum::ordinal() {
	return this->ordinal$;
}

void Enum::init$($String* name, int32_t ordinal) {
	$set(this, name$, name);
	this->ordinal$ = ordinal;
}

$String* Enum::toString() {
	return this->name$;
}

bool Enum::equals(Object$* other) {
	return $equals(this, other);
}

int32_t Enum::hashCode() {
	return $Constable::hashCode();
}

$Object* Enum::clone() {
	$throwNew($CloneNotSupportedException);
	$shouldNotReachHere();
}

int32_t Enum::compareTo(Enum* o) {
	$useLocalCurrentObjectStackCache();
	$var(Enum, other, o);
	$var(Enum, self, this);
	bool var$0 = $of(self)->getClass() != $nc($of(other))->getClass();
	if (var$0) {
		var$0 = self->getDeclaringClass() != other->getDeclaringClass();
	}
	if (var$0) {
		$throwNew($ClassCastException);
	}
	return self->ordinal$ - $nc(other)->ordinal$;
}

$Class* Enum::getDeclaringClass() {
	$Class* clazz = $of(this)->getClass();
	$Class* zuper = $nc(clazz)->getSuperclass();
	return (zuper == Enum::class$) ? clazz : zuper;
}

$Optional* Enum::describeConstable() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc(getDeclaringClass())->describeConstable()))->map(static_cast<$Function*>($$new(Enum$$Lambda$lambda$describeConstable$0, this)));
}

Enum* Enum::valueOf($Class* enumClass, $String* name) {
	$init(Enum);
	$useLocalCurrentObjectStackCache();
	$var(Enum, result, $cast(Enum, $nc($($nc(enumClass)->enumConstantDirectory()))->get(name)));
	if (result != nullptr) {
		return result;
	}
	if (name == nullptr) {
		$throwNew($NullPointerException, "Name is null"_s);
	}
	$throwNew($IllegalArgumentException, $$str({"No enum constant "_s, $(enumClass->getCanonicalName()), "."_s, name}));
}

void Enum::finalize() {
}

void Enum::readObject($ObjectInputStream* in) {
	$throwNew($InvalidObjectException, "can\'t deserialize enum"_s);
}

void Enum::readObjectNoData() {
	$throwNew($InvalidObjectException, "can\'t deserialize enum"_s);
}

int32_t Enum::compareTo(Object$* o) {
	return this->compareTo($cast(Enum, o));
}

$Enum$EnumDesc* Enum::lambda$describeConstable$0($ClassDesc* c) {
	return $Enum$EnumDesc::of(c, this->name$);
}

Enum::Enum() {
}

$Class* Enum::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Enum$$Lambda$lambda$describeConstable$0::classInfo$.name)) {
			return Enum$$Lambda$lambda$describeConstable$0::load$(name, initialize);
		}
	}
	$loadClass(Enum, name, initialize, &_Enum_ClassInfo_, allocate$Enum);
	return class$;
}

$Class* Enum::class$ = nullptr;

	} // lang
} // java