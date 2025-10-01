#include <java/util/Map$Entry.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Comparable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/SerializedLambda.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <java/util/KeyValueHolder.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $SerializedLambda = ::java::lang::invoke::SerializedLambda;
using $Comparator = ::java::util::Comparator;
using $KeyValueHolder = ::java::util::KeyValueHolder;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;

namespace java {
	namespace util {

class Map$Entry$$Lambda$lambda$comparingByKey$bbdbfea9$1 : public $Comparator, public $Serializable {
	$class(Map$Entry$$Lambda$lambda$comparingByKey$bbdbfea9$1, $NO_CLASS_INIT, $Comparator, $Serializable)
public:
virtual $Object0* toObject0$() const override {return ($Object0*)(void*)this;}
	void init$() {
	}
	virtual int32_t compare(Object$* c1, Object$* c2) override {
		 return Map$Entry::lambda$comparingByKey$bbdbfea9$1($cast(Map$Entry, c1), $cast(Map$Entry, c2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Map$Entry$$Lambda$lambda$comparingByKey$bbdbfea9$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Map$Entry$$Lambda$lambda$comparingByKey$bbdbfea9$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Map$Entry$$Lambda$lambda$comparingByKey$bbdbfea9$1::*)()>(&Map$Entry$$Lambda$lambda$comparingByKey$bbdbfea9$1::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo Map$Entry$$Lambda$lambda$comparingByKey$bbdbfea9$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Map$Entry$$Lambda$lambda$comparingByKey$bbdbfea9$1",
	"java.lang.Object",
	"java.util.Comparator,java.io.Serializable",
	nullptr,
	methodInfos
};
$Class* Map$Entry$$Lambda$lambda$comparingByKey$bbdbfea9$1::load$($String* name, bool initialize) {
	$loadClass(Map$Entry$$Lambda$lambda$comparingByKey$bbdbfea9$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Map$Entry$$Lambda$lambda$comparingByKey$bbdbfea9$1::class$ = nullptr;

class Map$Entry$$Lambda$lambda$comparingByValue$1065357e$1$1 : public $Comparator, public $Serializable {
	$class(Map$Entry$$Lambda$lambda$comparingByValue$1065357e$1$1, $NO_CLASS_INIT, $Comparator, $Serializable)
public:
virtual $Object0* toObject0$() const override {return ($Object0*)(void*)this;}
	void init$() {
	}
	virtual int32_t compare(Object$* c1, Object$* c2) override {
		 return Map$Entry::lambda$comparingByValue$1065357e$1($cast(Map$Entry, c1), $cast(Map$Entry, c2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Map$Entry$$Lambda$lambda$comparingByValue$1065357e$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Map$Entry$$Lambda$lambda$comparingByValue$1065357e$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Map$Entry$$Lambda$lambda$comparingByValue$1065357e$1$1::*)()>(&Map$Entry$$Lambda$lambda$comparingByValue$1065357e$1$1::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo Map$Entry$$Lambda$lambda$comparingByValue$1065357e$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Map$Entry$$Lambda$lambda$comparingByValue$1065357e$1$1",
	"java.lang.Object",
	"java.util.Comparator,java.io.Serializable",
	nullptr,
	methodInfos
};
$Class* Map$Entry$$Lambda$lambda$comparingByValue$1065357e$1$1::load$($String* name, bool initialize) {
	$loadClass(Map$Entry$$Lambda$lambda$comparingByValue$1065357e$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Map$Entry$$Lambda$lambda$comparingByValue$1065357e$1$1::class$ = nullptr;

class Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2 : public $Comparator, public $Serializable {
	$class(Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2, $NO_CLASS_INIT, $Comparator, $Serializable)
public:
virtual $Object0* toObject0$() const override {return ($Object0*)(void*)this;}
	void init$($Comparator* cmp) {
		$set(this, cmp, cmp);
	}
	virtual int32_t compare(Object$* c1, Object$* c2) override {
		 return Map$Entry::lambda$comparingByKey$6d558cbf$1(cmp, $cast(Map$Entry, c1), $cast(Map$Entry, c2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2>());
	}
	$Comparator* cmp = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2::fieldInfos[2] = {
	{"cmp", "Ljava/util/Comparator;", nullptr, $PUBLIC, $field(Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2, cmp)},
	{}
};
$MethodInfo Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2::methodInfos[3] = {
	{"<init>", "(Ljava/util/Comparator;)V", nullptr, $PUBLIC, $method(static_cast<void(Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2::*)($Comparator*)>(&Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2",
	"java.lang.Object",
	"java.util.Comparator,java.io.Serializable",
	fieldInfos,
	methodInfos
};
$Class* Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2::load$($String* name, bool initialize) {
	$loadClass(Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2::class$ = nullptr;

class Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3 : public $Comparator, public $Serializable {
	$class(Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3, $NO_CLASS_INIT, $Comparator, $Serializable)
public:
virtual $Object0* toObject0$() const override {return ($Object0*)(void*)this;}
	void init$($Comparator* cmp) {
		$set(this, cmp, cmp);
	}
	virtual int32_t compare(Object$* c1, Object$* c2) override {
		 return Map$Entry::lambda$comparingByValue$827a17d5$1(cmp, $cast(Map$Entry, c1), $cast(Map$Entry, c2));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3>());
	}
	$Comparator* cmp = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3::fieldInfos[2] = {
	{"cmp", "Ljava/util/Comparator;", nullptr, $PUBLIC, $field(Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3, cmp)},
	{}
};
$MethodInfo Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/Comparator;)V", nullptr, $PUBLIC, $method(static_cast<void(Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3::*)($Comparator*)>(&Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3::init$))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{}
};
$ClassInfo Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3",
	"java.lang.Object",
	"java.util.Comparator,java.io.Serializable",
	fieldInfos,
	methodInfos
};
$Class* Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3::load$($String* name, bool initialize) {
	$loadClass(Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3::class$ = nullptr;

$MethodInfo _Map$Entry_MethodInfo_[] = {
	{"$deserializeLambda$", "(Ljava/lang/invoke/SerializedLambda;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($SerializedLambda*)>(&Map$Entry::$deserializeLambda$))},
	{"comparingByKey", "()Ljava/util/Comparator;", "<K::Ljava/lang/Comparable<-TK;>;V:Ljava/lang/Object;>()Ljava/util/Comparator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC | $STATIC, $method(static_cast<$Comparator*(*)()>(&Map$Entry::comparingByKey))},
	{"comparingByKey", "(Ljava/util/Comparator;)Ljava/util/Comparator;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/Comparator<-TK;>;)Ljava/util/Comparator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC | $STATIC, $method(static_cast<$Comparator*(*)($Comparator*)>(&Map$Entry::comparingByKey))},
	{"comparingByValue", "()Ljava/util/Comparator;", "<K:Ljava/lang/Object;V::Ljava/lang/Comparable<-TV;>;>()Ljava/util/Comparator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC | $STATIC, $method(static_cast<$Comparator*(*)()>(&Map$Entry::comparingByValue))},
	{"comparingByValue", "(Ljava/util/Comparator;)Ljava/util/Comparator;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/Comparator<-TV;>;)Ljava/util/Comparator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC | $STATIC, $method(static_cast<$Comparator*(*)($Comparator*)>(&Map$Entry::comparingByValue))},
	{"copyOf", "(Ljava/util/Map$Entry;)Ljava/util/Map$Entry;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/Map$Entry<+TK;+TV;>;)Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<Map$Entry*(*)(Map$Entry*)>(&Map$Entry::copyOf))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getKey", "()Ljava/lang/Object;", "()TK;", $PUBLIC | $ABSTRACT},
	{"getValue", "()Ljava/lang/Object;", "()TV;", $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"lambda$comparingByKey$6d558cbf$1", "(Ljava/util/Comparator;Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($Comparator*,Map$Entry*,Map$Entry*)>(&Map$Entry::lambda$comparingByKey$6d558cbf$1))},
	{"lambda$comparingByKey$bbdbfea9$1", "(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(Map$Entry*,Map$Entry*)>(&Map$Entry::lambda$comparingByKey$bbdbfea9$1))},
	{"lambda$comparingByValue$1065357e$1", "(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(Map$Entry*,Map$Entry*)>(&Map$Entry::lambda$comparingByValue$1065357e$1))},
	{"lambda$comparingByValue$827a17d5$1", "(Ljava/util/Comparator;Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($Comparator*,Map$Entry*,Map$Entry*)>(&Map$Entry::lambda$comparingByValue$827a17d5$1))},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TV;)TV;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Map$Entry_InnerClassesInfo_[] = {
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Map$Entry_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.Map$Entry",
	nullptr,
	nullptr,
	nullptr,
	_Map$Entry_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Map$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Map"
};

$Object* allocate$Map$Entry($Class* clazz) {
	return $of($alloc(Map$Entry));
}

bool Map$Entry::equals(Object$* o) {
	 return this->$Object::equals(o);
}

int32_t Map$Entry::hashCode() {
	 return this->$Object::hashCode();
}

$Comparator* Map$Entry::comparingByKey() {
	return $cast($Comparator, $cast($Serializable, static_cast<$Comparator*>($new(Map$Entry$$Lambda$lambda$comparingByKey$bbdbfea9$1))));
}

$Comparator* Map$Entry::comparingByValue() {
	return $cast($Comparator, $cast($Serializable, static_cast<$Comparator*>($new(Map$Entry$$Lambda$lambda$comparingByValue$1065357e$1$1))));
}

$Comparator* Map$Entry::comparingByKey($Comparator* cmp) {
	$Objects::requireNonNull(cmp);
	return $cast($Comparator, $cast($Serializable, static_cast<$Comparator*>($new(Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2, cmp))));
}

$Comparator* Map$Entry::comparingByValue($Comparator* cmp) {
	$Objects::requireNonNull(cmp);
	return $cast($Comparator, $cast($Serializable, static_cast<$Comparator*>($new(Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3, cmp))));
}

Map$Entry* Map$Entry::copyOf(Map$Entry* e) {
	$Objects::requireNonNull(e);
	if ($instanceOf($KeyValueHolder, e)) {
		return e;
	} else {
		$var($Object, var$0, e->getKey());
		return $Map::entry(var$0, $(e->getValue()));
	}
}

$Object* Map$Entry::$deserializeLambda$($SerializedLambda* lambda) {
	{
		$var($String, s21596$, $nc(lambda)->getImplMethodName());
		int32_t tmp21596$ = -1;
		switch ($nc(s21596$)->hashCode()) {
		case 0x33855477:
			{
				if (s21596$->equals("lambda$comparingByValue$827a17d5$1"_s)) {
					tmp21596$ = 0;
				}
				break;
			}
		case (int32_t)0xD4D0DF83:
			{
				if (s21596$->equals("lambda$comparingByKey$bbdbfea9$1"_s)) {
					tmp21596$ = 1;
				}
				break;
			}
		case (int32_t)0xE0C0C44A:
			{
				if (s21596$->equals("lambda$comparingByValue$1065357e$1"_s)) {
					tmp21596$ = 2;
				}
				break;
			}
		case 0x5350A68B:
			{
				if (s21596$->equals("lambda$comparingByKey$6d558cbf$1"_s)) {
					tmp21596$ = 3;
				}
				break;
			}
		}
		switch (tmp21596$) {
		case 0:
			{
				bool var$4 = lambda->getImplMethodKind() == 6;
				bool var$3 = var$4 && $nc($of($(lambda->getFunctionalInterfaceClass())))->equals("java/util/Comparator"_s);
				bool var$2 = var$3 && $nc($of($(lambda->getFunctionalInterfaceMethodName())))->equals("compare"_s);
				bool var$1 = var$2 && $nc($of($(lambda->getFunctionalInterfaceMethodSignature())))->equals("(Ljava/lang/Object;Ljava/lang/Object;)I"_s);
				bool var$0 = var$1 && $nc($of($(lambda->getImplClass())))->equals("java/util/Map$Entry"_s);
				if (var$0 && $nc($of($(lambda->getImplMethodSignature())))->equals("(Ljava/util/Comparator;Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I"_s)) {
					return $of(static_cast<$Comparator*>($new(Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3, $cast($Comparator, $(lambda->getCapturedArg(0))))));
				}
				break;
			}
		case 1:
			{
				bool var$9 = lambda->getImplMethodKind() == 6;
				bool var$8 = var$9 && $nc($of($(lambda->getFunctionalInterfaceClass())))->equals("java/util/Comparator"_s);
				bool var$7 = var$8 && $nc($of($(lambda->getFunctionalInterfaceMethodName())))->equals("compare"_s);
				bool var$6 = var$7 && $nc($of($(lambda->getFunctionalInterfaceMethodSignature())))->equals("(Ljava/lang/Object;Ljava/lang/Object;)I"_s);
				bool var$5 = var$6 && $nc($of($(lambda->getImplClass())))->equals("java/util/Map$Entry"_s);
				if (var$5 && $nc($of($(lambda->getImplMethodSignature())))->equals("(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I"_s)) {
					return $of(static_cast<$Comparator*>($new(Map$Entry$$Lambda$lambda$comparingByKey$bbdbfea9$1)));
				}
				break;
			}
		case 2:
			{
				bool var$14 = lambda->getImplMethodKind() == 6;
				bool var$13 = var$14 && $nc($of($(lambda->getFunctionalInterfaceClass())))->equals("java/util/Comparator"_s);
				bool var$12 = var$13 && $nc($of($(lambda->getFunctionalInterfaceMethodName())))->equals("compare"_s);
				bool var$11 = var$12 && $nc($of($(lambda->getFunctionalInterfaceMethodSignature())))->equals("(Ljava/lang/Object;Ljava/lang/Object;)I"_s);
				bool var$10 = var$11 && $nc($of($(lambda->getImplClass())))->equals("java/util/Map$Entry"_s);
				if (var$10 && $nc($of($(lambda->getImplMethodSignature())))->equals("(Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I"_s)) {
					return $of(static_cast<$Comparator*>($new(Map$Entry$$Lambda$lambda$comparingByValue$1065357e$1$1)));
				}
				break;
			}
		case 3:
			{
				bool var$19 = lambda->getImplMethodKind() == 6;
				bool var$18 = var$19 && $nc($of($(lambda->getFunctionalInterfaceClass())))->equals("java/util/Comparator"_s);
				bool var$17 = var$18 && $nc($of($(lambda->getFunctionalInterfaceMethodName())))->equals("compare"_s);
				bool var$16 = var$17 && $nc($of($(lambda->getFunctionalInterfaceMethodSignature())))->equals("(Ljava/lang/Object;Ljava/lang/Object;)I"_s);
				bool var$15 = var$16 && $nc($of($(lambda->getImplClass())))->equals("java/util/Map$Entry"_s);
				if (var$15 && $nc($of($(lambda->getImplMethodSignature())))->equals("(Ljava/util/Comparator;Ljava/util/Map$Entry;Ljava/util/Map$Entry;)I"_s)) {
					return $of(static_cast<$Comparator*>($new(Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2, $cast($Comparator, $(lambda->getCapturedArg(0))))));
				}
				break;
			}
		}
	}
	$throwNew($IllegalArgumentException, "Invalid lambda deserialization"_s);
}

int32_t Map$Entry::lambda$comparingByValue$827a17d5$1($Comparator* cmp, Map$Entry* c1, Map$Entry* c2) {
	$var($Object, var$0, $nc(c1)->getValue());
	return $nc(cmp)->compare(var$0, $($nc(c2)->getValue()));
}

int32_t Map$Entry::lambda$comparingByKey$6d558cbf$1($Comparator* cmp, Map$Entry* c1, Map$Entry* c2) {
	$var($Object, var$0, $nc(c1)->getKey());
	return $nc(cmp)->compare(var$0, $($nc(c2)->getKey()));
}

int32_t Map$Entry::lambda$comparingByValue$1065357e$1(Map$Entry* c1, Map$Entry* c2) {
	return $nc(($cast($Comparable, $($nc(c1)->getValue()))))->compareTo($($nc(c2)->getValue()));
}

int32_t Map$Entry::lambda$comparingByKey$bbdbfea9$1(Map$Entry* c1, Map$Entry* c2) {
	return $nc(($cast($Comparable, $($nc(c1)->getKey()))))->compareTo($($nc(c2)->getKey()));
}

$Class* Map$Entry::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Map$Entry$$Lambda$lambda$comparingByKey$bbdbfea9$1::classInfo$.name)) {
			return Map$Entry$$Lambda$lambda$comparingByKey$bbdbfea9$1::load$(name, initialize);
		}
		if (name->equals(Map$Entry$$Lambda$lambda$comparingByValue$1065357e$1$1::classInfo$.name)) {
			return Map$Entry$$Lambda$lambda$comparingByValue$1065357e$1$1::load$(name, initialize);
		}
		if (name->equals(Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2::classInfo$.name)) {
			return Map$Entry$$Lambda$lambda$comparingByKey$6d558cbf$1$2::load$(name, initialize);
		}
		if (name->equals(Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3::classInfo$.name)) {
			return Map$Entry$$Lambda$lambda$comparingByValue$827a17d5$1$3::load$(name, initialize);
		}
	}
	$loadClass(Map$Entry, name, initialize, &_Map$Entry_ClassInfo_, allocate$Map$Entry);
	return class$;
}

$Class* Map$Entry::class$ = nullptr;

	} // util
} // java